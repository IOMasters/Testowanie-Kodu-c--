
#include <iostream>
#include "../macros/TestCase.cpp"
#include "../macros/Assert.h"
using namespace std;

OpenTestCase(TestExample){assert:AssertTrue(1)}
Discription("To jest Fajny Test")
CloseTestCase()

OpenTestCase(TestExample1){assert:AssertTrue(1)}
Discription("To jest Fajny Test")
CloseTestCase()

OpenTestCase(TestExample2){assert:AssertTrue(1>0)}
Discription("To jest Fajny Test")
CloseTestCase()
