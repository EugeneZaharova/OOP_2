#include "Node.h"
#include <iostream>
using namespace std;
using std::ostream;
using std::istream;

Node::Node() {
	istream& operator >> (istream& is, Triangle& trian);
	cin >> number;
	cin >> childCount;
	istream& operator >> (istream& is, Node children);
}

Node::~Node() {
	delete trian;
}