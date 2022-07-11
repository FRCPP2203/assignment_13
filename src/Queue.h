#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <iostream>
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
    Queue()
    {
        m_Front = 0;
        m_Index = -1; // Empty Queue
        m_Queue = new T[m_Size];
    }

    //
    Queue(int p_Size)
    {
        m_Front = 0;
        m_Index = -1; // Empty Queue
        if (p_Size > 0 && p_Size < 1000)
            m_Size = p_Size;
        m_Queue = new T[m_Size];
    }

    // Method 1
    // To add element to queue which can be any type
    // using queue Enqueue() operation
    void Enqueue(const T p_Q)
    {
        // Checking whether queue is completely filled
        if (isFull())
        {
            // Display message when no elements can be enqueue
            // into it
            std::cout << "Queue is full\n";
        }
        m_Index++;
        m_Queue[m_Index] = p_Q;
    }
    // Method 2
    // To remove first element from queue
    // using Dequeue() operation
    T Dequeue()
    {
        T enqueue_element = m_Queue[m_Front];

        m_Front++;
        return enqueue_element;
    }
    // Method 3
    // To print top element in queue
    // using peek() method
    T Peek()
    {
        // Initialising a variable to store top element
        T peek_element = m_Queue[m_Index];
        // Returning the top element
        return peek_element;
    }
    // Method 4
    // To check whether queue is full
    // using isFull() method
    bool isFull()
    {
        if (m_Index == m_Size)
        {
            return 1;
        }
        return 0;
    }

    // Method 5
    // To check whether queue is empty
    // using isEmpty() method
    bool isEmpty()
    {
        if (m_Index == -1)
        {
            return 1;
        }
        return 0;
    }

    //
    ~Queue()
    {
        delete[] m_Queue;
    }
};

#endif // __QUEUE_H__