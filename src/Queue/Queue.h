#ifndef __QUEUE_H__
#define __QUEUE_H__

#define Size 100

template <class T>
class Queue
{
private:
    int first;
    T m_Queue[Size];

public:
    Queue();
    // Method 1
    // To add element to queue which can be any type
    // using queue Enqueue() operation
    void Enqueue(T p_Q);
    // Method 2
    // To remove top element from queue
    // using Dequeue() operation
    T Dequeue();
    // Method 3
    // To print top element in queue
    // using peek() method
    T Peek();
    // Method 4
    // To check whether queue is full
    // using isFull() method
    bool isFull();

    // Method 5
    // To check whether queue is empty
    // using isEmpty() method
    bool isEmpty();
};

#endif // __QUEUE_H__