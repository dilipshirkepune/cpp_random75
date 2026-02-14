#include <bits/stdc++.h>
#include "tree.hpp"


// root node
Node *root = NULL;

using namespace std;

void init(int data) {

    cout << "Init" << endl;
    if(root != NULL) {
        cout << "Error : tree already initiated. Please use insert method." << endl;
        return;
    }

    Node *childNode = new(Node);
    childNode->data = data;
    childNode->left = childNode->right = NULL;

    root = childNode;

    return;
}

void preOrderTravel(Node *nodePtr) {
    if(nodePtr != NULL)
    {
        cout << nodePtr->data << " "; 
    
        preOrderTravel(nodePtr->left);
        preOrderTravel(nodePtr->right);
    }
    return;
}

void insert(int data) {

    Node *child = new(Node);
    child->data = data;
    child->left = NULL;
    child->right = NULL;

    Node *tmp = root;
    while(tmp) {
        if(tmp->data > data) {
            if(tmp->left != NULL) {
                tmp = tmp->left;
                continue;
            }
            else
            {
                tmp->left = child;
                break;
            }
        }
        else {
            if(tmp->right != NULL){
                tmp = tmp->right;
                continue;
            }
            else {
                tmp->right = child;
                break;
            }
        }
    }
    return;
}