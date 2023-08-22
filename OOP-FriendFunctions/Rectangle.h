#pragma once
#include "Point.h"

class Rectangle {
	private:
		Point points[4];
	public:
		Rectangle(Point a, Point b, Point c, Point d);
		bool isRectangle();
		double height();
		double width();
		double hypotenuse();
		friend double areaOfRectangle(Rectangle rectangle);
};
