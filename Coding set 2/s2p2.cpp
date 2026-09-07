#include<iostream>
using namespace std;
class rectangle{
    int length,breadth;

    public:
    void input(){
        cout << "Enter length : ";
        cin >> length;
        cout << "Enter Breadth : ";
        cin >> breadth;
    }
    public:
    int calculate(){
        return length*breadth;
    }
    public:
    int display(){
        cout << "Area of rectangle is : "<< length*breadth;
    }
};
int main(){
    rectangle r1;
    int r1_l,r1_b;
    r1.input();

    r1.display();
    r1.calculate();

    return 0;
}