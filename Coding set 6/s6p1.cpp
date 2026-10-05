// Division by Zero Exception //
#include<iostream>
using namespace std;

int main() {
    int n1, n2;

    cout<<" Enter Num 1: ";
    cin >> n1;
    cout<<" Enter Num 2: ";
    cin >> n2;

    try{
        if (n2 == 0) 
        throw "Error: Division by zero is not allowed.";

        else{
        cout<<n1<<" / "<<2<<" : "<< n1/n2 << endl;
        }
    }
    catch(const char *n) {
        cout << n << endl;
    }
    
    return 0;
}