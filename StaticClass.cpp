#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Student
{
private:
    int roll_num;
    int age;
    static int num_of_students;

public:
    static int get_num_of_students();
    Student(int roll = 0, int stu_age = 0);
    Student(const Student &src);
    ~Student();
    int get_age();
    int get_roll();
};

int Student::num_of_students {0}; //Initialization otherwise will  cause reference error

Student::Student(int roll, int stu_age) : roll_num{roll}, age{stu_age} {
    num_of_students++;
}

Student::~Student(){
    num_of_students--;
}

Student::Student(const Student &src) : Student{src.roll_num, src.age} {
    cout<<"COPYING"<<endl;
}

Student::get_num_of_students() {
    return num_of_students;
}

Student::get_age()
{
    return age;
}

Student::get_roll()
{
    return roll_num;
}

void display_active_students(){
    cout<<"ACTIVE STUDENTS: "<<Student::get_num_of_students()<<endl;
}

int main()
{
    Student s;
    Student s1{21};
    Student s3{s1};
    Student s2{23, 23};
    display_active_students();
    cout << s.get_roll() << endl;
    cout << s.get_age() << endl;
    cout << s1.get_roll() << endl;
    cout << s1.get_age() << endl;
    cout << s2.get_roll() << endl;
    cout << s2.get_age() << endl;
    return 0;
}