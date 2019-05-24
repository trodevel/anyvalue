/*

String Helper. Provides to_string() function.

Copyright (C) 2018 Sergey Kolevatov

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

// $Revision: 11607 $ $Date:: 2019-05-24 #$ $Author: serge $

#ifndef LIB_ANYVALUE__STR_HELPER_H
#define LIB_ANYVALUE__STR_HELPER_H

#include <sstream>              // std::ostringstream

#include "value.h"              // Value
#include "operations.h"         // comparison_type_e

namespace anyvalue {

class StrHelper
{
public:
    static const std::string & to_string( data_type_e l );
    static const std::string & to_string_short( data_type_e l );
    static const std::string & to_string( comparison_type_e l );
    static const std::string & to_string_short( comparison_type_e l );
    static const std::string & to_string_short( unary_operation_type_e l );
    static const std::string & to_string_short( binary_operation_type_e l );

    static std::ostream & write( std::ostream & os, const Value & l );
    static std::ostream & write_short( std::ostream & os, const Value & l );

    template<class T>
    static std::string to_string( const T & l )
    {
        std::ostringstream os;

        write( os, l );

        return os.str();
    }

    template<class T>
    static std::string to_string_short( const T & l )
    {
        std::ostringstream os;

        write_short( os, l );

        return os.str();
    }
};

} // namespace anyvalue

#endif // LIB_ANYVALUE__STR_HELPER_H
