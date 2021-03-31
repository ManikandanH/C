#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Student
{
private:
    int age;
    string name;
    int roll_num;

public:
    Student(string stu_name = "", int stu_age = 0, int roll = 0);
    Student(const Student &source);
    ~Student(){
        cout<<"Destructor is being called"<<endl;
    }
    string get_name(){
        return name;
    }

    int get_age(){
        return age;
    }

    void set_name(string stu_name){
        name = stu_name;
    }

    int get_roll(){
        return roll_num;
    }
};

Student::Student(const Student &source): name{source.name}, age{source.age}, roll_num{source.roll_num} {
    cout<<"Copy Constructor called"<<endl;
 } //if not provided c++ will create defaultly.

Student::Student(string stu_name, int stu_age, int roll)
    : name{stu_name}, age{stu_age}, roll_num{roll} {} 

void display(Student s3){
    s3.set_name("Manikandan Arjunan");
    cout<<"STUDENT NAME: "<<s3.get_name()<<endl;
    // cout<<"STUDENT AGE: "<<s3.get_age()<<endl;
    // cout<<"STUDENT ROLL: "<<s3.get_roll()<<endl;
}

int main(){
    Student s1;
    s1.set_name("Manikandan");
    display(s1);
    cout<<s1.get_name()<<endl;
    Student new_s1 {s1};
    new_s1.set_name("Vijaya Arjunan");
    cout<<new_s1.get_name();
    return 0;
}