// #include <cppunit/TestFixture.h>
// #include <cppunit/extensions/HelperMacros.h>
// #include <cppunit/ui/text/TestRunner.h>
#include "TriangleTests.h"
// #include "triangle.h" // DO I NEED THIS? I THINK NOT
// using namespace std;

void TriangleTests::test_it_is_equilateral() {
	CPPUNIT_ASSERT(typeOfTriangle(1,1,1)==equilateral);
}

void TriangleTests::test_it_is_isoceles() {
	CPPUNIT_ASSERT(typeOfTriangle(100,144,144)==isosceles);
}

void TriangleTests::test_it_is_scalene() {
	CPPUNIT_ASSERT(typeOfTriangle(10,3,7)==scalene);
}

void TriangleTests::test_it_is_degenerate() {
	CPPUNIT_ASSERT(typeOfTriangle(0,87,87)==degenerate);
}

void TriangleTests::equilateral_using_float() {
	CPPUNIT_ASSERT(typeOfTriangle(0.3,0.3,0.3)==equilateral);
}

void TriangleTests::isoceles_using_float() {
	CPPUNIT_ASSERT(typeOfTriangle(0.7,0.9,0.9)==isosceles);
}

void TriangleTests::scalene_using_float() {
	CPPUNIT_ASSERT(typeOfTriangle(10,3,7.5)==scalene);
}

void TriangleTests::test_when_using_negative() { 
	//only test case when introducing negative
	CPPUNIT_ASSERT_THROW(typeOfTriangle(-1,2,1), invalid_argument);
}