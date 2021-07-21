#include "bits/stdc++.h"
using namespace std;

class Queue{
int front;
int rear;
int a[5];
public:
    Queue()
    {
        front=-1;
        rear=-1;
        for(int i=0;i<5;i++)
        {
            a[i]=0;
        }
    }
    bool isEmpty()
    {
        if(front==-1&&rear==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        if(rear==4)//sizeof(a)-1==4
            return true;
        else
        {
            return false;
        }
    }
    void Enqueue(int val)
    {
        if(isFull())
           { return;}
        else if(isEmpty())
        {
            rear=0;
            front=0;
            // a[rear]=val;
        }
        else
        {
            rear++;
            // a[rear]=val;

        }
        a[rear]=val;
    }
    int Dequeue()
    {
        int temp=0;
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        else if(front==rear)
        {
            temp=a[front];
            a[front]=0;
            rear=-1;
            front=-1;
        }
        else
        {
            temp=a[front];
            a[front]=0;
            front++;
        }
        return temp;
    }
    int count ()
    {
        return (rear-front+1);
    }
    void display()
    {
        cout<<"All values in the Queue are : \n";
        for(int i=0;i<5;i++)
        {
            cout<<a[i]<<" ";
        }
    }
};


int main()
{
    Queue q1;
    int option ,position ,value;
    do{
        cout<<"Select an option .Enter 0 to Exit"<<endl;
        cout<<"1.Enqueue()"<<endl;
        cout<<"2.Dequeue"<<endl;
        cout<<"3.isEmpty()"<<endl;
        cout<<"4.isFull()"<<endl;
        cout<<"5.count()"<<endl;
        cout<<"6.display()"<<endl;
        cout<<"7.Clear screen."<<endl;
        cin>>option;
        switch(option)
        {
            case 0: 
                break;
            case 1:
                cout<<"Enqueue operation \n Enter an item to Enqueue into the Queue"<<endl;
                cin>>value;
                q1.Enqueue(value);
                break;
            case 2:
                cout<<"Dequeue operation "<<q1.Dequeue()<<endl;
                break;
            case 3:
                if(q1.isEmpty())
                    cout<<"Queue is empty "<<endl;
                else
                {
                    cout<<"Queue is not empty"<<endl;
                }                
                break;
            case 4:
                if(q1.isFull())
                    cout<<"Queue is full"<<endl;
                else
                {
                    cout<<"Queue is not full"<<endl;
                }  
                break;
            case 5:
                cout<<"Elements in the Queue : "<<q1.count()<<endl;
                break;
            case 6:
                cout<<"Display function called - : "<<endl;
                q1.display();
                break;
            case 7:
                system("cls");
                break;
            default: 
                cout<<"Invalid option selected \n";
                break;
        }
    }while(option!=0);
    return 0;
}