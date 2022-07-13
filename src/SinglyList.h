#ifndef __SINGLYLIST_H__
#define __SINGLYLIST_H__

#include <iostream>
template <class T>
struct Node
{
    T m_Value;
    Node *m_Next;
    Node(T p_Value, Node *p_Next) : m_Value(p_Value), m_Next(p_Next) {}
};
template <class T>
class SinglyList
{
private:
    int m_count = 0;
    Node<T> *m_Head;
    Node<T> *m_Tail;

public:
    SinglyList()
    {
        m_Head = NULL;
        m_Tail = NULL;
    }
    void push_back(T p_Value)
    {
        Node<T> *new_node = new Node<T>(p_Value, NULL);
        if (isEmpty())
        {
            m_Head = new_node;
            m_Tail = new_node;
        }
        else
        {
            m_Tail->m_Next = new_node;
            m_Tail = new_node;
        }
        m_count++;
    }
    void push_front(T p_Value)
    {
        Node<T> *new_node = new Node<T>(p_Value, m_Head);
        // if the list is empty we're going to add head
        if (isEmpty())
        {
            m_Head = new_node;
            m_Tail = new_node;
        }
        else
        {
            new_node->m_Next = m_Head;
            m_Head = new_node;
        }
        m_count++;
    }
    void insert(int p_Pos, T p_Value)
    {
        int i = 0;
        Node<T> *ptr;
        ptr = m_Head;
        if (p_Pos >= m_count)
            return;
        while (ptr != NULL)
        {

            if (i == p_Pos)
            {
                Node<T> *new_node = new Node<T>(p_Value, ptr->m_Next);
                if (m_Head == NULL)
                {
                    m_Head = new_node;
                    m_Tail = new_node;
                }
                ptr->m_Next = new_node;
                ptr = new_node;
                break;
            }
            ptr = ptr->m_Next;
            i++;
        }
        m_count++;
    }
    void remove(T p_Value)
    {
        // If the head is to be deleted
        if (m_Head->m_Value == p_Value)
        {
            delete m_Head;
            m_Head = m_Head->m_Next;
            return;
        }

        // If there is only one element in the list
        if (m_Head->m_Next == NULL)
        {
            // If the head is to be deleted. Assign null to the head
            if (m_Head->m_Value == p_Value)
            {
                delete m_Head;
                m_Head = NULL;
                return;
            }
            // else print, value not found
            std::cout << "Value not found!" << std::endl;
            return;
        }

        // Else loop over the list and search for the node to delete
        Node<T> *temp = m_Head;
        while (temp->m_Next != NULL)
        {
            // When node is found, delete the node and modify the pointers
            if (temp->m_Next->m_Value == p_Value)
            {
                Node<T> *temp_ptr = temp->m_Next->m_Next;
                delete temp->m_Next;
                temp->m_Next = temp_ptr;
                return;
            }
            temp = temp->m_Next;
        }

        // Else, the value was neve in the list
        std::cout << "Value not found" << std::endl;
    }
    // gets back the size of the list (hence the l_ in the name)
    int size() const noexcept
    {
        return m_count;
    }
    // checks if the size is zero which indicates that the list is empty
    bool isEmpty() const
    {
        return m_count > 0 ? 0 : 1;
    }
    bool search(T p_Value)
    {
        Node<T> *ptr;
        ptr = m_Head;
        while (ptr != NULL)
        {
            if (ptr->m_Value == p_Value)
            {
                std::cout << ptr->m_Value << std::endl;
                return true;
            }
            ptr = ptr->m_Next;
        }
        std::cout << p_Value;
        std::cout << "Not Found!\n";
        return false;
    }
    void print()
    {
        if (isEmpty())
        {
            std::cout << "Empty list" << '\n';
        }
        else
        {
            Node<T> *ptr;
            ptr = m_Head;
            while (ptr != NULL)
            {
                std::cout << ptr->m_Value << " ";
                ptr = ptr->m_Next;
            }
            std::cout << "\n";
        }
    }
};

#endif // __SINGLYLIST_H__