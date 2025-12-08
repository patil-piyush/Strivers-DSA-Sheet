#include<iostream>
using namespace std;

class Teacher{
    public:
    string name;
    string dept;
    double salary;

    void changeDept(string newDept){
        dept = newDept;
    }
};

int main(){
    
    Teacher t1;
    t1.name = "Alice";
    t1.dept = "Mathematics";
    t1.salary = 50000;


    return 0;
}