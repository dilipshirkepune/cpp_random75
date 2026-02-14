#ifndef __H_TREE__
#define __H_TREE__

typedef struct node {
    int data;
    struct node* left;
    struct node* right;
} Node;

extern Node *root;

void init(int);
void preOrderTravel(Node *);
void insert(int);

#endif
