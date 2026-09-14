#include<iostream>
using namespace std;
class student{
    public:
    int Roll_No;
    int Marks;
};

void findTop(student s1, student s2){
    student check;
    if(s1.Marks > s2.Marks)
        cout << "student 1 scored higher";

    if(s1.Marks < s2.Marks)
        cout << "Student 2 scored higher";

}

int main() {
    student s1,s2;
    s1.Roll_No;
    s2.Roll_No;
    s1.Marks;
    s2.Marks;

    cout << "Roll no : ";
    cin >> s1.Roll_No;
    cout << "Marks : ";
    cin >> s1.Marks;
    cout << "\n";
    cout << "Roll no : ";
    cin >> s2.Roll_No;
    cout << "Marks : ";
    cin >> s2.Marks;

    findTop(s1,s2);

return 0;
}