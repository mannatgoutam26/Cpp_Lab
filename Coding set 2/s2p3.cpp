#include<iostream>
using namespace std;
class number{
    int num;

    public:
    void input(){
        cout << "Enter number : ";
        cin >> num;
    }
    int isEven(){
        return num%2==0;
    }
    void display(){
        if(isEven()){
            cout << "Even";
        }
        else{
            cout << "Odd";
        }
    }
};

int main(){
    number n1;
    n1.input();
    n1.isEven();
    n1.display();

    return 0;
}