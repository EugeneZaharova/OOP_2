#include "Triangle.h" 
#include <iostream>
#include <cstdio>
#include <cmath> 
using namespace std;
using std::ostream;
using std::istream;

Triangle::Triangle() : Triangle(0, 0, 0, 0, 0, 0) {
}

Triangle::Triangle(size_t a1, size_t a2, size_t a3, size_t b1, size_t b2, size_t b3) : x1(a1), x2(a2), x3(a3), y1(b1), y2(b2), y3(b3) {
	cout << "Triangle created ('x' and 'y'): " << x1 << ", " << y1 << ", " << x2 << ", " << y2 << ", " << x3 << ", " << y3 << endl;
}

Triangle::Triangle(const Triangle& copy) {
	cout << "Triangle copy created" << endl;
	x1 = copy.x1;
	x2 = copy.x2;
	x3 = copy.x3;
	y1 = copy.y1;
	y2 = copy.y2;
	y3 = copy.y3;
}

double Triangle::Square() {
	double a = sqrt(double((y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1)));
	double b = sqrt(double((y3 - y2) * (y3 - y2) + (x3 - x2) * (x3 - x2)));
	double c = sqrt(double((y1 - y3) * (y1 - y3) + (x1 - x3) * (x1 - x3)));
	double p = (a + b + c) / 2.0;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

Triangle& Triangle::operator=(const Triangle& right) {
	if (this == &right) {
		return *this;
	}

	cout << "Triangle copied" << endl;
	x1 = right.x1;
	x2 = right.x2;
	x3 = right.x3;
	y1 = right.y1;
	y2 = right.y2;
	y3 = right.y3;

	return *this;
}

Triangle& Triangle::operator++() {
	x1++;
	x2++;
	x3++;
	y1++;
	y2++;
	y3++;

	return *this;
}

Triangle operator+(const Triangle& left, const Triangle& right) {
	return Triangle(left.x1 + right.x1, left.x2 + right.x2, left.x3 + right.x3, left.y1 + right.y1, left.y2 + right.y2, left.y3 + right.y3);
}

Triangle::~Triangle() {
	cout << "Triangle deleted" << endl;
}

ostream& operator<<(ostream& os, const Triangle& obj) {
	os << "x1 = " << obj.x1 << ", y1 = " << obj.y1 << ", x2 = " << obj.x2 << ", y2 = " << obj.y2 << ", x3 = " << obj.x3 << ", y3 = " << obj.y3 << endl;
	return os;
}

istream& operator>>(istream& is, Triangle& obj) {
	is >> obj.x1;
	is >> obj.y1;
	is >> obj.x2;
	is >> obj.y2;
	is >> obj.x3;
	is >> obj.y3;

	return is;
}