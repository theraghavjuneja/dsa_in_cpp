#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node *invertTree(node *root)
{
    if(root==NULL)
    {
        return NULL;
    }
    invertTree(root->left);
    invertTree(root->right);
    node *temp=root->left;
    root->left=root->right;
    root->right=temp;
    return root;
}

int main()
{
    return 0;
}