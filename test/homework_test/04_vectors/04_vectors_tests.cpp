#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Get max from vector ") 
{
	vector<int> nums{ 3,8,1,99,1000 };
	REQUIRE(get_max_from_vector(nums) == 1000);
}

TEST_CASE("Test is prime function")
{
	REQUIRE(is_prime(2) == true);
	REQUIRE(is_prime(4) == false);
	REQUIRE(is_prime(43) == true);
	REQUIRE(is_prime(44) == false);
}

TEST_CASE("Test vector of primes function")
{
	vector<int> vec10 = { 2, 3, 5, 7 };
	vector<int> vec50 = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };

	REQUIRE(vector_of_primes(10) == vec10);
	REQUIRE(vector_of_primes(50) == vec50);
}