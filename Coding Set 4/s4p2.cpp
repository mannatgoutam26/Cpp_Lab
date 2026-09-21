#include<iostream>
using namespace std;

class maximum{
public:
    void max(int a,int b){
        if(a>b)
            cout<< a << " is greater" << endl;
        else
            cout<< b << " is greater" << endl;
    }

    void max(int a,int b,int c){
        if(a>b && a>c)
            cout<< a << " is greater" << endl;
        else if(b>a && b>c)
            cout<< b << " is greater" << endl;
        else
            cout<< c << " is greater" << endl;
    }
    void max(double a,double b){
        if(a>b)
            cout<< a << " is greater" << endl;
        else
            cout << b << " is greater" << endl;
    }

};

int main(){
    maximum num;
    num.max(10,20);
    num.max(4,2,6);
    num.max(4.6,3.2);

    return 0;
}