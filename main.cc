#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>
#include <iostream>
// #include "triangle.h"
#include "TriangleTests.h"
using namespace std;

int main() {
	
	CppUnit::TextTestRunner runner;
	runner.addTest(TriangleTests::suite());
	runner.run();

	float a, b, c;
	cout << "Please introduce the lenght of the tree sides: " << endl;
	cin >> a >> b >> c;
	TriangleType tr1;
	tr1 = typeOfTriangle(a, b, c);
	cout << "The type of triangle is: ";
	if (tr1==0)
		cout << "Degenerate. " << endl;
	else if (tr1==1)
		cout << "Scalene." << endl;
	else if (tr1==2)
		cout << "Isosceles." << endl;
	else if (tr1==3)
		cout << "Equilateral." << endl;
	
	return 0;
}
