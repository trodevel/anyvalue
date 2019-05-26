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

// $Revision: 11636 $ $Date:: 2019-05-26 #$ $Author: serge $

#ifndef ANYVALUE_SERIALIZER_H
#define ANYVALUE_SERIALIZER_H

#include <iostream>         // std::istream

#include "serializer/versionable_loader_t.h"        // serializer::VersionableLoaderT
#include "value.h"          // Value

namespace serializer
{
anyvalue::Value** load( std::istream & is, anyvalue::Value** e );
anyvalue::Value* load( std::istream & is, anyvalue::Value* e );
bool save( std::ostream & os, const anyvalue::Value & e );
}

namespace anyvalue
{

class Serializer: public serializer::VersionableLoaderT<Serializer>
{
    friend serializer::VersionableLoaderT<Serializer>;

public:
    static Value* load( std::istream & is, Value* e );
    static bool save( std::ostream & os, const Value & e );

    static data_type_e* load( std::istream & is, data_type_e* e );
    static bool save( std::ostream & os, const data_type_e & e );

private:

    static Value* load_1( std::istream & is, Value* e );
    static Value* load_2( std::istream & is, Value* e );
};

} // namespace anyvalue

#endif // ANYVALUE_SERIALIZER_H
