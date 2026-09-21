#include<iostream>
using namespace std;
class area{

public:
void calculate(int side){
    int square_area = side*side;
    cout << "area of square is : " << square_area << endl;
}

void calculate(int l,int b){
    int area_rectangle = l*b;
    cout << "area of rectangle is : " << area_rectangle << endl;
}

void calculate(double r){
    double area_circle = 3.14*r*r;
    cout << "area of circle is : " << area_circle << endl;
}

};

int main(){
    area dim;

    dim.calculate(5);
    dim.calculate(4,6);
    dim.calculate(3.5);

    return 0;
}