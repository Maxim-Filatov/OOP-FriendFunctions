/* Class Point is intended to describe points on the plane. 
   Also, there are default constructor, constructor with parameters (x, y) and destructor. 
   x and y are private variables by default. And therefore, functions for accessing variables were created. 
   Finally, there are functions calculating lenghts of sides and hypotenuse */
#include "Point.h"
#include <iostream>

using namespace std;

// Default constructor
Point::Point() {
	x = 0;
	y = 0;
}

// Constructor with parameters
Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
}

// Destructor
Point::~Point() {}

// Functions for accessing variables
void Point::setX(int x) {
	this->x = x;
}
int Point::getX() {
	return x;
}
void Point::setY(int y) {
	this->y = y;
}
int Point::getY() {
	return y;
}
