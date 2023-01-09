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


Node printEndNth(Node *head,int n)
{
  if(head==NULL)
    return;
  
  Node * second=head;
  for(int i=0;i<n;i++)
  {
    if(second==NULL)
      return 0;
    
    second=second->next;
  }

  Node *first=head;

  while(second!=NULL)
  {
    second=second->next;
    first=first->next;
  }

  cout<<first->data;
}


int main()
{

     Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);
    printEndNth(head,2);
    
    return 0;
}