#include<iostream>
using namespace std;
class Employee{
    string employeename;
    int basicsalary;

    public:
    Employee(){
        cout << "Enter name of employee : ";
        cin >> employeename;
        cout << endl;
        cout << "Basic salary : ";
        cin >> basicsalary;
    }
    public:
    void hra(){
        int HRA = basicsalary*0.2;
        cout << "HRA = " << HRA << endl;
    }
    public:
    void da(){
        int DA = basicsalary*0.1;
        cout << "DA = " << DA << endl;
    }
    public:
    void gross(){
        int gross = basicsalary + (basicsalary*0.2) + (basicsalary*0.1);
        cout << "Gross salary = " << gross << endl;
    }
};

int main(){
    Employee e1;
    e1.hra();
    e1.da();
    e1.gross();
    return 0;
}