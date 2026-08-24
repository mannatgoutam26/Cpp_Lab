#include<iostream>
int main()
{
    using namespace std;
    int n,reverse=0,remainder;
    cout<<"Enter a number :\n";
    cin>>n;
    while(n!=0){
        remainder = n%10;
        reverse = reverse*10 + remainder;
        n /= 10;
        }
    cout<<"the reversed number is "<<reverse;
return 0;
}
