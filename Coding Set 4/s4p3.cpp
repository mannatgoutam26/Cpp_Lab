#include<iostream>
using namespace std;

class complex{
public:
    int real,img;

public:

complex(int r=0,int i=0){
    real = r;
    img = i;
}

complex operator + (complex c1){
    complex temp;
    temp.real = this->real + c1.real;
    temp.img = this->img + c1.img;

    return temp;
}

void display () {
    cout << "final complex number is : " << real << " + " << img << "i" ;
}

};

int main(){

    complex c1(3,2);
    complex c2(2,5);
    complex c3 = c1+c2;

    c3.display();
    return 0;
}