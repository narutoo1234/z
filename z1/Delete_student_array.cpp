#include "Student.h"

#include <iostream>

void delete_student_array(Student*&students, int&lenght_students)
{
    std::cout<<"delete_student_array\n";
    delete[]students;
    students=nullptr;
    lenght_students=0;
}
