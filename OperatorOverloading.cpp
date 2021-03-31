#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

//Class Specification

class Student{
    private:
        int age;
        string name;
        int *roll_ptr;
    
    public:
        Student(int stu_age = 0, string stu_name = "", int roll = 0);
        ~Student();
        Student(const Student &src); //Copy constructor
        Student &operator=(const Student &rhs); //copy overloading
        // Student &operator=(Student &&rhs); //move overloading
        string get_name();
        void set_roll(int roll_num);
        int get_age();
        int get_roll();
};

//Class Implementation

Student::Student(const Student &src): name{src.name}, age{src.age} {
    cout<<"Copy Constructor"<<endl;
    roll_ptr = new int;
    *roll_ptr = *src.roll_ptr;  
}

Student &Student::operator=(const Student &rhs){
    cout<<"Operator overloading called"<<endl;
    if(this == &rhs){
        return *this;
    }
    delete this->roll_ptr;
    
    this->roll_ptr = new int;
    *(this->roll_ptr) = *(rhs.roll_ptr);
    this->age = rhs.age;
    this->name = rhs.name;
    cout<<this->name<<endl;
    cout<<this->roll_ptr<<endl;
    cout<<this->age<<endl;
    return *this;
}

Student::Student(int stu_age, string stu_name, int roll): age{stu_age}, name{stu_name} {
    roll_ptr = new int;
    *roll_ptr = roll;
}

Student::~Student() {
    delete roll_ptr;
    cout<<"Destructor Called"<<endl;
}

string Student::get_name(){
    return name;
}

int Student::get_age(){
    return age;
}

int Student::get_roll(){
    return *roll_ptr;
}

void Student::set_roll(int roll_num){
    *(this->roll_ptr) = roll_num;
}

int main(){
    Student s1{21, "Manikandan Arjunan", 10};
    Student s3{s1};
    Student s2;
    s2 = s1;
    s2.set_roll(1000);
    cout<<"::::::"<<s2.get_roll()<<endl;
    cout<<"::::::"<<s1.get_roll()<<endl;
    cout<<"::::::"<<s2.get_age()<<endl;
    cout<<"::::::"<<s2.get_name()<<endl;
    return 0;
}