#include<iostream>
using namespace std;
class complex{
    public:
    int real,imaginary;

public:
void addition(complex n1,complex n2){
    real = n1.real + n2.real;
    imaginary = n1.imaginary + n2.imaginary;

    cout << "addition of complex numbers is : " << real << " + " << imaginary << "i" << endl;
}

void multiplication(complex n1, complex n2){
    real = n1.real*n2.real + n1.imaginary*-(n2.imaginary);
    imaginary = n1.real*n2.imaginary + n1.imaginary*n2.real;
    cout << "Multiplication of complex numbers is : " << real <<" + " << imaginary <<"i" << endl;
}
};

void subtraction(complex n1, complex n2){
    complex n5;
    n5.real = n1.real - n2.real;
    n5.imaginary = n1.imaginary - n2.imaginary;

    if(n5.imaginary <0)
        cout << "Difference of complex numbers is : " << n5.real << " " << n5.imaginary << "i";
    if(n5.imaginary >= 0)
        cout << "Difference of complex numbers is : " << n5.real << " + " << n5.imaginary << "i";
}

int main() {
    complex n1,n2,n3,n4;
    n1.real = 3;
    n1.imaginary = 5;
    n2.real = 4;
    n2.imaginary = 6;

    n3.addition(n1,n2);
    n4.multiplication(n1,n2);
    subtraction(n1,n2);
}