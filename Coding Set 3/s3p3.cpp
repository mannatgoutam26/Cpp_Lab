#include<iostream>
using namespace std;
class Distance {
    public:
    int feet;
    int inches;

public:
int total(Distance d1,Distance d2){
    feet = d1.feet + d2.feet;
    inches = d1.inches + d2.inches;

    if(inches >12){
        feet += 1;
        inches -= 12;
        cout << "The total length is " << feet <<" feet" << inches << " inches";
    }
    else
        cout << "Total length is " << feet << " feet" << inches <<" inches";

}
};

int main(){

    Distance d1,d2,d3;

    d1.feet = 6;
    d1.inches = 5;
    d2.feet = 6;
    d2.inches = 8;

    d3.total(d1,d2);

return 0;

}