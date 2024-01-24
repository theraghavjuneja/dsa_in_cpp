#include<iostream>
using namespace std;
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
pair<bool,int>Balanced(Node *root)
{
    pair<bool,int>answer;
    if(root==NULL)
    {
        return make_pair(true,0);
    }
    pair<bool,int>leftBalanced=Balanced(root->left);
    pair<bool,int>rightBalanced=Balanced(root->right);
    int leftHeight=leftBalanced.second;
    int rightHeight=rightBalanced.second;
    bool leftTrue=leftBalanced.first;
    bool rightTrue=rightBalanced.second;
    bool diff=abs(leftHeight-rightHeight)<=1;
    answer.first=leftTrue&&rightTrue&&diff;
    answer.second=max(leftHeight,rightHeight)+1;
    return answer;

    
}
int main()
{
    return 0;
}