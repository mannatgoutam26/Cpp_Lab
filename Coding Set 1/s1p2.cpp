#include<iostream>
int main()
{
    using namespace std;
    int number,i;
    cout<<"Enter a number :\n";
    cin>>number;
    for (int i=2;i<=number;i++)
    {
        if(number%i==0){
        cout<<"number is not prime";
        break;
        }
            else
                cout<<"number is prime";
    }

    
return 0;   
}
    


