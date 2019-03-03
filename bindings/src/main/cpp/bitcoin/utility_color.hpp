/**
 * Copyright (c) 2011-2017 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef LIBBITCOIN__UTILITY_COLOR_HPP
#define LIBBITCOIN__UTILITY_COLOR_HPP

//#include <cstdint>
//#include <bitcoin/bitcoin/compat.hpp>
//#include <bitcoin/bitcoin/define.hpp>
#include <bitcoin/bitcoin/utility/color.hpp>

namespace libbitcoin {
namespace api {

class BC_API utility_color
{
public:
	color getValue() {
        return value;
    }

    void setValue(color value) {
        this->value = value;
    }
private:
    color value;
//    uint8_t red;
//    uint8_t green;
//    uint8_t blue;
//    uint8_t alpha;
};

} // namespace api
} // namespace libbitcoin

#endif