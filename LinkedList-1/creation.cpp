#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float marks;
    Student(string name,int rno){
        this->name=name;
        this->rno=rno;
    }
};
void change(Student *s){
    s->name="Harsh";
}
int  main(){
    Student* s = new Student("Raghav",76);
    (*s).marks=92.6;
    cout<<s->marks<<endl;
    cout<<s->name<<endl;
    change(s);
    cout<<s->name<<endl;

}