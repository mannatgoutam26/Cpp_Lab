#include<iostream>
using namespace std;
class BankAccount{
    public:
    int acc_num,balance;

void transfer(BankAccount &b1,BankAccount &b2,int amount){

    if(b1.balance >= amount){
        b1.balance -= amount;
        b2.balance += amount;
        cout << "balance left in b1 is : " << b1.balance << " and new balance in b2 is : " << b2.balance <<endl;
    }
}
};

int main(){
    BankAccount b1,b2,b3;
    b1.acc_num = 123;
    b1.balance = 1000;
    b2.acc_num = 321;
    b2.balance = 1;
    b3.transfer(b1,b2,500);
    cout << "Current balance : \n";
    cout << "balance in b1 : " << b1.balance << endl;
    cout << "balance in b2 : " << b2.balance;
return 0;
}