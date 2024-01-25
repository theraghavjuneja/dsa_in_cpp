// need to check whether root equals the children sum
#include<iostream>
using namespace std;
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
pair<bool,int>solve(Node *root)
{
    pair<bool,int>answer;
    if(root==NULL)
    {
        pair<bool,int>p=make_pair(true,0);
        return p;
    }
    pair<bool, int> leftPart = solve(root->left);
    pair<bool, int> rightPart = solve(root->right);
    bool leftTrue = leftPart.first;
    bool rightTrue = rightPart.first;
    int leftSum = leftPart.second;
    int rightSum = rightPart.second;
    bool check;
    if(root->left==NULL &&root->right==NULL)
    {
        check=true;
    }
    else
    {
        check=root->data==(leftSum+rightSum);
    }
    answer.first = leftTrue && rightTrue && check;
    answer.second = leftSum + rightSum + root->data; 
    
    return answer;
}
bool checkTree(Node* root) {
        pair<bool,int>p=solve(root);
        return p.first;
    }
int main()
{
    return 0;
}