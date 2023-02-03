#include<bits/stdc++.h>
using namespace std;

struct Queue{
    int *arr;
    int front;
    int cap;
    int size;

   Queue (int c)
   {
     arr=new int [c];
     cap=c;
     front=0;
     size=0;
   }

   bool isFull()
   {
    return (cap==size);
   }


   bool isEmpty()
   {
    return (size==0);
   }

   int getRear()
   {
    if(isEmpty())
        return -1;
    else
      return (front+size-1)%cap;
   }

   void enque(int x)
   {
     if(isFull())
         return ;
     
     int rear=getRear();
     rear=(rear+1)%cap;
     arr[rear]=x;
     size++;
   }

   void dequeue()
   {
    if(isEmpty())
        return;
    
    front=(front+1)%cap;
    size--;
   }
};

int main()
{
    
    
    return 0;
}