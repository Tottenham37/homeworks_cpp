#include <catch2/catch_test_macros.hpp>

#include "utils.hpp"

TEST_CASE("Calculate", "[simple_sum]") {
  CHECK(Calculate("1+2") == 3);
  CHECK(Calculate("2+2") == 4);
  CHECK(Calculate("1+0") == 1);
  CHECK(Calculate("0+0") == 0);
}

TEST_CASE("Calculate", "[simple_difference]") {
  CHECK(Calculate("5-2") == 3);
  CHECK(Calculate("2-2") == 0);
  CHECK(Calculate("1-0") == 1);
  CHECK(Calculate("0-0") == 0);
}

TEST_CASE("Calculate", "[simple_multiply]") {
  CHECK(Calculate("5*2") == 10);
  CHECK(Calculate("2*2") == 4);
  CHECK(Calculate("1*0") == 0);
  CHECK(Calculate("0*0") == 0);
}

TEST_CASE("Calculate", "[multiply]") {
  CHECK(Calculate("45 * 42") == 1890);
  CHECK(Calculate("222 * 2") == 444);
  CHECK(Calculate("1111 * 0") == 0);
  CHECK(Calculate("2 * 50") == 100);
}

TEST_CASE("Calculate", "[division]") {
  CHECK(Calculate("25 / 5") == 5);
  CHECK(Calculate("1 / 1") == 1);
  CHECK(Calculate("0 / 128") == 0);
  CHECK_THROWS(Calculate("14 / 0"));
}
