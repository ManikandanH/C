#include "Student.h"
#include <string>

using std::string;

void Student::set_name(string name){
    stu_name = name;
}

void Student::set_roll_name(int roll){
    roll_num = roll;
}

void Student::set_age(int age){
    stu_age = age;
}

int Student::get_age(){
    return stu_age;
}

int Student::get_roll_num(){
    return roll_num;
}

string Student::get_name(){
    return stu_name;
}