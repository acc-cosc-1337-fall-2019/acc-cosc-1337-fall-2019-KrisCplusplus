#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../../../homework/02_decisions/decisions.h" 

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
	REQUIRE(get_grade_points);
	REQUIRE(calculate_gpa);
}

TEST_CASE("Value for numerical grade")
{
	REQUIRE(true == true);
	REQUIRE(get_letter_grade_using_if);
	REQUIRE(get_letter_grade_using_switch);
}

