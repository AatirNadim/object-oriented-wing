#include <bits/stdc++.h>
using namespace std;
class Meter {
    private:
    float meter;
    public:
    Meter() {
        meter = 0.0;
    }
    void setVal() {
        cout<<"Give the value in meters"<<endl;
        cin>>meter;
    }
    void getVal() {
        cout<<"Value from the object --> "<<meter<<endl;
    }
    // float operator (float) () {
    //     return meter*100;
    // }
    operator float() {
        return meter*100;
    }
};
int main() {
    cout<<"20BCS035\nMohammad Aatir Nadim"<<endl;
    Meter m1;
    m1.setVal();
    m1.getVal();
    float len1;
    len1 = float(m1);
    cout<<len1<<"\n";
    return 0;
}