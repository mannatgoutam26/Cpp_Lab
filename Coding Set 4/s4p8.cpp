#include<iostream>
using namespace std;

class A;
class B;

class A{
    private:
    int a;

    friend void sum(A n1, B n2);
    public:
    void input(){
        cout << "Enter a : ";
        cin >> a;
    }
};

class B{
    private:
    int b;
    friend void sum(A n1,B n2);
    public:
    void input(){
        cout << "Enter b : ";
        cin >> b;
    }
};

void sum(A n1, B n2){
    int sum = n1.a + n2.b;
    cout << "The total is : " << sum;
}

int main(){
    A n1;
    B n2;

    n1.input();
    n2.input();
    sum(n1,n2);

    return 0;
}