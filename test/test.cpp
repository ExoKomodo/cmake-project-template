#include <catch2/catch_test_macros.hpp>

#include <hello/hello.hpp>

TEST_CASE("Can create horrible tests", "[greeter::hello]")
{
  REQUIRE(true);
  hello();
  REQUIRE_FALSE(false);
}

