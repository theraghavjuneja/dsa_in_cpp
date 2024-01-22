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

// void levelOrderTraversal(node *root)
// {
//     queue<node *> q;
//     q.push(root);
//     q.push(NULL);
//     while (!q.empty())
//     {
//         node *temp = q.front();
//         q.pop();
//         if (temp == NULL)
//         {
//             // which will only occur jab aap curret level ke end m ho
//             cout << endl;
//             // agar aab tak empty nhi hui that means push another nULL
//             if (!q.empty())
//             {
//                 q.push(NULL);
//             }
//         }
//         else
//         {
//             cout << temp->data << " "; // Keep this line to print the node's data
//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//     }
// }



// LEET-CODE QUESTION https://leetcode.com/problems/binary-tree-level-order-traversal/

//  vector<vector<int>> levelOrder(TreeNode* root) {
//         vector<vector<int>> vq;
//         if (!root) {
//             return vq;
//         }

//         queue<TreeNode*> q;
//         q.push(root);

//         while (!q.empty()) {
//             int levelSize = q.size(); 
//             vector<int> levelValues;

//             for (int i = 0; i < levelSize; ++i) {
//                 TreeNode* current = q.front();
//                 q.pop();

//                 levelValues.push_back(current->val);

//                 if (current->left) {
//                     q.push(current->left);
//                 }
//                 if (current->right) {
//                     q.push(current->right);
//                 }
//             }

//             vq.push_back(levelValues);
//         }

//         return vq;
//     }