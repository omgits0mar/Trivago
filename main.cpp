#include "Trivago.h"
#include <bits/stdc++.h>

#define el '\n'
#define t template<class dt>


using namespace std;


int main() {

    Hotel h;
    h.name="Hilton";
    h.hasPool=true;
    h.hasGym=true;
    h.roomNumbers=200;
    h.stars=5;
    h.country="Egypt";
    Hotel h2;
    h2.name="4seasons";
    h2.hasPool=true;
    h2.hasGym=true;
    h2.roomNumbers=500;
    h2.stars=5;
    h2.country="Egypt";
//    Admin a;
//    string n,p;
//    cout<<"Enter Username: ";
//    cin>>n;
//    cout<<"Enter Password: ";
//    cin>>p;
//    if (n==a.getUserName() && p==a.getpass()) {
//        cout << "Press 1 to insert" << el;
//        cout << "Press 2 to update" << el;
//        cout << "Press 3 to search" << el;
//        cout << "Press 4 to delete" << el;
//        cout << "Press 5 to display" << el;
//        cout << "Press 6 to exit" << el;
//    }
//    else cout<<"not hello";
    ArrayList arr(3);
    arr.append(h);
    arr.append(h2);
    arr.deleteAt(1);
    arr.display();
}
