#include<iostream>
using namespace std;
class rectangle{
    public:
    int length,width,area;

void check(rectangle r1,rectangle r2){
    if(r1.area > r2.area){
        cout << "Rectangle 1 is larger"<<endl;
    }

    else if(r1.area < r2.area){
        cout<< "Rectable 2 is larger" << endl;}

    else
        cout<<"both are equal";
}
};

int newrect(rectangle r1, rectangle r2){
    rectangle r4;
    r4.length = r1.length + r2.length;
    r4.width = r1.width + r2.width;

    cout << "New rectangle has length : " << r4.length << " width : " << r4.width << " and are of new rectangle is : " << r4.length*r4.width;
}

int main(){
    rectangle r1,r2,r3;

    r1.length = 3;
    r2.length = 4;
    r1.width = 6;
    r2.width = 3;
    r1.area = r1.length*r1.width;
    r2.area = r2.length*r2.width;

    r3.check(r1,r2);

    newrect(r1,r2);

}