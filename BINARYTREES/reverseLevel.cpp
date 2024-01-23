#include<iostream>
#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
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
using namespace std;
vector<vector<int>>reverseLevelOrder(Node *root)
{
    vector<vector<int>>vq;
    queue<Node *>q;
  
    if(!root)
    {
        return vq;
    }
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        // queue m current elments ka size
        int currentSize=q.size();
        // this is the current size of the queue
        vector<int>levelValues;
        // traversing all the current elemets
        for(int i=0;i<levelValues.size();i++)
        {
            Node *current=q.front();
            q.pop();
            levelValues.push_back(current->data);
            if(current->left)
            {
                levelValues.push_back(current->left->data);
            }
            if(current->right)
            {
                levelValues.push_back(current->right->data);
            }
            
        }
        vq.push_back(levelValues);
    }
    reverse(vq.begin(),vq.end());
    return vq;
}

int main()
{
    return 0;
}