#pragma once

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#ifndef ZEND_VERSION_HPP
#define ZEND_VERSION_HPP

#include <string_view>

namespace zend {
    /**
     * Retrieves the library version.
     *
     * @return The current version.
     */
    std::string_view version();

}  // namespace zend

#endif