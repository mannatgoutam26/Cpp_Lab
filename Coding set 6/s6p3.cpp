// Bank Account Withdrawal//
#include<iostream>
using namespace std;

class BankAccount {
    public: 
    int bal;

    void input() {
        cout<<" Enter the balance: ";
        cin>>bal;
    }

    void withdraw() {
        int amt;
        cout<<" Enter the Withdraw Amount: ";
        cin>>amt;
       
        try{
            if(amt > bal) 
            throw "Error: Insufficient Balance.";

            else {
            bal = bal - amt;
            cout<<" Final Balance: "<< bal << endl;
            }
        }
        catch( const char *a) {
            cout << a << endl;
        }
    }
};

int main() {
    BankAccount b;
    b.input();
    b.withdraw();
    
    return 0;
}