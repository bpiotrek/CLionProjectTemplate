#include <gtest/gtest.h>

#include <string>

#include "lib.hxx"

TEST(greeting, EmptyName) {
  EXPECT_EQ(my::lib::makeGreeting(""), "Hello, World!");
}

TEST(greeting, AnyName) {
  EXPECT_EQ(my::lib::makeGreeting("Johann"), "Hello, Johann!");
}
