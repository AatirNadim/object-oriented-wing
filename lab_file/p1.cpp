#include <bits/stdc++.h>
using namespace std;
class Student {
    string name;
    int enrollId;
    double marks;
    public:
    void readData() {
        cout<<"Give the name of the student"<<endl;
        cin>>name;
        cout<<"Give the enrollment id of the student"<<endl;
        cin>>enrollId;
        cout<<"Give the marks of the student"<<endl;
        cin>>marks;
        cout<<"\n";
    }
    void printData() {
        cout<<"Name --> "<<name<<endl;
        cout<<"Enrollment ID --> "<<enrollId<<"\n";
        cout<<"Marks --> "<<marks<<endl;
    }
};
int main() {
    cout<<"20BCS035\nMohammad Aatir Nadim\n";
    Student s[3];
    for(int i=0;i<3;i++) {
        cout<<"Student "<<(i+1)<<"\n";
        s[i].readData();
    }
    for(int i=0;i<3;i++) {
        cout<<"Details of student "<<(i+1)<<"\n";
        s[i].printData();
    }
    return 0;   
}