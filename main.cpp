#include "Trivago.h"
#include <bits/stdc++.h>

#define el '\n'
#define t template<class dt>


using namespace std;


int main() {
    char user;

    Hotel h;
    h.name="Hilton";
    h.hasPool=true;
    h.hasGym=true;
    h.roomNumbers=200;
    h.stars=5;
    h.country="Egypt";
    Hotel h2;
    h2.name="Triumph";
    h2.hasPool=true;
    h2.hasGym=false;
    h2.roomNumbers=500;
    h2.stars=5;
    h2.country="Egypt";

    ArrayList arr(3);
    arr.append(h);
    arr.append(h2);
    arr.deleteBy("Triumph");
    arr.display();

   start:
    cout<<"\n\t\t\t\t*************************";
    cout<<"\n\t\t\t\t Hotel Booking Service";
    cout<<"\n\t\t\t\t     *  MAIN MENU  *";
    cout<<"\n\t\t\t\t*************************\n"<<el;
    cout<<"For Client press c \t for Admin press a"<<el;
    cin>>user;
    if(user=='a' || user=='A')
    {
        Admin a;
        string n,p;
        int goTo;
        sign:
        cout<<"Pleas Enter your Data as follows:"<<el;
        cout<<"Enter Username:";
        cin>>n;
        cout<<"Enter Password:";
        cin>>p;
        system("clr");

        if (n==a.getUserName() && p==a.getpass()) {
            cout<<"Welcome Mr. "<<a.getUserName();
            cout << "\nPress 1 to Insert" << el;
            cout << "Press 2 to Update" << el;
            cout << "Press 3 to Search" << el;
            cout << "Press 4 to Delete" << el;
            cout << "Press 5 to Display" << el;
            cout << "Press 6 to Exit" << el;
            cout<<"To Return to Home Page press 0"<<el;
            cin>>goTo;
            switch (goTo)
            {
                case 1:
                    {
                    }
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
                case 6:
                    break;
                case 0:
                    break;
                default:
                    break;
            }

        }
        else{
            cout << "The Data you entered is incorrect"<<el;
            cout<<"Press 1 to sign again or 0 to return to home page"<<el;
            cin>>goTo;
            if(goTo==0)
                goto start;
            else goto  sign;
        }
    }
    else if(user=='c'||user=='C')
    {
        int day,month,year;
        cout<<"Enter the check in date: d/m/y"<<el;
        cin>>day>>month>>year;
        system("cls");

        cout<<day<<"/"<<month<<"/"<<year<<el;

    }

}
