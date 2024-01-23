#include <iostream>
#include <vector>
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
int heightOfTree(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int leftHeight=heightOfTree(root->left);
    int rightHeight=heightOfTree(root->right);
    int height=max(leftHeight,rightHeight)+1;
    return height;

}