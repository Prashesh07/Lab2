#include <iostream>
#include "../include/Queue.h"
using namespace std;

int main()
{
    Queue *queue = new ArrayQueue(5);
    int data;
    if(queue->isEmpty())
    {
        cout<<"The queue is empty "<<endl;

    }
    queue->enQueue(2);
    queue->enQueue(2);
    queue->enQueue(2);
    queue->enQueue(2);
    queue->deQueue(data);
    cout<<"The dequeued element is :"<<data<<endl;
    queue->front(data);
    cout<<"The front element is :"<<data<<endl;
    queue->rear(data);
    cout<<"The rear element is :"<<data<<endl;
    queue->traverse();

}