#include<iostream>
using namespace std;
class ArraySum{
    int arr[10];

    public:
    ArraySum(){
        for(int i=0;i<10;i++){
            cout << "arr["<<i<<"] :";
            cin >> arr[i];
        }
    }
    public:
    int findSum(){
        int sum=0;
        for(int i=0;i<10;i++){
            sum += arr[i];
        }
        cout << "Sum of array elements is : " << sum;
    }
};

int main (){
    ArraySum sum1;
    sum1.findSum();

    return 0;
}