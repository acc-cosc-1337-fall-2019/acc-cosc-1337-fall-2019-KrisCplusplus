#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Testing Get Maximum Value from Vector")
{
	REQUIRE(get_max_from_vector) == (3, 8, 99, 1000);
	REQUIRE(get_max_from_vector) == (15, 12, 11, 99, 88);
	REQUIRE(get_max_from_vector) == (150, 120, 11, 990, 88888);
}

TEST_CASE("Testing is prime number")
{
	REQUIRE(is_prime("True") == 2);
	REQUIRE(is_prime("False") == 4);
	REQUIRE(is_prime("True") == 43);
	REQUIRE(is_prime("False") == 44);
}

TEST_CASE("Testing if vecor of primes")
{
	REQUIRE(vector_of_primes(10) == 2, 3, 5, 7);
	REQUIRE(vector_of_primes(50) == 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47);
}
