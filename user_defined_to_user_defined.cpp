#include <bits/stdc++.h>
// #define PI 3.14159

using namespace std;
const float PI = 3.14159;
class Radian {
    // private:
    float rad;
    public:
    Radian() {
        rad = 0.0;
    }
    void setVal() {
        cout<<"Give the value in radian"<<endl;
        cin>>rad;
    }
    void getVal() {
        cout<<"The value in radian --> "<<rad<<endl;
    }
    void setVal(float val) {
        rad = val;
    }
    // operator Degree(){
    //     Degree d;
    //     d.setVal(rad*180/PI);
    //     return d;
    // }
};
class Degree{
    // private:
    float deg;
    public:
    Degree() {deg = 0.0;}
    void setVal() {
        cout<<"Give the value in degree"<<endl;
        cin>>deg;
    }
    void getVal() {
        cout<<"Value in degree --> "<<deg<<endl;
    }
    void setVal(float val) {
        deg = val;
    }
    operator Radian(){
        Radian r;
        r.setVal(deg*PI/180);
        return r;
    }
};
int main() {
    cout<<"20BCS035\nMohammad Aatir Nadim"<<endl;
    Radian r1, r2; Degree d1, d2;
    r1.setVal();
    r1.getVal();
    // d1= r1;
    // d1.getVal();
    d2.setVal();
    d2.getVal();
    r2 = d2;
    r2.getVal();
    return 0;
}