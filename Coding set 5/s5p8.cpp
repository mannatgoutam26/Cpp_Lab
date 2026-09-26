#include<iostream>
using namespace std;
template<class T>
class array{
    public:
    T arr[5];

    array(){
        for(int i = 0;i<5;i++){
            cin >> arr[i];
        }
    }

    void display(){
        for(int i=0;i<5;i++)
            cout << "element : " << arr[i] << endl;
    }

    T largest(){
        T max=arr[0];
        for(int i=1;i<5;i++){
            if(arr[i]>max){
                max = arr[i];
            }
        }
        cout << max << " is maximum." << endl;
        return max;
    }

    T smallest(){
        T min=arr[0];
        for(int i=1;i<5;i++){
            if(arr[i]<min)
                min=arr[i];
        }
        cout << min << " is minimum." << endl;
        return min;
    }
};

int main() {
    array <int> num;
    num.display();
    num.largest();
    num.smallest();
}