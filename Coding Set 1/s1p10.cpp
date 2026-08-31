#include<iostream>
using namespace std;
int main(){
    int check;
    int arr[5]={1,5,3,2,5};
    cout<<"Enter number you want to find : ";
    cin>>check;
    for(int i=0;i<5;i++){
        if(arr[i]==check){
            cout<<check <<" is found in the array"<<endl;
    
            cout << "The index of " << check << " is " << i;
        }
        else{
            cout<<"Number not found in the array";
            break;
        }
    }
    
    
return 0;
}