#include <cstdlib>
#include <iostream>
#include "Node.h"
#include "Triangle.h"
#include "Tree.h"
#include "TreeItem.h"
using namespace std;
using std::cin;
using std::cout;
using std::endl;

int main() {
	int action;
	Tree *tree = new Tree();
	//Node *node = new Node();
	//node.trian = new Triangle();

	while (true) {
		cout << "Menu" << endl;
		cout << "1) Add node" << endl;
		cout << "2) Remove node" << endl;
		cout << "3) Print tree" << endl;
		cout << "4) Calculate square" << endl;
		cout << "5) Exit" << endl;

		cout << "Choose action: " << endl;
		cin >> action;

		if (action == 5) {
			break;
		}

		if (action == 0 || action > 4) {
			cout << "Error. No such action in menu" << endl;
			continue;
		}

		switch (action)
		{
			case 1:
			{
				cout << "Enter the element" << endl;
				Node *node = new Node();
				//node.trian = new Triangle();
				//cin >> node.trian;
				//std::istream& operator>>(std::istream& is, Triangle& node->trian);
				//Node node.trian = trian;
				tree->push(node.trian);
				break;
			}
			case 2:
			{
				cout << "Enter the element" << endl;
				tree->pop(node.trian);
				break;
			}
			case 3:
			{
				cout << tree << endl;
				//std::ostream& operator<<(std::ostream& os, Tree& tree);
				break;
			}
			case 4:
			{
				double square = 0;
				cout << "Enter the element" << endl;
				cin >> node.trian >> endl;
				//std::istream& operator>>(std::istream& is, Node node);
				square = node.trian->Square();
				cout << square << endl;
				break;
			}
			case 5:
			{
				tree->~Tree();
				break; 
			}
		}
	}
	return 0;
}