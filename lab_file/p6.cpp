#include <bits/stdc++.h>
using namespace std;
class Complex {
    public:
    double r, i;
    Complex(double real, double imag) {
        r = real, i = imag;
    }
    void operator += (Complex& c1) {
        r += c1.r;
        i += c1.i;
    }
    void operator -= (Complex &c1) {
        r -= c1.r;
        i -= c1.i;
    }
    void operator *= (Complex & c1) {
        r = (r*c1.r - i*c1.i);
        i = (r*c1.i + i*c1.r);
    }
    void operator /= (Complex& c1) {
        double div = (c1.r*c1.r + c1.i*c1.i);
        r = (r*c1.r + i*c1.i)/div;
        i = (i*c1.r - r*c1.i)/div;
    }
    friend ostream& operator <<(ostream&, Complex&);
};
ostream& operator <<(ostream& out, Complex& c1) {
    out<<c1.r<<"+"<<c1.i<<"i\n";
    return out;
}
int main() {
    cout<<"20BCS035\nMohammad Aatir Nadim\n";
    Complex c1(2, 3), c2(4, 5);
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    c1 += c2;
    cout << endl << "c1 += c2 = " << c1 << endl;
    c1 -= c2;
    cout << endl << "c1 -= c2 = " << c1 << endl;
    c1 *= c2;
    cout << endl << "c1 *= c2 = " << c1 << endl;
    c1 /= c2;
    cout << endl << "c1 /= c2 = " << c1 << endl;

    return 0;
}