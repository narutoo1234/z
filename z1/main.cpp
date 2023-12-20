// Задача №1

#include "Student.h"
#include "Create_student_array.h"
#include "Delete_student_array.h"
#include "Output_to_file.h"


int main()
{
    Student* students=nullptr;
    int lenght_students=0;

    create_student_array(students, lenght_students, "In_file.txt");
    create_student_array(students, lenght_students, "In_file.txt");
    output_to_file(students, lenght_students, "Out_file.txt");
    delete_student_array(students, lenght_students);
    output_to_file(students, lenght_students, "Out_file.txt");



    return 0;
}
