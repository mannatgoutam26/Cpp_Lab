#include<iostream>
using namespace std;

class book{
    string title;
    string author;
    public:
    book(string t, string a){
        cout << "title : " << t << endl;

        cout << "Author : " << a << endl;
    }
};
int main(){
    string ttl,ath;
    cin >> ttl >> ath;
    book b1(ttl,ath);

    return 0;
}