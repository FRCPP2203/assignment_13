#ifndef __QUEUE_H__
#define __QUEUE_H__

template <class T>
class Queue
{
private:
    int m_Index;
    int m_Front;

    // Initialising size
    int m_Size = 10;

    // Initialising queue(array) of given size
    T *m_Queue;

public:
    // Empty constructor
    Queue();

    //
    Queue(int p_Size);

    // Method 1
    // To add element to queue which can be any type
    // using queue Enqueue() operation
    bool Enqueue(const T p_Q);
    // Method 2
    // To remove top element from queue
    // using Dequeue() operation
    bool Dequeue(T &p_Q);
    // Method 3
    // To print top element in queue
    // using peek() method
    bool Peek(T &p_Q);
    // Method 4
    // To check whether queue is full
    // using isFull() method
    bool isFull();

    // Method 5
    // To check whether queue is empty
    // using isEmpty() method
    bool isEmpty();

    //
    ~Queue();
};

#endif // __QUEUE_H__