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
int height(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int leftHeight=height(root->left);
    int rightHeight=height(root->right);
    int maxHeight=max(leftHeight,rightHeight)+1;
    return maxHeight;
}
int diameter(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int op1=diameter(root->left);
    int op2=diameter(root->right);
    int op3=height(root->left)+height(root->right)+1;
    int ans=max(op1,max(op2,op3));
    return ans;
}


