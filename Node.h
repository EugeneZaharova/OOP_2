#ifndef NODE_H
#define NODE_H
#include "Triangle.h"
#include <iostream>

class Node {
public:
	Node();
	virtual ~Node();

	int number;
	unsigned int childCount;
	Node* children;
	Triangle *trian;
};

#endif // !NODE_H