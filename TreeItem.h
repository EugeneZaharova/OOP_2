#ifndef TREEITEM_H
#define TREEITEM_H

#include "Triangle.h"
#include "Tree1.h"
using namespace std;
using std::ostream;

class TreeItem {
public:
	TreeItem(const Triangle& trian);
	TreeItem(const TreeItem& orig);
	friend ostream& operator<<(ostream& , const TreeItem& );

	TreeItem *SetNext(TreeItem *next);
	TreeItem *GetNext();
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
	TreeItem *next;
};
#endif // !TREEITEM_H
