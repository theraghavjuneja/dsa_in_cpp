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
pair<int, int> diameterFast(Node *root)
{
    if (root == nullptr)
    {
        pair<int, int> p = make_pair(0, 0);
        return p;
    }
    pair<int, int> leftPart = diameterFast(root->left);
    pair<int, int> rightPart = diameterFast(root->right);
    int op1 = left.first;
    int op2 = right.second;
    int op3 = left.second + right.second + 1;
    pair<int, int> ans;
    ans.first = max(op1, max(op2, op3));
    ans.second = max(left.second, right.second) + 1;
    return ans;
}
int main()
{
    return 0;
}