#include<iostream>
using namespace std;
class Student{
    string name;
    int RollNo;
    public:
    void displaydata(){
        cout<<"Name of student : " << name << endl;
        cout << "Roll no of student : " << RollNo << endl;
    }
    public:
    void setdata(string n,int r){
        name = n;
        RollNo = r;
    }
};
int main(){
    Student s1,s2;
    string s1_name,s2_name;
    int s1_roll,s2_roll;

    cout << "Displaying student details\n";

    cout << "student 1 details : \n";
    cin >> s1_name >> s1_roll;
    s1.setdata(s1_name,s1_roll);
    s1.displaydata();
    cout << "student 2 details : \n";
    cin >> s2_name >> s2_roll;
    s2.setdata(s2_name,s2_roll);
    s2.displaydata();

    return 0;
}