#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"

using std::vector;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test get_vector_max_value function")
{
	vector<int> num{5,7,-1,99,-100,10};

	get_vector_max_value(num);

	REQUIRE(get_vector_max_value(num) == 99);
}

TEST_CASE("test get_vector_max_value function again")
{
	vector<int> num{-50,0,-51,50,-99,-100};

	get_vector_max_value(num);

	REQUIRE(get_vector_max_value(num) == 50);

}

TEST_CASE("test get_square_of_each_element function")
{
	vector<int> sqr{3,7,2,5,10};

	get_square_of_each_element(sqr);

	REQUIRE(get_square_of_each_element(sqr) == vector<int> {9,49,4,25,100});
}

TEST_CASE("test get_square_of_each_element function again")
{
	vector<int> sqr{6,1,8,9,4};

	get_square_of_each_element(sqr);

	REQUIRE(get_square_of_each_element(sqr) == vector<int> {36,1,64,81,16});
}
