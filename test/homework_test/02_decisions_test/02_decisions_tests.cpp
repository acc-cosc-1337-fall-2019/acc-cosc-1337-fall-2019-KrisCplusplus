#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../../../homework/02_decisions/decisions.h" 

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
	REQUIRE(get_grade_points);
	REQUIRE(calculate_gpa);
}

