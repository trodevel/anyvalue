/*

Value. Serializer.

Copyright (C) 2019 Sergey Kolevatov

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.

*/

// $Revision: 11691 $ $Date:: 2019-05-30 #$ $Author: serge $

#include "serializer.h"     // self

#include <stdexcept>        // std::invalid_argument

#include "serializer/serializer.h"   // serializer::

namespace serializer
{

anyvalue::Value* load( std::istream & is, anyvalue::Value* e )
{
    return anyvalue::Serializer::load( is, e );
}

anyvalue::Value** load( std::istream & is, anyvalue::Value** e )
{
    if( e != nullptr )
        throw std::invalid_argument( "Serializer::load: e must be null" );

    auto el = new anyvalue::Value;

    auto res = anyvalue::Serializer::load( is, el );

    if( res == nullptr )
    {
        delete el;
        return nullptr;
    }

    *e =  el;

    return e;
}

bool save( std::ostream & os, const anyvalue::Value & e )
{
    return anyvalue::Serializer::save( os, e );
}

}

namespace anyvalue
{

Value* Serializer::load_1( std::istream & is, Value* e )
{
    if( e == nullptr )
        throw std::invalid_argument( "Serializer::load: Value is null" );

    if( load( is, & e->type ) == nullptr )
        return nullptr;

    switch( e->type )
    {
    case data_type_e::BOOL:
        if( serializer::load( is, & e->arg_b ) == nullptr )
            return nullptr;
        break;
    case data_type_e::INT:
        if( serializer::load( is, & e->arg_i ) == nullptr )
            return nullptr;
        break;
    case data_type_e::DOUBLE:
        if( serializer::load( is, & e->arg_d ) == nullptr )
            return nullptr;
        break;
    case data_type_e::STRING:
        if( serializer::load_enc( is, & e->arg_s ) == nullptr )
            return nullptr;
        break;
    default:
        return nullptr;     // unknown type
        break;
    }

    harmonize( e );

    return e;
}

Value* Serializer::load( std::istream & is, Value* e )
{
    return load_t_1( is, e );
}

bool Serializer::save( std::ostream & os, const Value & e )
{
    static const unsigned int VERSION = 1;

    auto b = serializer::save( os, VERSION );

    if( b == false )
        return false;

    b &= save( os, e.type );

    switch( e.type )
    {
    case data_type_e::BOOL:
        return serializer::save( os, e.arg_b );
        break;
    case data_type_e::INT:
        return serializer::save( os, e.arg_i );
        break;
    case data_type_e::DOUBLE:
        return serializer::save( os, e.arg_d );
        break;
    case data_type_e::STRING:
        return serializer::save_enc( os, e.arg_s );
        break;
    default:
        return false;     // unknown type
        break;
    }

    return b;
}

data_type_e* Serializer::load( std::istream & is, data_type_e* e )
{
    uint32_t    type;

    if( serializer::load( is, & type ) == nullptr )
        return nullptr;

    * e     = static_cast<data_type_e>( type );

    return e;
}

bool Serializer::save( std::ostream & os, const data_type_e & e )
{
    return serializer::save( os, static_cast<unsigned>( e ) );
}

} // namespace anyvalue
