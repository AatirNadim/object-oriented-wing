#include <bits/stdc++.h>
using namespace std;
//subscript
class Account {
    public:
    vector<int> uid;
    vector<string> name; int n;
    Account(int count) {
        n = count;
        uid = vector<int> (count, -1);
        name = vector<string> (count, "");
    }
    void input() {
        cout<<"Give the uids and names"<<endl;
        for(int i=0;i<n;i++) {
            cin>>uid[i];
            cin>>name[i];
        }
    }
    string operator[](int val) {
        for(int i=0;i<n;i++) {
            if(uid[i] == val) return name[i];
        }
        return "no name found with the given uid";
    }
    int operator[](string val) {
        for(int i=0;i<n;i++) {
            if(name[i] == val) return uid[i];
        }
        return -1;
    }
};

int main() {
    cout<<"Give the number of entries"<<endl;
    int n;cin>>n;
    Account obj(n);
    obj.input();
    cout<<"Enter the id to search the name"<<endl;
    int id;cin>>id;
    cout<<obj[id]<<endl;
    cout<<"Enter the name to search the id"<<endl;
    string temp;cin>>temp;
    cout<<obj[temp]<<endl;
    return 0;
}

