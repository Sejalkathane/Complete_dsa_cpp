#include <bits/stdc++.h>
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


Node *insertpos(Node * head,int pos,int data){

 //if position is 1 means insert at begning
  Node *temp = new Node(data);
    if (pos == 1)
    {
        temp->next = head;
        return temp;
    }

    Node *curr = head;
    for (int i = 1; i <= pos - 2 && curr != NULL; i++)
    {
        curr = curr->next;
    }
    if (curr == NULL)
    {
        return head;
    }

    temp->next = curr->next;
    curr->next = temp;
    return head;

}





void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data<<" ";
        curr=curr->next;
    }
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    printlist(head);
    cout << endl;
    head = insertpos(head, 2, 40);
    printlist(head);    
    return 0;
}