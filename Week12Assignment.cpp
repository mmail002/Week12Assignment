// Week12Assignment.cpp 
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <array>
#include <map>
#include <set>
#include <functional>
#include <numeric>

#include "Week12Assignment.h"

using std::cout;
using std::endl;
using std::ostream;
using std::accumulate;

using namespace std;

Shape::Shape(int px, int py, string pname) : x(px), y(py), name(pname) { 
	
}

Shape::~Shape(){
}
	
string  Shape::getName() const  { return name; }

Rectangle::Rectangle(int px, int py, string pname, int plength, int pheight) : Shape(px, py, pname), length(plength), height(pheight) { ; }

Square::Square(int px, int py, string pname, int plength) : Rectangle(px, py, pname, plength, plength) { 
	; 
}

int myFunction1() {
	Square s(11, 22, "small square", 4);
	Rectangle r(11, 22, "small rectangle", 2, 3);

	vector<Shape *>  shapes;

	int sumSurface = 0;

	//you must insert both s and r in shapes
	//then do the sum of their surface using
	//an iterator to access the 'Shape' in shapes
	//use sumSurface as an accumulator

	//insert your code here

	return sumSurface;
}

int myFunction2() {
	Square s(11, 22, "small square", 2);
	Rectangle r(11, 22, "small rectangle", 4, 5);

	vector<Shape *>  shapes;

	shapes.push_back( &s );
	shapes.push_back( &r );

	//sort the collection in descending order of surface
	//using the sort <algorithm>
	//insert your code here



	//return the 1st item once sorted
	Shape * sresult = shapes.at( 0 );
	return sresult->getSurface();
}

int myFunction3() {
	Square s(11, 22, "small square", 2);
	Rectangle r(11, 22, "small rectangle", 4, 5);

	vector<Shape *>  shapes;

	//you must insert both s and r in shapes
	//then find the Shape with the biggest surface
	//you must used a function in <algorithm>
	//store the result in biggest
	Shape * biggest = nullptr;

	//insert your code here



	//return its surface
	return biggest->getSurface();
}

string myFunction4() {
	Square s(11, 22, "small square", 2);
	Rectangle r(11, 22, SMALL_RECTANGLE, 2, 3);

	map<string, Shape *> shapes;

	//you must insert both s and r in shapes
	//then find the Shape with the name SMALL_RECTANGLE
	//you must used a function in map, to find it
	Shape * smallRectangle = nullptr;

	//insert your code here



	//check if the result is correct
	return smallRectangle->getName();
}

int myFunction5() {
	Square s(11, 22, "small square", 3);
	Rectangle r(11, 22, SMALL_RECTANGLE, 4, 5);

	map<string, Shape *> shapes;

	int sumSurface = 0;

	//you must insert both s and r in shapes
	//then do the sum of their surface using
	//an iterator to access the 'Shape' in shapes
	//use sumSurface as an accumulator

	//insert your code here


	//check if sumSurface is correct
	return sumSurface;
}




