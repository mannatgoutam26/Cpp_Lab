#include<iostream>
int main()
{
    using namespace std;
    int num,remainder,reverse=0,orgnum;
    cout<<"Enter a number :\n";
    cin>>num;
    orgnum=num;
    while(num!=0){
        remainder = num%10;
        reverse = reverse*10 + remainder;
        num /= 10;
    }
        if(reverse == orgnum)
            cout<<"number is palindrome";
            else
                cout<<"number is not palindrome";
    
return 0;
}