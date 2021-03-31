#include <iostream>
#include "Student.h"
            
using std::cout;
using std::cin;
using std::endl;

int main(){
    Student s1;
    s1.set_name("Manikandan Arjunan");
    s1.set_age(23);
    s1.set_roll_name(10);
    cout<<"::Student 1 Details::"<<endl;
    cout<<"Student 1 Name: "<<s1.get_name()<<endl;
    cout<<"Student 1 Age: "<<s1.get_age()<<endl;
    cout<<"Student 1 Roll Number: "<<s1.get_roll_num()<<endl;

    Student *s2 = new Student;
    s2->set_name("Vijaya Arjunan");
    s2->set_age(45);
    s2->set_roll_name(11);
    cout<<"::Student 2 Details::"<<endl;
    cout<<"Student 2 Name: "<<(*s2).get_name()<<endl;
    cout<<"Student 2 Age: "<<(*s2).get_age()<<endl;
    cout<<"Student 2 Roll Number: "<<(*s2).get_roll_num()<<endl;
    
    return 0;
}