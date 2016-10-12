#include <cstdlib>
#include <iostream>
#include "Triangle.h"
#include "Tree.h"
#include "TreeItem.h"
using namespace std;

int main() {
	int action;
	Tree *tree;

	while (true) {
		cout << "Menu" << endl;
		cout << "1) Add node" << endl;
		cout << "2) Remove node" << endl;
		cout << "3) Print tree" << endl;
		cout << "4) Calculate square" << endl;
		cout << "5) Exit" << endl;

		cout << "Choose action: " << endl;
		cin >> action;

		if (action == 6) {
			break;
		}

		if (action == 0 || action > 4) {
			cout << "Error. No such action in menu" << endl;
			continue;
		}

		switch (action)
		{
			/*case 1:
			{
				Node *node;
				Triangle *trian;
				cout << "Enter the elem" << endl;
				std::istream& operator>>(std::istream& is, Triangle &trian);
				node.trian = trian;
				Tree push(node);
			}
			default:
				break;
			}*/
		}
		/*Tree tree;
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
		return 0;*/
	}
}
