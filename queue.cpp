#include<bits/stdc++.h>
using namespace std;

int q[4];
int n;
int front=-1;
int rear=-1;
void enqueue(int ele)
{
   if(rear==n-1)
   {
       cout<<"overflow!!"<<endl;
   }
   else
   {
       front=0;
       rear++;
       q[rear]=ele;
   }
}
void dequeue()
{
    if(front==-1)
    {
        cout<<"Underflow!!"<<endl;
    }
    else
    {
        front++;
    }
}
void display()
{
    for(int i=rear;i>=front;i--)
    {
        cout<<q[i]<<" ";
    }
   cout<<endl;
}
int main()
{
    cout<<"Enter size of queue: ";
    cin>>n;
    cout<<"Queue: ";
    enqueue(5);
    enqueue(7);
    enqueue(9);
    enqueue(11);
    display();
    dequeue();
    cout<<"Queue after deletion: ";
    display();
    return 0;
}
