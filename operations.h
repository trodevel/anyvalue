/*

Operations.

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

// $Revision: 11604 $ $Date:: 2019-05-24 #$ $Author: serge $

#ifndef LIB_ANYVALUE__ELEMENTS_H
#define LIB_ANYVALUE__ELEMENTS_H

namespace anyvalue {

enum class comparison_type_e
{
    EQ = 0,
    NEQ,
    LT,
    LE,
    GT,
    GE,
    NOT
};

enum class unary_operation_type_e
{
    UNDEF   = 0,
    NEG,
};

enum class binary_operation_type_e
{
    UNDEF   = 0,
    PLUS,
    MINUS,
    MUL,
    DIV
};

} // namespace anyvalue

#endif // LIB_ANYVALUE__ELEMENTS_H
