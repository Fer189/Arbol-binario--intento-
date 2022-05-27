#pragma once
#include "Node.h"


class Tree {
    private:
    Node* root;
    public:
    Tree() {
        this -> root = nullptr;
    }
    void addNode(char position, int value = 0) {
        Node* newNode = new Node(value);
        if(root == nullptr) {
            root = newNode;
        }
        else {
            switch(position) {
                case 'l':
                    root->setLeft(newNode);
                    break;
                case 'r':
                    root->setRight(newNode);
                    break;
                default:
                    std::cout << "ERROR: Invalid position" << std::endl;
                    break;
            }
        }
    }
    void setNode(Node* node) {
        this -> root = node;
    }
    void setValue(const int& value) {
        root->setValue(value);
    }
    Node* getNode() {
        return root;
    }
    int getValue() {
        return root->getValue();
    }
};