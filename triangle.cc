#include "triangle.h" //<- do i need this?
#include <iostream>
#include <stdexcept>
using namespace std;
/// production code to be tested
/// link with -lcppunit -ldl
bool isTriangle(float a, float b, float c) { //triangle exists

		if ((a<0) || (b<0) || (c<0)) {
			
			throw std::invalid_argument("The values can not be negative."); // errornegative
   		
   		}else if ((a <= b+c) && (b <= a+c) && (c <= a+b)){
	 		
	 		return true; // triangle exists with the given side lengths
   		
   		}else{
   			
   			return false; // triangle doesnt exists with the given side lenghts
   		}

   	return 0;
}

TriangleType typeOfTriangle (float a, float b, float c){
	
	//try{
		
		if (isTriangle(a, b, c)==true){

			if (a==0 || b==0 || c==0){ // does it has a side = 0?
				
				return degenerate;

			}else if (a == b && b == c){ // all sides are the same
				
				return equilateral;
				
			}else if (a == b || b == c || a == c){ // just two sides are the same
				
				return isosceles;
			
			} else{ // meh

				return scalene;
			}

		}
	
	// } catch (std::invalid_argument errornegative){ // "The values can not be negative."

	// 	std::cerr << "Invalid argument: " << errornegative.what() << '\n';
	// 	return ERROR;
	// }
	
	return ERROR;
}