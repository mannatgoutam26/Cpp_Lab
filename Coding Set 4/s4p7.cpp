#include<iostream>
using namespace std;

class Numbers{
private:
    int num1,num2;

public:
    void input(){
        cout << "Enter number 1 : ";
        cin >> num1;
        cout << "Enter number 2 : ";
        cin >> num2;
    }

    friend void large(Numbers n);
};

void large(Numbers n){
    if(n.num1 > n.num2)
        cout << n.num1 << " is larger.";
    else
        cout << n.num2 << " is larger.";
}

int main(){
    Numbers num;
    num.input();
    large(num);

    return 0;
}