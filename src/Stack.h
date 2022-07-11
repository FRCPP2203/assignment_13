#ifndef __STACK_H__
#define __STACK_H__

#include <iostream>
template <class T>
class Stack
{
private:
    // Taking data member top
    int m_Top;

    // Initialising size
    int m_Size = 10;

    // Initialising stack(array) of given size
    T *m_Stack;

public:
    // Empty constructor
    Stack()
    {
        m_Top = -1;
        m_Stack = new T[m_Size];
    }

    //
    Stack(int p_Size)
    {
        if (p_Size > 0 && p_Size < 1000)
            m_Size = p_Size;
        m_Top = -1;
        m_Stack = new T[m_Size];
    }

    // Method 1
    // To add element to stack which can be any type
    // using stack push() operation
    void Push(T p_K)
    {
        // Checking whether stack is completely filled
        if (isFull())
        {
            // Display message when no elements can be pushed
            // into it
            std::cout << "Stack is full\n";
        }
        else
        {
            // Inserted element
            std::cout << "Inserted element " << std::endl;
            // Incrementing the top by unity as element
            // is to be inserted
            m_Top = m_Top + 1;

            // Now, adding element to stack
            m_Stack[m_Top] = p_K;
        }
    }

    // Method 2
    // To remove top element from stack
    // using pop() operation
    T pop()
    {
        // Initialising a variable to store popped element
        T popped_element = m_Stack[m_Top];

        // Decreasing the top as
        // element is getting out from the stack
        m_Top--;

        // Returning the element/s that is/are popped
        return popped_element;
    }

    // Method 3
    // To print top element in stack
    // using peek() method
    T peek()
    {
        // Initialising a variable to store top element
        T peek_element = m_Stack[m_Top];
        // Returning the top element
        return peek_element;
    }

    // Method 4
    // To check whether stack is full
    // using isFull() method
    bool isFull()
    {
        // Till top in inside the stack
        if (m_Top == (m_Size - 1))
            return 1;
        else
            // As top can not exceeds th size
            return 0;
    }

    // Method 5
    // To check whether stack is empty
    // using isEmpty() method
    bool isEmpty()
    {
        if (m_Top == -1)
            return 1;
        else
            return 0;
    }
    ~Stack()
    {
        delete[] m_Stack;
    }
};

#endif // __STACK_H__