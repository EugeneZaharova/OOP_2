// N-дерево
#ifndef TREE_H
#define TREE_H
#include "Triangle.h"
#include "TreeItem.h"
#include <iostream>
using namespace std;

class Node {
public:
	Triangle trian;
	int number;
	unsigned int childCount;
	Node* children;
};

class Tree {
int count = 0;
int n = 0;

public:
	Tree();
	Tree(Tree& orig);

	void push(Node& elem);
	bool empty();
	Triangle pop(Node& elem);
	friend std::ostream& operator<<(std::ostream& os, const Tree& tree);
	virtual ~Tree();
private:
	TreeItem *root;
};
#endif // !TREE_H
