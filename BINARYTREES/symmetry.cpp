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
bool symmetricCheck(node *leftNode,node *rightNode)
{
    if(leftNode==NULL &&rightNode==NULL)
        {
            return true;
        }
        if(leftNode==NULL &&rightNode!=NULL)
        {
            return false;
        }
        if(leftNode!=NULL &&rightNode==NULL)
        {
            return false;
        }
        if(leftNode->data!=rightNode->data)
        {
            return false;
        }
        return symmetricCheck(leftNode->left,rightNode->right)&&symmetricCheck(leftNode->right,rightNode->left);
}
bool isSymmetric(node *root)
{
    return symmetricCheck(root->left,root->right);
}
int main()
{
    return 0;
}