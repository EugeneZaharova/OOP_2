// N-дерево
#ifndef TREE_H
#define TREE_H
#include "Triangle.h"
#include "TreeItem.h"
#include <iostream>
using namespace std;

class Tree {
struct Node {
	int number;
	Triangle trian;
	unsigned int childCount;
	Node* children;
};

/*struct _tree {
	Node *root;
} _Tree;*/

int count = 0;
int n = 0;

public:
	Tree();
	Tree(const Tree& orig);

	void push(Node* elem);
	bool empty();
	Triangle pop(Node* elem);
	friend std::ostream& operator<<(std::ostream& os, const Tree& tree);
	virtual ~Tree();
private:
	TreeItem *root;
};
#endif // !TREE_H
