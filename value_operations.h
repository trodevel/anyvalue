/*

ANYVALUE. Value Operations.

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

#ifndef LIB_ANYVALUE__VALUE_OPERATIONS_H
#define LIB_ANYVALUE__VALUE_OPERATIONS_H

#include "value.h"              // Value
#include "operations.h"         // comparison_type_e

namespace anyvalue {

bool compare_values( comparison_type_e type, const Value & lhs, const Value & rhs );

void unary_operation( Value * res, unary_operation_type_e type, const Value & op );

void binary_operation( Value * res, binary_operation_type_e type, const Value & lhs, const Value & rhs );

} // namespace anyvalue

#endif // LIB_ANYVALUE__VALUE_OPERATIONS_H
