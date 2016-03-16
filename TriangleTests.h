// test code
#ifndef _TRIANGLETESTS_H
#define _TRIANGLETESTS_H
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>
#include <stdexcept>
#include "triangle.h"

class TriangleTests: public CppUnit::TestFixture{
	// the names must match those in TriangleTests.cc
	
	public:
	CPPUNIT_TEST_SUITE(TriangleTests);
	
	CPPUNIT_TEST(test_it_is_equilateral);
	CPPUNIT_TEST(test_it_is_isoceles);
	CPPUNIT_TEST(test_it_is_scalene);
	CPPUNIT_TEST(test_it_is_degenerate);
	CPPUNIT_TEST(equilateral_using_float);
	CPPUNIT_TEST(isoceles_using_float);
	CPPUNIT_TEST(scalene_using_float);
	CPPUNIT_TEST(test_when_using_negative);
	
	CPPUNIT_TEST_SUITE_END();

	void test_it_is_equilateral();
	void test_it_is_isoceles();
	void test_it_is_scalene();
	void test_it_is_degenerate();
	void equilateral_using_float();
	void isoceles_using_float();
	void scalene_using_float();
	void test_when_using_negative();
};

#endif