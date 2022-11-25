#include <bits/stdc++.h>
using namespace std;
class Time {
    public:
    int hrs, min;
    Time(int hrs, int min) {
        this->hrs = hrs;
        this->min = min;
    }
    void print() {
        cout<<hrs<<" : "<<min<<"\n";
    }
};

Time addTime(Time t1, Time t2) {
    int val = t1.hrs*60 + t1.min + t2.hrs*60 + t2.min;
    val %=(24*60);
    return Time(val/60, val%60);
}
int main() {
    cout<<"20BCS035\nMohammad Aatir Nadim\n";
    cout<<"24 hour format\n";
    cout<<"Give time 1"<<endl;
    int hrs, min;
    cin>>hrs>>min;
    Time t1(hrs, min);
    cout<<"Give time 2"<<endl;
    cin>>hrs>>min;
    Time t2(hrs, min);
    Time t3 = addTime(t1, t2);
    cout<<"Total time --> ";t3.print();
    return 0;
}