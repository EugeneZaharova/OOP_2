#ifndef TREE_H
#define TREE_H

#include "Triangle.h"
#include "TreeItem.h"
#include <iostream>
using namespace std;

class Tree {
public:
	Tree();
	//Tree(const Tree& orig);

	void push(Triangle &&trian);
	bool empty();
	Triangle pop();
	friend std::ostream& operator<<(std::ostream& os, const Tree tree);
	virtual ~Tree();
private:

	TreeItem *root, *left, *right;
};
#endif // TREE_H