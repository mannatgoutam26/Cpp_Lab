#include<iostream>
using namespace std;
int main(){
    int max = 0,second_max = -1,new_max;
    int arr[5] = {7,1,4,3,5};
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            second_max = max;
            max = arr[i];

        }
        else if(arr[i] > second_max && arr[i] != max){
        second_max = arr[i];
        }
    }
        cout << "largest number is : " << max << endl;
        cout << "second largest is : " << second_max;
    

return 0;
}