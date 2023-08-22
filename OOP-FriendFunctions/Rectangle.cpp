// The Rectangle class is used to identify a figure as a rectangle based on the entered coordinates of 4 points
#include "Rectangle.h"
#include "Point.h"
#include <math.h>

using namespace std;

Rectangle::Rectangle(Point a, Point b, Point c, Point d) {
	points[0] = a;
	points[1] = b;
	points[2] = c;
	points[3] = d;
}

int length(Point p1, Point p2) {
	return sqrt(pow((p2.getX() - p1.getX()), 2) + pow((p2.getY() - p1.getY()), 2));
}

bool Rectangle::isRectangle() {
	return ((points[0].getX() == points[1].getX()) && (points[2].getX() == points[3].getX()) && 
			(points[0].getY() == points[3].getY()) && (points[1].getY() == points[2].getY()));
}

double Rectangle::height() {
	return sqrt(pow((points[1].getX() - points[0].getX()), 2) + pow((points[1].getY() - points[0].getY()), 2));
}

double Rectangle::width() {
	return sqrt(pow((points[3].getX() - points[0].getX()), 2) + pow((points[3].getY() - points[0].getY()), 2));
}

double Rectangle::hypotenuse() {
	return sqrt((pow(length(points[1], points[2]), 2) + pow(length(points[2], points[3]), 2)));
}