#include <bits/stdc++.h>
using namespace std;
class Str {
    private:
    string s;
    public:
    Str() {
        s = "";
    }
    Str(string s) {
        this->s = s;
    }
    void display() {
        cout<<"value of string is --> "<<s<<endl;
    }
};
int main() {
    cout<<"20BCS035\nMohammad Aatir Nadim"<<endl;
    string s1;
    cout<<"Give the string"<<endl;
    cin>>s1;
    Str sobj;
    sobj = s1;
    sobj.display();
    return 0;
}