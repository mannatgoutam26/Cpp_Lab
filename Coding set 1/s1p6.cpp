#include<iostream>
int main(){
    using namespace std;
    int num,sum=0,remainder;
    cout<<"enter a number : ";
    cin>>num;
    while (num!=0){
        remainder = num%10;
        sum += remainder;
        num /= 10;
    }
    cout<<"the sum of numbers is "<<sum;
    return 0;




}