#include <gtest/gtest.h>

//          Copyright Ian Torres 2025.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#include <zend/version.hpp>

TEST(Zend, Version) { ASSERT_EQ(zend::version(), "1.0.0"); }