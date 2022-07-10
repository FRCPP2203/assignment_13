#include "Queue.h"
template <class T>
Queue<T>::Queue()
{
    m_Front = 0;
    m_Index = -1; // Empty Queue
    m_Queue = new T[m_Size]
}

template <class T>
Queue<T>::Queue(int p_Size)
{
    m_Front = 0;
    m_Index = -1; // Empty Queue
    if (p_Size > 0 && p_Size < 1000)
        m_Size = p_Size;
    m_Queue = new T[m_Size];
}

template <class T>
bool Queue<T>::Enqueue(T p_Q)
{
    // Checking whether queue is completely filled
    if (isFull())
    {
        // Display message when no elements can be enqueue
        // into it
        cout << "Queue is full\n";
        return 0;
    }
    else
    {
        m_Index++;
        m_Queue[m_Index] = p_Q;
        return 1;
    }
}

template <class T>
bool Queue<T>::Dequeue(T &p_Q)
{
    if (isEmpty() || m_Front > m_Index)
        return 0;

    p_Q = m_Queue[m_Front];

    m_Front++;

    return 1;
}

template <class T>
bool Queue<T>::Peek(T &p_Q)
{
    if (isEmpty())
    {
        return 0;
    }

    p_Q = m_Queue[0];

    return 1;
}

template <class T>
bool Queue<T>::isFull()
{
    if (m_Index == m_Size)
    {
        return 1;
    }
    return 0;
}

template <class T>
bool Queue<T>::isEmpty()
{
    if (m_Index == -1)
    {
        return 1;
    }
    return 0;
}

template <class T>
Queue<T>::~Queue()
{
    delete[] m_Queue;
}
