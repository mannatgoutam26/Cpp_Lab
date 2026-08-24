#include<iostream>
int main()
{
    using namespace std;
    int n;
    cout<<"Enter a number :\n";
    cin>>n;
    if (n==0 || n==1)
        cout<<"the factorial of "<<n<<" is 1."<<endl;
    if (n<0)
        cout<<"Factorial of negative number is not defined."<<endl;
    else
    {
        int fact=1;
        for(int i=1;i<=n;i++)
            fact*=i;
        cout<<"the factorial of "<<n<<" is "<<fact<<"."<<endl;
    }

return 0;
}