#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
public: //properties and methods can be accessed by the object instances
    string name;
    int rollnum;
    int score;

    int get_score(){
        return score;
    }

    void set_score(int scr){
        score = scr;
    }
};

int main(){
    Student s1;
    Student *s2 = new Student;
    s1.name = "Manikandan Arjunan";
    s1.set_score(12);
    cout<<s1.get_score();
    cout<<s2->get_score()<<endl;
    return 0;
}