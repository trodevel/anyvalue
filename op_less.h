/*

ANYVALUE. Value Operations.

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

// $Revision: 11798 $ $Date:: 2019-06-21 #$ $Author: serge $

#ifndef LIB_ANYVALUE__OP_LESS_H
#define LIB_ANYVALUE__OP_LESS_H

namespace anyvalue
{
class Value;
}

bool operator<( anyvalue::Value const & lhs, anyvalue::Value const & rhs );

#endif // LIB_ANYVALUE__OP_LESS_H
