#include<iostream>
using namespace std;
class BankAccount{
    int acc_no;
    string name;
    static int total;

public:
void input(){
    cout << "Account number : ";
    cin >> acc_no;
    cout << "Enter name : ";
    cin >> name;
}

BankAccount(){
    total++;
}

static void display(){
    cout << "total accounts created : " << total;
}

};
int BankAccount :: total=0;

int main(){
    BankAccount b1,b2,b3,b4;
    b1.input();
    b2.input();
    b3.input();
    b4.input();

    BankAccount :: display();

    return 0;
}