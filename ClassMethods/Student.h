#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

using std::string;

class Student {
    private:
        string stu_name;
        int roll_num;
        int stu_age;
    
    public:
        void set_name(string name);
        void set_roll_name(int roll);
        void set_age(int age);
        int get_age();
        int get_roll_num();
        string get_name();
};

#endif