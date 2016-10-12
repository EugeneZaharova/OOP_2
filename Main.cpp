#include <cstdlib>
#include <iostream>
#include "Triangle.h"
#include "Tree.h"
#include "TreeItem.h"
using namespace std;

int main() {
	Tree tree;

	tree.push(Triangle());

	cout << tree;

	Triangle trian;
	trian = tree.pop();
	cout << trian;
	trian = tree.pop();
	cout << trian; 
	trian = tree.pop();
	cout << trian;

	system("pause");
	return 0;
}