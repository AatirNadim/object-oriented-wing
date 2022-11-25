#include <bits/stdc++.h>
using namespace std;
class Person {
    string name, address;
    public:
    Person(string name, string address) {
        this->name = name;
        this->address = address;
    }
    void print() {
        cout<<"Name --> "<<name<<"\n";
        cout<<"Address --> "<<address<<endl;
    }
};
class Staff : public Person {
    int salary;
    public:
    Staff(string name, string address, int salary) : Person(name, address) {
        this->salary = salary;
    }
    void print() {
        Person :: print();
        cout<<"Salary --> "<<salary<<"\n";
    }
};
class Student : public Person {
    double perc;
    public:
    Student (string name, string address, double perc) : Person(name, address) {
        this->perc = perc;
    }
    void print() {
        Person :: print();
        cout<<"Percentage --> "<<perc<<"\n";
    }
};
int main() {
    string name, address;
    int salary; double perc;
    cout<<"Enter the name of the student"<<endl;
    getline(cin, name);
    // getchar();
    cout<<"Enter the address of the student"<<endl;
    getline(cin, address); 
    cout<<"Enter the percentage secured by the student"<<endl;
    cin>>perc; getchar();
    Student s1(name, address, perc);

    cout<<"\nEnter the name of the staff"<<endl;
    getline(cin, name); 
    cout<<"Enter the address of the staff"<<endl;
    getline(cin, address);
    cout<<"Enter the salary of the staff"<<endl;
    cin>>salary;
    Staff s2(name, address, salary);
    cout<<"\n";
    s1.print();
    cout<<"\n\n";
    s2.print();
    return 0;
}