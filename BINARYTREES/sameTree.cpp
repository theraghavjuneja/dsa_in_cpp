#include<iostream>
using namespace std;
// need to check 2 trees are same or not
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
bool isSameTree(Node *p,Node *q)
{
    if(p==NULL &&q!=NULL)
        {
            return false;
        }
        if(p!=NULL &&q==NULL)
        {
            return false;
        }
        if(p==NULL &&q==NULL)
        {
            return true;
        }
        if(p->data!=q->data)
        {
            return false;
        }
         return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);

}

int main()
{
    return 0;
}