#include "Trivago.h"
#include <iostream>
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
    h.available[6] = false;
    h.available[2] = false;
    Hotel h2;
    h2.name="Triumph";
    h2.hasPool=true;
    h2.hasGym=false;
    h2.roomNumbers=500;
    h2.stars=5;
    h2.country="Egypt";
    h.available[3] = false;
    h.available[4] = false;

    ArrayList arr(3);
    arr.append(h);
    arr.append(h2);



    cout<<"\n\t\t\t\t*************************";
    cout<<"\n\t\t\t\t Hotel Booking Service";
    cout<<"\n\t\t\t\t     *  MAIN MENU  *";
    cout<<"\n\t\t\t\t*************************\n"<<el;
    selectMenu:
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
            AdminMenu:
            cout<<"Welcome Mr. "<<a.getUserName()<< el;
            cout << "Press 1 to Insert" << el;
            cout << "Press 2 to Update" << el;
            cout << "Press 3 to Search" << el;
            cout << "Press 4 to Delete" << el;
            cout << "Press 5 to Display" << el;
            cout << "Press 6 to Exit" << el;
            cout << "Press 0 to Return to Home Page."<<el;
            cin >> goTo;
            string HotelName;
            switch (goTo)
            {
                case 1:
                    goto AdminMenu;
                case 2:
                    goto AdminMenu;
                case 3:
                    ErrorSearch:
                    int searchNumber;
                    cout << "Press 1 to search for hotels in specific time." << el;
                    cout << "Press 2 to search for hotels with number of stars." << el;
                    cin >> searchNumber;
                    if(searchNumber == 1)
                        arr.searchHotelsAvailability(arr.searchHotelsAvailability());
                    else if(searchNumber == 2)
                        arr.filterByHotelNumberOfStars(arr.filterByHotelNumberOfStars());
                    else{
                        cout << "You have entered wrong value. \nPlease try again." << el;
                        goto ErrorSearch;
                    }
                    goto AdminMenu;
                case 4:
                    cout << "Enter the hotel name that you want to delete:"<< el;
                    cin >> HotelName;
                    arr.deleteBy(HotelName);
                    goto AdminMenu;
                case 5:
                    DisplaySearch:
                    int display;
                    cout << "Press 1 to display hotel in by name." << el;
                    cout << "Press 2 to display all hotels." << el;
                    cin >> display;
                    if(display == 1){
                        cout << "Enter the hotel name that you want to display:"<< el;
                        cin >> HotelName;
                        arr.displayHotel(HotelName);
                    }else if(display == 2){
                        arr.display();
                    }else{
                        cout << "You have entered wrong value. \nPlease try again." << el;
                        goto DisplaySearch;
                    }
                    goto AdminMenu;
                case 6:
                    break;
                case 0:
                    goto selectMenu;
                default:
                    break;
            }

        }
        else{
            cout << "The Data you entered is incorrect"<<el;
            cout<<"Press 1 to sign again or 0 to return to home page"<<el;
            cin>>goTo;
            if(goTo==0)
                goto selectMenu;
            else goto  sign;
        }
    }
    else if(user=='c'||user=='C')
    {
        clientMenu:
        int goTo;
        cout << "Press 1 to search for hotels in specific time." << el;
        cout << "Press 2 to search for hotels with number of stars." << el;
        cout << "Press 3 to search for hotels with specific qualities." << el;
        cout << "Press 4 to reserve a room in a hotel." << el;
        cout << "Press 5 to Exit." << el;
        cout << "Press 0 to Return to Home Page."<<el;
        cin >>goTo;

        if(goTo > 3 || goTo < 0){
            cout << "You have entered wrong value. \nPlease try again." << el;
            goto clientMenu;
        }
        else{
            switch (goTo) {
                case 1:
                    arr.searchHotelsAvailability(arr.searchHotelsAvailability());
                    goto clientMenu;
                case 2:
                    arr.filterByHotelNumberOfStars(arr.filterByHotelNumberOfStars());
                    goto clientMenu;
                case 3:
                    arr.searchWithQuery();
                    goto clientMenu;
                case 4:
                    goto clientMenu;
                case 5:
                    break;
                case 0:
                    goto selectMenu;
                default:
                    break;
            }
        }




        /*
            int day,month,year;
            cout<<"Enter the check in date: d/m/y"<<el;
            cin>>day>>month>>year;
            system("cls");

            cout<<day<<"/"<<month<<"/"<<year<<el;
         */

    }
    else{
        cout << "the selected value is incorrect"<<el;
        goto selectMenu;
    }

}
