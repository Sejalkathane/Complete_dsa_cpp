#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;

    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

void postorder(Node *root)
{
   if(root!=NULL)
   {
    postorder(root->left);
    postorder(root->right);
    cout<<(root->key)<<" ";
   }
}


int height(Node *root)
{
    if(root==NULL)
        return 0;
    else
       return max(height(root->left),height(root->right)+1);
}

int main()
{
    
     Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(70);
    root->right->right = new Node(80);
    root->left->left = new Node(50);
    root->left->right = new Node(60);
    

    postorder(root);
    cout<<"\n";
    cout<<height(root);
    return 0;
}