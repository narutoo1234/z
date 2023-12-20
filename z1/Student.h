#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
    public:
        std::string get_surname()const { return surname; }
        std::string get_name()const { return name; }
        std::string get_patronymic()const { return patronymic; }
        std::string get_year_birth()const { return year_birth; }
        std::string get_course()const { return course; }
        std::string get_group()const { return group; }
        void set_surname(std::string s) { surname=s; }
        void set_name(std::string s) { name=s; }
        void set_patronymic(std::string s) { patronymic=s; }
        void set_year_birth(std::string s) { year_birth=s; }
        void set_course(std::string s) { course=s; }
        void set_group(std::string s) { group=s; }

    protected:

    private:
        std::string surname;
        std::string name;
        std::string patronymic;
        std::string year_birth;
        std::string course;
        std::string group;
};

#endif // STUDENT_H
