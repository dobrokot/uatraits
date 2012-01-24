// uatraits is a simple tool for user agent detection
// Copyright (C) 2011 Yandex <highpower@yandex-team.ru>

// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

#ifndef UATRAITS_PERL_HASH_UTILS_HPP_INCLUDED
#define UATRAITS_PERL_HASH_UTILS_HPP_INCLUDED

#include <cstddef>

namespace uatraits { namespace perl {

void
hash_value_set(void *hash_value, char const *key, std::size_t keylen, char const *value, std::size_t valuelen);

}} // namespaces

#endif // UATRAITS_PERL_HASH_UTILS_HPP_INCLUDED
