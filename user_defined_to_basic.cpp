#include <bits/stdc++.h>
using namespace std;
class Str {
    private:
    string s;
    public:
    Str() {
        s = "";
    }
    void setVal() {
        cout<<"Give the value of string"<<endl;
        cin>>s;
    }
    void getVal() {
        cout<<"Value from the object --> "<<s<<endl;
    }
    // float operator (float) () {
    //     return meter*100;
    // }
    operator string() {
        return s;
    }
};
int main() {
    cout<<"20BCS035\nMohammad Aatir Nadim"<<endl;
    Str s1;
    s1.setVal();
    s1.getVal();
    string stemp;
    stemp = string(s1);
    cout<<"Value in basic type --> "<<stemp<<"\n";
    return 0;
}