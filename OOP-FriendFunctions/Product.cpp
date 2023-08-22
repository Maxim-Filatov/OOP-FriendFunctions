#include "Product.h"
#include <iostream>

using namespace std;

// Check if the entered value is appropriate
void validateId() {
	int ignoreValue = 1024;
	if (cin.fail()) {
		cin.clear();
		cin.ignore(ignoreValue, '\n');
	}
}

// Default constructor
Product::Product() {
	id = 0;
	presence = true;
	price = 1;
}

// Functions for accessing variables
void Product::setId(int id) {
	this->id = id;
}
int Product::getId() {
	return id;
}
void Product::setPresence(bool presence) {
	this->presence = presence;
}
bool Product::getPresence() {
	return presence;
}
void Product::setPrice(int price) {
	this->price = price;
}
int Product::getPrice() {
	return price;
}
