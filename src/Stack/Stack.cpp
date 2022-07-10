#include "Stack.h"

template <class T>
Stack<T>::Stack()
{
    m_Top = -1;
    m_Stack = new T[m_Size];
}

template <class T>
Stack<T>::Stack(int p_Size)
{
    if (p_Size > 0 && p_Size < 1000)
        m_Size = p_Size;
    m_Top = -1;
    m_Stack = new T[m_Size];
}

template <class T>
void Stack<T>::Push(T p_K)
{
    // Checking whether stack is completely filled
    if (isFull())
    {
        // Display message when no elements can be pushed
        // into it
        cout << "Stack is full\n";
    }
    else
    {
        // Inserted element
        cout << "Inserted element " << k << endl;
        // Incrementing the top by unity as element
        // is to be inserted
        m_Top = m_Top + 1;

        // Now, adding element to stack
        m_Stack[m_Top] = k;
    }
}

template <class T>
T Stack<T>::pop()
{
    // Initialising a variable to store popped element
    T popped_element = m_Stack[m_Top];

    // Decreasing the top as
    // element is getting out from the stack
    m_Top--;

    // Returning the element/s that is/are popped
    return popped_element;
}

template <class T>
T Stack<T>::peek()
{
    // Initialising a variable to store top element
    T peek_element = m_Stack[m_Top];
    // Returning the top element
    return peek_element;
}

template <class T>
bool Stack<T>::isFull()
{
    // Till top in inside the stack
    if (m_Top == (m_Size - 1))
        return 1;
    else
        // As top can not exceeds th size
        return 0;
}

template <class T>
bool Stack<T>::isEmpty()
{
    if (m_Top == -1)
        return 1;
    else
        return 0;
}
