#ifndef  TRIANGLE_H
#define TRIANGLE_H
#include <cstdlib>
#include <iostream>
using std::ostream;
using std::istream;

class Triangle {
public:
	Triangle();
	Triangle(size_t a1, size_t a2, size_t a3, size_t b1, size_t b2, size_t b3);
	Triangle(const Triangle& copy);

	Triangle& operator++();
	double Square();
	friend Triangle operator+(const Triangle& left, const Triangle& right);

	friend ostream& operator<<(ostream& , const Triangle& );
	friend istream& operator>>(istream& , Triangle& );

	Triangle& operator=(const Triangle& right);
	virtual ~Triangle();
private:
	size_t x1;
	size_t x2;
	size_t x3;
	size_t y1;
	size_t y2;
	size_t y3;
};

#endif // ! TRIANGLE_H