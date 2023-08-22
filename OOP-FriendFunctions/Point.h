#pragma once
class Point {
	private:
		int x, y;
	public:
		Point();
		Point(int x, int y);
		~Point();
		void setX(int x);
		void setY(int y);
		int getX();
		int getY();
};
