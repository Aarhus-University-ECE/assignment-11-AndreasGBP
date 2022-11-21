#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

extern "C"
{
#include "sum.h"
#include "sumn.h"
#include "fib.h"
}


// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("sumtail")
{
    // Add the tests for excercise 3 "sumtail" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(sumtail(5, 0) == sum(5));
    REQUIRE(sumtail(132, 0) == sum(132));
    REQUIRE(sumtail(1, 0) == sum(1));


}

TEST_CASE("sumwhile")
{
    // Add the tests for excercise 3 "sumwhile" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(sumwhile(5) == sum(5));
    REQUIRE(sumwhile(132) == sum(132));
    REQUIRE(sumwhile(1) == sum(1));
}

TEST_CASE("sumn")
{
    REQUIRE(sumn(1) == 1 * 1); // sum(1) must be 1
    REQUIRE(sumn(3) == 3 * 3); //sum(3) = 1+3+5 = 9
    REQUIRE(sumn(33) == 33 * 33); //sum(30) = 1+3+5+...+65 = 1089
}

TEST_CASE("fib")
{
   // Add the tests for excercise 4 "fib" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(fib(5, 0, 1) == 3); //Small number
    REQUIRE(fib(32, 0, 1) == 1346269);  //Large number
    REQUIRE(fib(1, 0, 1) == 0); //1
}