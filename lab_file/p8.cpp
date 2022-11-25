#include <bits/stdc++.h>
using namespace std;
class Base {
    public:
    Base () {
        cout<<"Base constructor"<<endl;
    }
    virtual ~Base() {
        cout<<"Base virtual destructor"<<endl;
    }
    virtual void pureVirtualFunc() = 0;
};
class Derived : public Base {
    public:
    Derived () {
        cout<<"Derived constructor called"<<endl;
    }
    virtual ~Derived () {
        cout<<"Derived virtual destructor"<<endl;
    }
    void pureVirtualFunc() override {
        cout<<"Pure virtual function in the derived class"<<endl;
    }
    friend ostream& operator <<(ostream&, const Derived&);
};
ostream& operator <<(ostream& os, const Derived& d1) {
    os<<"Overloading through friend function"<<endl;
    return os;
}
int main() {
    Base * b1 = new Derived();
    b1->pureVirtualFunc();
    Derived *d1 = new Derived();
    d1->pureVirtualFunc();

    Derived * d2 = new Derived();
    Base* b2 = d2;
    delete b2;

    Derived d3;
    cout<<d3<<endl;
    return 0;
}