#ifndef _TRIANGLE_H
#define _TRIANGLE_H
#include <iostream>
#include <stdexcept>  
#include <string>
using namespace std;

bool isTriangle(float, float, float); //triangle exists

enum TriangleType {degenerate, scalene, isosceles, equilateral, ERROR};
/*
The type of the return value 'TriangleType' is an enumeration type 
with values for each of the triangle classes mentioned earlier   <--- I understood these are degenerate, scalene, isosceles & equilateral
plus one value representing the case when the triangle does not exist. <--- And so I represented this value as ERROR
*/
TriangleType typeOfTriangle (float, float, float);

#endif