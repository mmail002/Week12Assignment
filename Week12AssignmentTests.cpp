

#include <cassert>
#include <algorithm>  //sort

#include "Week12Assignment.h"

using std::string;
using std::istringstream;
using std::cout;
using std::endl;
using std::max;

//you will have to modify the .h and .cpp for this assignment


void myFunction1() {
	Square s(11, 22, "small square", 2);
	Rectangle r(11, 22, "small rectangle", 2, 3);

	vector<Shape *>  shapes;

	int sumSurface = 0;

	//you must insert both shape in shapes
	//then do the sum of their surface

	//check if sumSurface is correct
	assert( sumSurface == 10);
}

void myFunction2() {
	Square s(11, 22, "small square", 2);
	Rectangle r(11, 22, "small rectangle", 2, 3);

	vector<Shape *>  shapes;

	//you must insert both shape in shapes
	//then sort the collection in descending order of surface

	//check if the collection is sorting correctly
	Shape * sresult = shapes.at( 0 );
	assert( sresult->getSurface() == 6);
}

void myFunction3() {
	Square s(11, 22, "small square", 2);
	Rectangle r(11, 22, "small rectangle", 2, 3);

	vector<Shape *>  shapes;

	//you must insert both shape in shapes
	//then find the Shape with the biggest surface
	//hint: in algo, there is a max, similar to stable_sort 
	Shape * biggest = nullptr;

							  
	//check if the result is correct
	assert( biggest->getSurface() == 6);
}

const string SMALL_RECTANGLE = "small rectangle";

void myFunction4() {
	Square s(11, 22, "small square", 2);
	Rectangle r(11, 22, SMALL_RECTANGLE, 2, 3);

	map<string, Shape *> shapes;

	//you must insert both shape in shapes
	//then find the Shape with the name SMALL_RECTANGLE
	Shape * smallRectangle = nullptr;

							  
	//check if the result is correct
	assert( smallRectangle->getName().compare(SMALL_RECTANGLE) == 0);
}

void myFunction5() {
	Square s(11, 22, "small square", 2);
	Rectangle r(11, 22, SMALL_RECTANGLE, 2, 3);

	map<string, Shape *> shapes;

	int sumSurface = 0;

	//you must insert both shape in shapes
	//then do the sum of their surface

	//check if sumSurface is correct
	assert( sumSurface == 10);

							  
}

int main() 
{
	myFunction1();

	myFunction2();

	myFunction3();

	myFunction4();

	myFunction5();
}	