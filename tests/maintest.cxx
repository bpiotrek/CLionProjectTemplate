#include "main.hxx"
#include <gtest/gtest.h>

TEST(maintest, POSITIVE) {
  EXPECT_EQ("Hello, World!", getString());
}