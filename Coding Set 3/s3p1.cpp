#include<iostream>
using namespace std;
class Number{
    public:
    int number;
};

int add(Number n1,Number n2){
    Number n3;
    n3.number = n1.number + n2.number;
    cout << "The sum of numbers is : " << n3.number;
}

int main(){
    Number n1,n2;
    n1.number;
    n2.number;

    cout << "Number 1 : ";
    cin >> n1.number;
    cout << "Number 2 : ";
    cin >> n2.number;

    add(n1,n2);

    return 0;
}