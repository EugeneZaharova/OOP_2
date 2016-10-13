#ifndef TREE_H
#define TREE_H
#include "Triangle.h"
#include "Node.h"
#include "TreeItem.h"
#include <iostream>
using namespace std;
using std::ostream;
using std::istream;

/*class Node {
public:
	Node();
	virtual ~Node();
	int number;
	unsigned int childCount;
	Node* children;
	Triangle *trian;
};*/

class Tree {
/*struct _tree {
	Node *root;
} _Tree;*/

int count = 0;
int n = 0;

public:
	Tree();
	Tree(Tree& orig);

	void push(Node& elem);
	bool empty();
	Triangle pop(Node& elem);
	friend ostream& operator<<(ostream& , const Tree& );
	virtual ~Tree();
private:
	TreeItem *root;
};
#endif // !TREE_H