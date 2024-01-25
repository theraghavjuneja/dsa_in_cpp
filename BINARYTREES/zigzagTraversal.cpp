#include<iostream>
#include<vector>
#include<queue>
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
    vector<vector<int>>zigzagTraversal(Node *root)
    {
        vector<vector<int>>traversal;
        if(root==NULL)
        {
            return traversal;
        }
        queue<Node *>q;
        q.push(root);
        bool leftToRight=true;
        while(!q.empty())
        {
            int levelSize=q.size();
            vector<int>currentLevelValue;
            int arr[levelSize];
            for(int i=0;i<levelSize;i++)
            {
                Node *current=q.front();
                q.pop();
                int index=leftToRight?i:levelSize-i-1;
                arr[index]=current->data;
                if(current->left)
                {
                    q.push(current->left);

                }
                if(current->right)
                {
                    q.push(current->right);
                }
            }
            leftToRight=!leftToRight;
            for(auto i:arr)
            {
                currentLevelValue.push_back(i);
            }
            traversal.push_back(currentLevelValue);
        }
    return traversal;
    }
int main()
{
    return 0;
}