#include<iostream>
#include<cstdlib>

using namespace std;

struct Node
{
    int data;
    Node* leftN;
    Node* rightN;

};

typedef Node* Node_ptr;
Node_ptr head;

//INSERT_VALUE FUNCTION
Node* new_node(int key)
{
    Node* leaf = new Node;
    leaf->data = key;
    leaf->leftN = NULL;
    leaf->rightN = NULL;
}
Node* insert_value(Node_ptr leaf, int key)
{
    if(leaf == NULL)
        return(new_node(key));
    else
    {
        if(key <= leaf->data)
            leaf->leftN = insert_value(leaf->leftN, key);
        else
            leaf->rightN = insert_value(leaf->rightN, key);
        return(leaf);   
    }
}

//PRINT FUNCTION
void printTree(Node_ptr leaf)
{
    if(leaf == NULL)
        return;
    printTree(leaf->leftN);
    cout << "Data element: " << leaf->data << endl;
    printTree(leaf->rightN);
}

//MAIN
int main()
{
    Node_ptr root = NULL;
    Node_ptr tail;
    int i;
    int x;

    //initialize values
    for(i = 0; i < 20; i++)
    {
        x = rand() % 1000 + 1;
        tail = insert_value(root, x);
            root = head;
    }

    root = head;
    printTree(root);

    root = head;
    cout << "Head Node: " << root->data << endl;

    return 0;
}
