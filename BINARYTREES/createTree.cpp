// QUESTION LINK : https://www.codingninjas.com/studio/problems/create-binary-tree_8360671?leftPanelTabValue=PROBLEM
#include<iostream>
#include<vector>
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
// this is how a tree is created -- just for basics (not req in question solb)
Node *createTree(Node *root)
{
    cout << "Enter the data" << endl;
    int data;
    cin >> data;
    // constructor called now yeh saari things initilaize
    root = new Node(data);
    if (data == -1)
    {
        return NULL;
    }
    // to insert something to left;
    cout << "Enter data for inserting in left of" << data << endl;
    root->left = createTree(root->left);
    cout << "Enter data for inserting inr right" << data << endl;
    root->right = createTree(root->right);
    return root;
}

// assume we need to create a tree from an array
// for that we have 2 approaches level order and 2*index+ approach
Node *solve(int index,vector<int>&arr)
{
    if(index<arr.size())
    {
        Node* root = new Node(arr[index]);
        // SINCE LEFT INDEX WILL ALWAYS BE AT 2*INDEX *1 AND RIGHT AT 2*INDEX +2 POSITION
        root->left = solve(2 * index + 1,arr);
        root->right = solve( 2 * index + 2,arr);
        return root;
    }
    

}
Node* createTree(vector<int>&arr){
    return solve(0,arr); 
}