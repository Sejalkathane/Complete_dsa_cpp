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


Node *dellast(Node *head)
{
    //condition if first node is null ie. head;
    if(head==NULL)
       return NULL;


// condion if second node null ie. head->next;
    if((head->next)==NULL)
    {
        delete head;
        return NULL;
    }

    Node *curr=head;
    //reach to curr->next
    while(curr->next->next!=NULL)
    {
        curr=curr->next;
    }

    // if found delete
    delete curr->next;
    //inisialize it with curr->next=NULL
    curr->next=NULL;

    return head;

}




void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}



int main()
{
       Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    printlist(head);
    head = dellast(head);
    printlist(head);

    return 0;
}