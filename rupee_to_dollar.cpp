#include <bits/stdc++.h>
using namespace std;
class Rupee {
    double val;
    public :
    Rupee() {val = 0.0;} 
    void setVal() {
        cout<<"Give the value in rupees"<<endl;
        cin>>val;
    }
    double getVal() {
        return val;
    }
    // double operator
};

class Dollar {
    double val;
    public:
    Dollar () {val = 0.0;}
    void setVal() {
        cout<<"Give the amount in dollar"<<endl;
        cin>>val;
    }
    double getVal() {
        return val;
    }
    double operator = (Rupee& obj) {
        val = (obj.getVal())/80;
    }
};
int main() {
    cout<<"20BCS035\nMohammad Aatir Nadim"<<endl;
    Dollar d1; Rupee r1;
    r1.setVal();
    d1 = r1;
    cout<<"Value in dollars --> "<<d1.getVal()<<endl;
    return 0;
}