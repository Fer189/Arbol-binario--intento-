#include <iostream>
#include <stdio.h>
#include "Node.h"
#include "Tree.h"


using namespace std;
int main() {
    Node* node = nullptr;
    Tree tree = Tree();
    tree.addNode('t', 9);
    tree.addNode('l', 8);
    Node* a = tree.getNode()->getLeft();
    Tree tree2 = Tree();
    tree2.setNode(a);
    tree2.addNode('r', 9);
    tree2.addNode('l', 8);
    cout << tree.getValue() << endl;
    cout << tree.getNode()->getLeft()->getValue() << endl;
    cout << tree2.getValue() << endl;
}