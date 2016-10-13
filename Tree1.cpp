#include "Tree1.h"
#include <iostream>
using namespace std;
using std::ostream;
using std::istream;

Node::Node() {
	istream& operator>> (istream& is, Triangle& trian);
	cin >> number;
	cin >> childCount;
	istream& operator >> (istream& is, Node children);
}

Node::~Node() {
	delete trian;
}

Tree::Tree() : root(nullptr) {
}

Tree::Tree(Tree& orig) {
	root = orig.root;
}

ostream& operator<<(ostream& os, const Tree& tree) {
	TreeItem *elem = tree.root;

	while (elem != nullptr) {
		os << *elem;
		elem = elem->GetNext();
	}
	return os;
}

void Tree::push(Node& elem) {
	elem.number = ++n;
	cout << "Enter the data: " << endl;
	istream& operator>>(istream& is, Node elem);

	cout << "Enter the amount of children: " << endl;
	unsigned int quantity;
	cin >> quantity;

	if (quantity > 0) {
		elem.childCount = quantity;
		elem.children = new Node[quantity];
		for (unsigned int amount = 0; amount < quantity; ++amount) {
			Tree::push(elem.children[amount]);
		}
	}
	else {
		elem.childCount = 0;
		elem.children = NULL;
		++count;
	}
	/*TreeItem *elem = new TreeItem(trian);
	root = elem;

	if (trian > root) {
		push(trian->right);
	}
	else {
		push(trian->left);
	}*/
}

bool Tree::empty() {
	return root == nullptr;
}

Triangle Tree::pop(Node& elem) {
	if (elem.childCount > 0) {
		for (unsigned int amount = 0; amount < elem.childCount; ++amount) {
			Tree::pop(elem.children[amount]);
		}
		return *elem.trian;
		elem.~Node();
	}
	/*Triangle result;
	if (root != nullptr) {
		TreeItem *old_root = root;
		root = root->GetNext();
		result = old_root->GetTriangle();
		old_root->SetNext(nullptr);
		delete old_root;
	}
	return result;*/
}

Tree::~Tree() {
	delete root;
}