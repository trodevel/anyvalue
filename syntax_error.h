/*

Syntax Error.

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

// $Revision: 11605 $ $Date:: 2019-05-24 #$ $Author: serge $

#ifndef ANYVALUE__SYNTAX_ERROR_H
#define ANYVALUE__SYNTAX_ERROR_H

#include <stdexcept>            // std::runtime_error

namespace anyvalue
{

struct SyntaxError: public std::runtime_error
{
    SyntaxError( const std::string & str ):
        std::runtime_error( str )
    {}
};

} // namespace anyvalue

#endif // ANYVALUE__SYNTAX_ERROR_H
