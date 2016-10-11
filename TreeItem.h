#ifndef TREEITEM_H
#define TREEITEM_H

#include "Triangle.h"
using namespace std;

class TreeItem {
public:
	TreeItem(const Triangle& trian);
	//TreeItem(const TreeItem& orig);
	friend std::ostream& operator<< (std::ostream& os, const TreeItem& obj);

	TreeItem* SetLeft(TreeItem* left);
	TreeItem* GetLeft();
	TreeItem* SetRight(TreeItem* right);
	TreeItem* GetRight();
	Triangle GetTriangle() const;

	virtual ~TreeItem();
private:
	Triangle trian;
	TreeItem *left;
	TreeItem *right;
};
#endif // !TREEITEM_H
