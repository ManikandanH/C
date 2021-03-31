#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Student{
    private:
        int age;
        string name;

    public: // if none of the constructors are provided then C++ wil provide the default no parameter constructor.
    //if any constructor is provided then complier will no longer generate the default no param constuctor.
        Student(){
            age = 0;
            name = "";
        }

        Student(string stu_name, int stu_age){
            name = stu_name;
            age = stu_age;
        }

        string get_name(){
            return name;
        }

        int get_age(){
            return age;
        }
};

int main(){
    Student s1;
    Student s2 {"Manikandan", 23};
    Student *s3 = new Student("Manikandan Arjunan", 23);
    Student *s4 = new Student;
    cout<<"S1 NAME: "<<s1.get_name()<<endl;
    cout<<"S1 AGE: "<<s1.get_age()<<endl;
    cout<<"S2 NAME: "<<s2.get_name()<<endl;
    cout<<"S2 AGE: "<<s2.get_age()<<endl;
    cout<<"S3 NAME: "<<s3->get_name()<<endl;
    cout<<"S3 AGE: "<<s3->get_age()<<endl;
    cout<<"S4 NAME: "<<(*s4).get_name()<<endl;
    cout<<"S4 AGE: "<<(*s4).get_age()<<endl;
    return 0;
}