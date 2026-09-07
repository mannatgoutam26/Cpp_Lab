#include<iostream>
using namespace std;

class text{
    string str;

    public:
    text(){
        cout << "Enter string : ";
        getline(cin,str);
    }
    public:
    int len(){
            int i=0;
            while(str[i]!='\0'){
            i++;


            
            }
                cout << "Length of string is : " << i;
            
        
    }
};


int main(){
    text t1;
    t1.len();

    return 0;
}