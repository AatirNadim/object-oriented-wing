#include <bits/stdc++.h>
using namespace std;
class Dollar;
class Rupee {
    double val;
    public:
    Rupee() {val = 0.0;}
    void setVal() {
        cout<<"Give the value in rupees"<<endl;
        cin>>val;
    }
    double getVal() {return val;}
    operator Dollar();
};
class Dollar {
    double val;
    public:
    Dollar () {val=0.0;}
    void setVal(){
        cout<<"Give the value in dollars"<<endl;
        cin>>val;
    }
    void setVal(double val) {this->val = val;}
    double getVal() {return val;}
};
Rupee :: operator Dollar() {
    Dollar d;
    d.setVal(this->getVal()/80);
    return d;
}
int main() {
    Rupee r1; Dollar d1;
    r1.setVal();
    d1 = r1;
    cout<<"Value in dollars --> "<<d1.getVal()<<endl;
    return 0;
}