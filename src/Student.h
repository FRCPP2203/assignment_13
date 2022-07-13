#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <iostream>
#include <string>
#include "SinglyList.h"
class Student
{
public:
    Student()
    {
    }
    // constructor
    Student(char *p_Name, int p_ID)
        : m_Name(p_Name), m_ID(p_ID)
    {
    }
    // get name
    char *getName()
    {
        return m_Name;
    }
    // get id
    int getID()
    {
        return m_ID;
    }
    // create one student
    void createOne()
    {
        std::cout << "Enter Full Name: ";
        std::cin >> m_Name;
        std::cout << "Enter ID: ";
        std::cin >> m_ID;
    }

    // operator == overloading
    bool operator==(const Student &obj)
    {
        return (m_ID == obj.m_ID || std::string(m_Name) == std::string(obj.m_Name));
    }

    // operator << overloading
    friend std::ostream &operator<<(std::ostream &output, const Student &Obj)
    {
        output << "\nStudent ID: " << Obj.m_ID;
        output << "\nStudent name: " << Obj.m_Name;
        output << "\n";
        return output;
    };
    static void swap(Student &A, Student &B)
    {
        Student tmp = A;
        A = B;
        B = tmp;
    }

private:
    char *m_Name = new char();
    int m_ID;
};
#endif // __STUDENT_H__