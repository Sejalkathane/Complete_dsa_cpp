#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

int countNodesinLoop(struct Node *head)
{
    Node *slow=head;
    Node *fast=head;
    
    int count=1;
    if(!head)
      return 0;
      
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        
        if(slow==fast)
        {
            slow=fast->next;
            
            while(slow!=fast)
            {
                slow=slow->next;
                count++;
            }
            return count;
        }
    }
    return 0;
    
    
}
int main()
{
    //NO loop then return zero

     Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);

    cout<<countNodesinLoop(head);
    
    return 0;
}