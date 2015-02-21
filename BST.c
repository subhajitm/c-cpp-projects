#include<stdio.h>

#define NULL null

typedef struct{
  int val;
  node *left;
  node *right;
} node;

void insert(node *r, int x)
{
  if(r->val < x) {

int main(){
  node *root = (node*)malloc(sizeof(node));

  root->val = 8;
  root->left = null;;
  root->right = null;

  insert(root, 5);
  insert(root, 13);
  inorder(root);
  postorder(root);
  preorder(root);
}
