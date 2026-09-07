#include<iostream>
using namespace std;
int main(){
    int check,repeated,count=0;
    int arr[10]={1,2,5,3,6,4,3,7,3,7};
    cout << "Enter the number you want to check : ";
    cin >> check;

    for(int i=0;i<10;i++)
        if(arr[i]==check){
            count += 1;
        }
        cout << check << " has occured " << count << " times in the array.";
return 0;
}