#include "Tree1.h"
#include <iostream>
using namespace std;

Tree::Tree() : root(nullptr) {
}

Tree::Tree(const Tree& orig) {
	root = orig.root;
}

std::ostream& operator<<(std::ostream& os, const Tree& tree) {
	TreeItem *elem = tree.root;

	while (elem != nullptr) {
		os << *elem;
		elem = elem->GetNext();
	}
	return os;
}

void Tree::push(Node* elem) {
	elem->number = n++;
	cout << "Enter the data: " << endl;
	cin >> elem->trian;

	cout << "Enter the amount of children: " << endl;
	unsigned int quantity;
	cin >> quantity;

	if (quantity > 0) {
		elem->childCount = quantity;
		elem->children = new Node[quantity];
		for (unsigned int amount = 0; amount < quantity; amount++) {
			Tree::push(&elem->children[amount]);
		}
	}
	else {
		elem->childCount = 0;
		elem->children = NULL;
		count++;
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

Triangle Tree::pop(Node* elem) {
	if (elem->childCount > 0) {
		for (unsigned int amount = 0; amount < elem->childCount; amount++) {
			Tree::pop(&elem->children[amount]);
		}
		return elem->trian;
		delete[] elem->children;
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