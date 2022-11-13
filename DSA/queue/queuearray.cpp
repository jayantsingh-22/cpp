#include<iostream>
using namespace std;
#define n 20

class queue
{
    int *arr;
    int front ,rear;

    public:
    queue()
    {
        arr = new int[n];
        front =-1;
        rear = -1;
    }

    void enqueue(int x) //same as push function in stack
    {
        if(rear==n-1)
        {
            cout<<"Queue Overflow "<<endl;
            return;
        }
        rear++;
        arr[rear] = x;

        if(front==-1)
        {
            front++;
        }
    }

    void dequeue() //same as pop function in stack
    {
        if(front==-1 || front>rear)
        {
            cout<<"No elements in the queue."<<endl;
            return;
        }
        front++;
    }

    int peek()
    {
        if(front==-1 || front>rear)
        {
            cout<<"No elements in the queue."<<endl;
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        if(front==-1 || front>rear)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    for(int i=0;i<4;i++)
    {
        cout<<q.peek()<<endl;
        q.dequeue();
    }
    cout<<q.empty()<<endl;
    q.dequeue();
    return 0;
}