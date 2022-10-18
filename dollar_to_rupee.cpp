#include <bits/stdc++.h>
using namespace std;
class Dollar {
    double val;
    public:
    Dollar () {val= 0.0;}
    void setVal() {
        cout<<"Give the value in dollars"<<endl;
        cin>>val;
    }
    double getVal() {
        return val;
    }

};
class Rupee {
    double val;
    public:
    Rupee() {val= 0.0;}
    void setVal() {
        cout<<"Give the value in rupees"<<endl;
        cin>>val;
    }
    double getVal() {
        return val;
    }
    double operator = (Dollar & obj) {
        val = (obj.getVal())*80;
    }
};
int main() {
    cout<<"20BCS035\nMohammad Aatir Nadim"<<endl;
    Rupee r2; Dollar d2;
    d2.setVal();
    r2 = d2;
    cout<<"Value in rupees is --> "<<r2.getVal()<<endl;
    return 0;
}