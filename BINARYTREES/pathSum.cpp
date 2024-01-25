#include<iostream>
using namespace std;
// we need to check is there one path from root to leaf jiska sum=target sum
class Node
{
    public:
    Node *left;
    Node *right;
    int data;
    Node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
bool hasPathSum(Node *root,int targetSum)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->left==NULL &&root->right==NULL)
    {
        return root->data==targetSum;
    }
    bool leftpath=hasPathSum(root->left,targetSum-root->data);
    bool rightpath=hasPathSum(root->right,targetSum-root->data);
    // since agar ek bhi path true hua to true return kr dena
    
    return leftpath||rightpath;
}
int main()
{
    return 0;
}