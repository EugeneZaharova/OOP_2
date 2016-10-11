#include "Tree.h"
using namespace std;

Tree::Tree() : root(nullptr) {
}

/*Tree::Tree(const Tree& orig) {
	root = orig.root;
}*/

std::ostream& operator<<(std::ostream& os, const Tree& tree) {
	TreeItem *elem = tree.root;

	while (elem != nullptr) {
		os << *elem;
		elem = elem->GetNext();
	}
	return os;
}

void Tree::push(Triangle &&trian) {
	TreeItem *elem = new TreeItem(trian);
	root = elem;
	
	if (trian > root) {
		push(trian->right);
	}
	else {
		push(trian->left);
	}

}

bool Tree::empty() {
	return root == nullptr;
}

Triangle Tree::pop() {
	Triangle result;
	if (root != nullptr) {
		TreeItem *old_root = root;
		root = root->GetNext();
		result = old_root->GetTriangle();
		old_root->SetNext(nullptr);
		delete old_root;
	}
	return result;
}

Tree::~Tree() {
	delete root;
}