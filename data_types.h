/*

Data types.

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

// $Revision: 11604 $ $Date:: 2019-05-24 #$ $Author: serge $

#ifndef LIB_ANYVALUE__DATA_TYPES_H
#define LIB_ANYVALUE__DATA_TYPES_H

#include <string>               // std::string

namespace anyvalue {

typedef bool        Bool;
typedef int         Int;
typedef double      Double;
typedef std::string String;

enum class data_type_e
{
    UNDEF = 0,
    BOOL,
    INT,
    DOUBLE,
    STRING,
};

} // namespace anyvalue

#endif // LIB_ANYVALUE__DATA_TYPES_H
