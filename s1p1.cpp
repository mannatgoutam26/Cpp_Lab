#include<iostream>
int main()
{
    using namespace std;
    int a,b,c;
    cout<<"Enter three numbers :\n";
    cin>>a>>b>>c;
    cout<<"The numbers are: "<<a<<" "<<b<<" "<<c<<endl;
    if (a>b && a>c)
    {
        cout<<a<<" is the largest number."<<endl;
    }
    else if (b>a && b>c)
    {
        cout<<b<<" is the largest number."<<endl;
    }
    else
    {
        cout<<c<<" is the largest number."<<endl;
    }
return 0;
}