#include "Trivago.h"
#include <iostream>
#include <ctime>
#define el '\n'



using namespace std;
string days[7] ={"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
void payment(double sum,string name,string address,string phone,
              string room_type, int people,double days, int d1, int m1, int y1,
              int d2, int m2, int y2){
    double tax=0;
    double total=0;
    tax=sum*0.1;
    total=tax+sum;
    cout <<"\t\t\t\t*************************\n"<<endl;
    cout <<"\t\t\t\t   Hotel Trivago "<<endl;
    cout <<"\n\t\t\t\t*************************"<<endl<<endl;
    cout << "Name :"<<name<<endl;
    cout << "Address :"<<address<<endl;
    cout << "Phone Number :"<<phone<<endl<<endl;
    cout << "Room \t\t\t: "<<room_type<<endl;
    cout << "Tenants \t\t: "<<people<<" people"<<endl;
    cout << "Check in \t\t: "<<d1<<"/"<<m1<<"/"<<y1<<endl;
    cout << "Check out \t\t: "<<d2<<"/"<<m2<<"/"<<y2<<endl;
    cout << "Duration Stayed \t: "<<days<<endl<<endl;
    cout << "Room Price\t\t: "<<sum<<endl;
    cout << "Service tax (10%)\t:"<<tax<<endl;
    cout << "Final Total \t\t:   "<<total<<endl<<endl;
    cout << "Thank you for booking with us! Enjoy your stay!"<<endl;
    cout << "For more information, contact us or visit our website "<<endl;
}

double date(int day1, int month1, int year, int day2, int month2, int year4) {
    int i;
    double difference;
    month1-=1;
    month2-=1;
    struct tm a = {0,0,0,day1,month1,year};
    struct tm b = {0,0,0,day2,month2,year4};
    time_t x = mktime(&a);
    time_t y = mktime(&b);
    double days;
    if (x!=(time_t)(-1) && y!=(time_t)(-1) )
    {
        difference = difftime(y,x) / (60*60*24);
        cout<< ctime(&x);
        cout<< ctime(&y);
        cout<<"difference = "<<difference<<" days"<<el;
        days=difference;
    }
    cout<<days<<el;
    return days;
}

int main() {
    char user;

    Hotel h(100);
    h.name="Hilton";
    h.hasPool=true;
    h.hasGym=true;
    h.roomNumbers=100;
    h.stars=5;
    h.country="Egypt";
    h.rooms[h.roomNumbers];   //New
    for (int i = 0; i < h.roomNumbers; ++i) {
        h.rooms[i].ID=i+1;
        h.rooms[i].tv= true;
        h.rooms[i].wifi= true;
        h.rooms[i].Available= true;
    }
    for (int i = 0; i < 50; ++i) {
        h.rooms[i].roomType="single";
        h.rooms[i].price=30;
    }for (int i = 50; i < 100; ++i) {
        h.rooms[i].roomType="double";
        h.rooms[i].price=50;
    }
    //h.available[6] = false;
    //h.available[2] = false;

    Hotel h2(50);
    h2.name="Triumph";
    h2.hasPool=true;
    h2.hasGym=false;
    h2.roomNumbers=50;
    h2.stars=5;
    h2.country="Egypt";
    for (int i = 0; i < h2.roomNumbers; ++i) {
        h2.rooms[i].ID=i+1;
        h2.rooms[i].tv= true;
        h2.rooms[i].wifi= true;
        h2.rooms[i].Available= true;
    }
    for (int i = 0; i < 30; ++i) {
        h2.rooms[i].roomType="single";
        h2.rooms[i].price=25;
    }for (int i = 30; i < 50; ++i) {
        h2.rooms[i].roomType="double";
        h2.rooms[i].price=50;
    }
    //h.available[3] = false;
    //h.available[4] = false;

    ArrayList main(10); //  New
    main.append(h);
    main.append(h2);



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


        if (n==a.getUserName() && p==a.getpass()) {
            cout<<"Welcome Mr. "<<a.getUserName()<< el;
            AdminMenu:
            cout << "Press 1 to Insert" << el;
            cout << "Press 2 to Update" << el;
            cout << "Press 3 to Search" << el;
            cout << "Press 4 to Delete" << el;
            cout << "Press 5 to Display" << el;
            cout << "Press 6 to Exit" << el;
            cout << "Press 0 to Return to Home Page."<<el;
            cin >> goTo;
            string HotelName;
            switch (goTo){
                case 1:{
                    int count;
                    cout<<"How many Hotels you want to insert"<<el;
                    cin>>count;
                    char check;
                    Hotel* hotels = new Hotel[count];
                    for (int i = 0; i < count; ++i) {

                        cout << "Enter hotel name: " << el;
                        cin >> hotels[i].name;
                        cout << "Enter hotel country: " << el;
                        cin >> hotels[i].country;
                        cout << "Enter hotel location: " << el;
                        cin >> hotels[i].location;
                        cout << "Enter hotel number of starts: " << el;
                        cin >> hotels[i].stars;
                        cout << "hotel has gym (Y/N): " << el;
                        cin >> check;
                        if (check == 'Y' || check == 'y')
                            hotels[i].hasGym = true;
                        else
                            hotels[i].hasGym = false;
                        cout << "hotel has pool (Y/N): " << el;
                        cin >> check;
                        if (check == 'Y' || check == 'y')
                            hotels[i].hasPool = true;
                        else
                            hotels[i].hasPool = false;
                        cout << "Enter hotel number of rooms: " << el;
                        cin >> hotels[i].roomNumbers; //New
                        //Room* rooms = new Room[hotels[i].roomNumbers];
                        for (int j = 0; j < hotels[i].roomNumbers; ++j) {
                            hotels[i].rooms[j].ID=j+1;
                            cout<<"Enter Room "<<j+1<<" Type (single or double)"<<el;
                            cin>>hotels[i].rooms[j].roomType;
                            cout<<"Enter Room "<<j+1<<" Price"<<el;
                            cin>>hotels[i].rooms[j].price;
                            cout << "Room "<<j+1<<" has Wifi (Y/N): " << el;
                            cin >> check;
                            if (check == 'Y' || check == 'y')
                                hotels[i].rooms[j].wifi= true;
                            else
                                hotels[i].rooms[j].wifi= false;
                            cout << "Room "<<j+1<<" has TV (Y/N): " << el;
                            cin >> check;
                            if (check == 'Y' || check == 'y')
                                hotels[i].rooms[j].tv= true;
                            else
                                hotels[i].rooms[j].tv= false;
                            cout << "Room Available for booking? (Y/N): " << el;
                            cin >> check;
                            if (check == 'Y' || check == 'y')
                                hotels[i].rooms[j].Available= true;
                            else
                                hotels[i].rooms[j].Available= false;
                        }
                        cout<<"Rooms are all done"<<el;
                        cout << "Enter hotel rate: " << el;
                        cin >> hotels[i].rate;
                        cout << "Enter hotel availability: " << el;
                        /*for (int i = 0; i < 7; ++i) {
                            cout << days[i] << " :";
                            cin >> check;
                            if (check == 'Y' || check == 'y')
                                hotels[i].available[i] = true;
                            else
                                hotels[i].available[i] = false;
                        }*/
                        main.append(hotels[i]);
                    }
                    cout<<"Insertion has been done successfully Mr. "<<a.getUserName()<<el;
                    goto AdminMenu;
                }
                case 2:
                    main.display();
                    cout << "please enter the hotel name that you want to Modify from the above:" << el;
                    cin >> HotelName;
                    main.displayHotel2(HotelName, 1);
                    goto AdminMenu;
                case 3:
                    ErrorSearch:
                    int searchNumber;
                    cout << "Press 1 to search for hotels in specific time." << el;
                    cout << "Press 2 to search for hotels with number of stars." << el;
                    cin >> searchNumber;
                    if(searchNumber == 1)
                        main.searchHotelsAvailability(main.searchHotelsAvailability());
                    else if(searchNumber == 2)
                        main.filterByHotelNumberOfStars(main.filterByHotelNumberOfStars());
                    else{
                        cout << "You have entered wrong value. \nPlease try again." << el;
                        goto ErrorSearch;
                    }
                    goto AdminMenu;
                case 4:
                    cout << "Enter the hotel name that you want to delete:"<< el;
                    cin >> HotelName;
                    main.deleteBy(HotelName);
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
                        main.displayHotel(HotelName);
                    }else if(display == 2){
                        main.display();
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
                    goto AdminMenu;
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

            switch (goTo) {
                case 1:
                    main.searchHotelsAvailability(main.searchHotelsAvailability());
                    goto clientMenu;
                case 2:
                    main.filterByHotelNumberOfStars(main.filterByHotelNumberOfStars());
                    goto clientMenu;
                case 3:
                    main.searchWithQuery();
                    goto clientMenu;
                case 4: {
                    booking:
                    int d1, m1, y1, // new
                    d2, m2, y2;
                    int year, year4;
                    string hotelName;
                    int id;
                    int index;
                    cout<<"Enter Hotel name you want to reserve:"<<el;
                    cin>>hotelName;
                    for (int i = 0; i < main.length(); ++i) {
                        if (main.arr[i].name==hotelName) {
                            index=i;
                            cout<<"Found"<<el;
                            break;
                        }
                        //else{cout<<"Unfound"<<el;}
                    }
                    bookingid:
                    cout<<"Enter Room ID you want to reserve: "<<el;
                    cin>>id;
                    //for (int i = index; i < main.length(); ++i) {
                        for (int j = 0; j < main.arr[index].roomNumbers; ++j) {
                            if(main.arr[index].rooms[j].ID==id){
                                if(main.arr[index].rooms[j].Available){
                                    cout << el << "Enter the check-in date:" << el;
                                    cin >> d1 >> m1 >> y1;
                                    year = y1 - 1900;
                                    cout<<"How many Tenants are you: "<<el;
                                    cout<<"Note that: We only allow maximum 6 tenants per room"<<el;
                                    cin>>main.arr[index].rooms[j].numberOfUseres;
                                    if (main.arr[index].rooms[j].numberOfUseres>6 || main.arr[index].rooms[j].numberOfUseres==0) {
                                        cout << "Can't book a single room for more than 6 costumers" << el;
                                        goto bookingid;
                                    }
                                    else if(main.arr[index].rooms[j].numberOfUseres>2 && main.arr[index].rooms[j].roomType=="single")
                                    {
                                        cout<<"Can't book a single room for more than 2 costumers"<<el;
                                        goto bookingid;
                                    }
                                    else {
                                        cout << d1 << "/" << m1 << "/"
                                             << y1 << el;
                                        cout << "Enter your name" << el;
                                        cin >> main.arr[index].rooms[j].users->name;
                                        cout << "Enter your Address" << el;
                                        cin >> main.arr[index].rooms[j].users->address;
                                        cout << "Enter your Phone no" << el;
                                        cin >> main.arr[index].rooms[j].users->phone;
                                        cout << el << "Enter the check-out date:" << el;
                                        cin >> d2 >> m2 >> y2;
                                        year4 =  y2- 1900;
                                        main.arr[index].rooms[j].reservation_duration = date(d1,m1,year,d2,m2,year4);
                                        double sum=0;
                                        for (int k = 0; k < main.arr[index].rooms[j].reservation_duration; ++k) {
                                            sum+=main.arr[index].rooms[j].price;
                                        }
                                        cout<<"Total price: "<<sum;
                                        payment(sum,main.arr[index].rooms[j].users->name
                                                , main.arr[index].rooms[j].users->address
                                                ,main.arr[index].rooms[j].users->phone
                                                ,main.arr[index].rooms[j].roomType,
                                                main.arr[index].rooms[j].numberOfUseres,
                                                d1,m1,y1,d2,m2,y2,main.arr[index].rooms[j].reservation_duration);
                                        break;

                                    }

                                }
                                else{cout<<"room is not available"<<el;    goto bookingid;}
                            }
                            //else {cout<<"wrong room id"<<el;    goto bookingid;}
                        }
                    //}

                    goto clientMenu;
                }
                case 5:
                    break;
                case 0:
                    goto selectMenu;
                default:
                    break;
            }
        }

}
