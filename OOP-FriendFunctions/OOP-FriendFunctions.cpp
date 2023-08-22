/* Menu and the entry point to the program. 
   Press 1 to calculate lengths of sides of a rectangle, its hypotenuse and area. 
   Press 2 to create an array of 6 objects of the Product class and calculate the total purchase sum.
   Press 3 to quit the program */
#include <iostream>
#include "Point.h"
#include "Rectangle.h"
#include "Product.h"

using namespace std;

// Check if the entered value is appropriate
void validateInput() {
	int ignoreValue = 1024;
	if (cin.fail()) {
		cin.clear();
		cin.ignore(ignoreValue, '\n');
	}
}

/* First task.
   Dynamically allocate memory for an array of 4 objects so that they correspond to the vertex points of a rectangle.
   Create a function that calculates the lengths of sides of rectangle, its hypotenuse and area. */
void sidesOfRectangle() {
    cout << "Enter 4 coordinates of points (x, y):" << endl;
    Point* points;
    points = new Point[4];
    
    // height = 3, width = 6, hypotenuse = 6.7082, area = 18
    /*points[0].setX(0);
    points[0].setY(3);

    points[1].setX(0);
    points[1].setY(0);

    points[2].setX(6);
    points[2].setY(0);

    points[3].setX(6);
    points[3].setY(3);*/

    int x, y;
    for (int i = 0; i < 4; i++) {
        cout << (i+1) << ") x = ";
        cin >> x;
        validateInput();
        cout << "   y = ";
        cin >> y;
        validateInput();
        points[i].setX(x);
        points[i].setY(y);
        cout << endl;
    }

    Rectangle rectangle(points[0], points[1], points[2], points[3]);
    if (rectangle.isRectangle()) {
        cout << "The figure is a rectangle!" << endl;
        cout << "Its height: " << rectangle.height() << endl;
        cout << "Its width: " << rectangle.width() << endl;
        cout << "Its hypotenuse: " << rectangle.hypotenuse() << endl;
        cout << "Its area: " << areaOfRectangle(rectangle) << endl;
    }
    else {
        cout << "The figure is not a rectangle!" << endl;
    }
}

// Friend function (see "Rectangle.h")
double areaOfRectangle(Rectangle rectangle) {
    return rectangle.height() * rectangle.width();
}

/* Second task.
   Create a class Product and an array of 6 objects. Calculate the total purchase sum */
int purchaseSum() {
    int totalSum;
    Product *products;
    products = new Product[6];
    products[0].setPrice(10);
    products[1].setPrice(20);
    products[2].setPrice(30);
    products[3].setPrice(40);
    products[4].setPrice(50);
    products[5].setPrice(60);
    for (int i = 0; i < 6; i++) {
        totalSum += products[i].getPrice();
    }
    return totalSum;
}

int main() {
    // Boolean variable to check if the user wants to quit the program or is continuing the interaction with it
    bool loop = true;
    // This is a variable to call methods or terminate the program. Variable's value is modified by the user in the loop
    int input;
    cout << "What do you want to do? Enter a number (1-3):" << endl;
    while (loop) {
        cin >> input;
        validateInput();
        switch (input) {
        // User must input 4 coordinates of points (x, y). Then the lengths of sides of a rectangle, its hypotenuse and area will be calculated
        case 1:
            sidesOfRectangle();
            cout << "\nWhat do you want to do? Enter a number (1-3):" << endl;
        break;
        // Creating an array of 6 Product objects, automatically setting their price via function setPrice() and summing prices of all 6 products 
        case 2:
            cout << "Total purchase sum is " << purchaseSum() << endl;
            cout << "\nWhat do you want to do? Enter a number (1-3):" << endl;
        break;
        // Exit the program
        case 3:
            loop = false;
        break;
        default:
            cout << "Invalid input. Enter only numbers from 1 to 3:" << endl;
        break;
        }
    }
}
