#include <bits/stdc++.h>
using namespace std;
class Media {
    string title, publication;
    public:
    Media() {
        title = "", publication = "";
    }
    virtual void read() {
        cout<<"Enter name of the media"<<endl;
        cin>>title;
        cout<<"Enter publication of the media"<<endl;
        cin>>publication;
    }
    virtual void show() {
        cout<<"Title --> "<<title<<"\n";
        cout<<"Publication --> "<<publication<<"\n";
    }
};
class Book : public Media {
    int no_of_pages;
    public:
    Book () {
        no_of_pages = 0;
    }
    void read () override;
    void show() override;
};
class Tape : public Media {
    int time;
    public:
    Tape () {
        time = 0;
    }
    void read() override;
    void show() override;
};
void Book :: read() {
    Media :: read();
    cout<<"Enter the number of pages"<<endl;
    cin>>no_of_pages;
}
void Book :: show() {
    Media :: show();
    cout<<"Number of pages --> "<<no_of_pages<<"\n\n";
}
void Tape :: read() {
    Media :: read();
    cout<<"Enter the duration of the tape in seconds"<<endl;
    cin>>time;
}
void Tape :: show() {
    Media :: show();
    cout<<"Time --> "<<time<<"s\n\n";
}
int main () {
    cout<<"20BCS035\nMohammad Aatir Nadim\n";
    Media *m1 = new Book(), *m2 = new Tape();
    m1->read(); m1->show();
    m2->read(), m2->show();
}