#include<iostream>
#include<vector>
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
vector<int> inorder(node *root)
{
    vector<int>answer;
    if(root==NULL)
    {
        return answer;
    }
    inorder(root->left);
    answer.push_back(root->data);
    inorder(root->right);
}
int main()
{
    
    return 0;
}