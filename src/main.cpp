#include <iostream>
#include "SinglyList.h"
#include "Student.h"

int main()
{
    SinglyList<Student> list;
    while (true)
    {
        int number;
        std::cout << "**************************************************";
        std::cout << "\n\nEnter number of function that you want to choose:"
                  << std::endl
                  << "1. Add students"
                  << std::endl
                  << "2. Find one student"
                  << std::endl
                  << "3. Show all students"
                  << std::endl
                  << "4. Remove student by ID"
                  << std::endl
                  << "5. Sort list of students by ID"
                  << std::endl
                  << "0. End program"
                  << std::endl
                  << "Function: ";
        std::cin >> number;
        std::cin.ignore();
        std::cout << "\n";
        switch (number)
        {
        case 1:
        {
            int n = 0;
            std::cout << "Enter Number of Students: ";
            std::cin >> n;
            std::cin.ignore();
            for (int i = 0; i < n; i++)
            {
                Student student;
                student.createOne();
                std::cin.ignore();
                list.push_back(student);
            }
        }
        break;
        case 2:
        {
            bool r = true;
            while (r)
            {
                int query;
                int id;
                char *name = new char();
                std::cout << "Search by ID/Name: "
                          << std::endl
                          << "1. By ID"
                          << std::endl
                          << "2. By Name"
                          << std::endl
                          << "0. Back"
                          << std::endl;
                std::cin >> query;
                switch (query)
                {
                case 1:
                    std::cout << "Search By ID: ";
                    std::cin >> id;
                    break;
                case 2:
                    std::cout << "Search By Name: ";
                    std::cin >> name;
                    break;
                case 0:
                default:
                    r = false;
                    break;
                }
                list.search(Student(name, id));
                id = 0;
                name = "";
            }
        }
        break;
        case 3:
        {
            list.print();
        }
        break;
        case 4:
        {
            int id;
            std::cout << "Delete By ID: ";
            std::cin >> id;
            list.remove(Student("", id));
            list.print();
        }
        break;
        case 5:
        {
        }
        break;
        case 0:
        {
            return 0;
        }
        break;
        default:
        {
            std::cout << "Invalid input";
        }
        break;
        }
        std::cout << "\n";
    }
    return 0;
}
