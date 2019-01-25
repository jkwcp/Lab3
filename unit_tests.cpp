//
// Created by Jackie Wang on 2019-01-24.
//
#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() put this in one cpp file
#include "catch.hpp"
#include "stack.hpp"

TEST_CASE("A new stack is empty", "[stack")
{
    comp3512::stack tester;
    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);
}

TEST_CASE("Test push", "[stack") {
    comp3512::stack s;
    for (int i = 0; i < SIZE; ++i) {
        s.push(i);
    }
    REQUIRE(!s.push(SIZE));
}

TEST_CASE("Test top", "[stack") {
    comp3512::stack s;
    REQUIRE(s.top() == 0);
    s.push(0);
    REQUIRE(s.top() == 0);
    s.push(1);
    REQUIRE(s.top() == 1);
    s.push(2);
    REQUIRE(s.top() == 2);
}

TEST_CASE("Test pop", "[stack") {
    comp3512::stack s;
    s.push(0);
    s.push(1);
    REQUIRE(s.top() == 1);
    s.pop();
    REQUIRE(s.top() == 0);
}

TEST_CASE("Test when stack is full") {
    comp3512::stack s;
    for (int i = 0; i < SIZE; ++i) {
        s.push(i);
    }
    REQUIRE(s.push(10) == false);
    REQUIRE(s.empty() == false);
    REQUIRE(s.full() == true);
}
