#include <bits/stdc++.h>
using namespace std;
class Meter {
    private:
    float length;
    public:
    Meter() {
        length = 0.0;
    }
    Meter(float len) {
        length = len/100;
    }
    void display() {
        cout<<"Length is --> "<<length<<endl;
    }
};
int main() {
    cout<<"20BCS035\nMohammad Aatir Nadim"<<endl;
    float len1;
    cout<<"Give the length"<<endl;
    cin>>len1;
    Meter m1;
    m1 = len1;
    m1.display();
    return 0;
}