#include "Student.h"

#include <iostream>
#include <fstream>
#include <string>

void create_student_array(Student*&students, int&lenght_students,
                                   std::string const file_address)
{
    std::cout<<"create_student_array\n";
    if(students!=nullptr){
        std::cout<<"   Massiv yje syshestvyet\n";
        return;
    }
    std::ifstream fin(file_address);
    if(!fin){
        std::cout<<"   Ne ydalos otkrit file vvoda\n";
        return;
    }
    int k;
    fin>>k;
    students=new Student[k];
    lenght_students=k;
    for(int i{0}; i<lenght_students; ++i){
        std::string s;
        fin>>s;
        students[i].set_surname(s);
        fin>>s;
        students[i].set_name(s);
        fin>>s;
        students[i].set_patronymic(s);
        fin>>s;
        students[i].set_year_birth(s);
        fin>>s;
        students[i].set_course(s);
        fin>>s;
        students[i].set_group(s);
    }
    fin.close();
}
