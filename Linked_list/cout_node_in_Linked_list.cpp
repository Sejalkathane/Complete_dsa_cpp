#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};


int getCount(struct Node* head)
    
    {
        int count=0;
        
        Node *curr=head;
        
        while(curr!=NULL)
        {
            curr=curr->next;
            count++;
        }
    
       return count;
    };


int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout<<getCount(head);
    return 0;
}