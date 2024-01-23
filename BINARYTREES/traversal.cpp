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
vector<int> postorderTraversal(node *root)
{

    vector<int> answer;
    if (root == NULL)
    {
        return answer;
    }
    vector<int> leftAnswer = postorderTraversal(root->left);
    answer.insert(answer.end(), leftAnswer.begin(), leftAnswer.end());
    vector<int> rightResult = postorderTraversal(root->right);
    answer.insert(answer.end(), rightResult.begin(), rightResult.end());
    answer.push_back(root->data);
    return answer;
}
vector<int> inorderTraversal(node *root)
{
    vector<int> answer;
    if (root == NULL)
    {
        return answer;
    }
    vector<int> leftResult = inorderTraversal(root->left);
    answer.insert(answer.end(), leftResult.begin(), leftResult.end());
    answer.push_back(root->data);
    vector<int> rightResult = inorderTraversal(root->right);
    answer.insert(answer.end(), rightResult.begin(), rightResult.end());
    return answer;
}
vector<int> preorderTraversal(node* root) {
        vector<int>answer;
        if(root==NULL)
        {
            return answer;
        }
        answer.push_back(root->data);
        vector<int>leftAnswer=preorderTraversal(root->left);
        answer.insert(answer.end(),leftAnswer.begin(),leftAnswer.end());
        vector<int>rightAnswer=preorderTraversal(root->right);
        answer.insert(answer.end(),rightAnswer.begin(),rightAnswer.end());
        return answer;
    }

int main()
{
    return 0;
}