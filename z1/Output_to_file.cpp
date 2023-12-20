#include "Student.h"

#include <iostream>
#include <fstream>
#include <string>

void output_to_file(Student const*const students,
                    int const lenght_students,
                    std::string const file_address)
{
    std::cout<<"output_to_file\n";
    if(students==nullptr){
        std::cout<<"   Massiv ne syshestvyet\n";
        return;
    }
    std::ofstream fout(file_address);
    if(!fout){
        std::cout<<"   Ne ydalos otkrit/sozdat file vivoda\n";
        return;
    }
    fout<<lenght_students<<"\n";
    for(int i{0}; i<lenght_students; ++i){
        fout<<students[i].get_surname()<<" ";
        fout<<students[i].get_name()<<" ";
        fout<<students[i].get_patronymic()<<" ";
        fout<<students[i].get_year_birth()<<" ";
        fout<<students[i].get_course()<<" ";
        fout<<students[i].get_group()<<"\n";
    }
    fout.close();
}
