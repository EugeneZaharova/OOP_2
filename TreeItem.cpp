#include "TreeItem.h"
#include <iostream>
using namespace std;

TreeItem::TreeItem(const Triangle& trian) {
	this->trian = trian;
	this->left = nullptr;
	this->right = nullptr;
	cout << "Tree item created" << endl;
}

TreeItem* TreeItem::SetLeft(TreeItem* left) {
	TreeItem* elem = this->left;
	this->left = left;
	return elem;
}

TreeItem* TreeItem::SetRight(TreeItem* right) {
	TreeItem* elem = this->right;
	this->right = right;
	return elem;
}

TreeItem* TreeItem::GetLeft() {
	return this->left;
}

TreeItem* TreeItem::GetRight() {
	return this->right;
}

Triangle TreeItem::GetTriangle() const {
	return this->trian;
}

TreeItem::~TreeItem() {
	cout << "Tree item deleted" << endl;
	delete left;
	delete right;
}

std::ostream& operator<<(std::ostream& os, const TreeItem& obj) {
	os << "[" << obj.trian << ']' << endl;
	return os;
}