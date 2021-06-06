//
// Created by Omar on 5/26/2021.
//

#include "Hotel.h"
#define el '\n'
#include <ctime>

Hotel::Hotel() {
    name=" ";
    country=" ";
    location=" ";
    comment=" ";
    stars=0;
    rate=0;
    roomNumbers=10;
    hasGym=false;
    hasPool=false;
    rooms = new Room[10]; //new
    //for(int i = 0; i < 7; i++)
    //   available[i] = true;
}

Hotel::Hotel(int roomno) { //New
    name=" ";
    country=" ";
    location=" ";
    comment=" ";
    stars=0;
    rate=0;
    roomNumbers=roomno;
    hasGym=false;
    hasPool=false;
    rooms = new Room[roomno]; //new
    //for(int i = 0; i < 7; i++)
    //   available[i] = true;
}

void Hotel::display() {
    cout<<"\t\t\t\t Hotel name :"<< name<<el;
    cout<<"\t\t\t\t Hotel country :" <<country<<el;
    cout<<"\t\t\t\t Hotel location :" <<location<<el;
    cout<<"\t\t\t\t Hotel comments :" <<comment<<el;
    cout<<"\t\t\t\t Hotel number of stars :" <<stars<<el;
    cout<<"\t\t\t\t Hotel rate :" <<rate<<el;
    cout<<"\t\t\t\t Hotel number of rooms :" <<roomNumbers<<el;
    cout<<"\t\t\t\t Hotel Room Data :"<<el;
    cout<<"\t\t\t\t -----------------"<<el;
    for (int i = 0; i < roomNumbers; ++i) {
        rooms[i].displayRooms();    // New
    }
    if (hasGym)
        cout<<"\t\t\t\t Has a gym :" <<"yes"<<el;
    else cout<<"\t\t\t\t Has a gym :" <<"No gyms"<<el;
    if (hasPool)
        cout<<"\t\t\t\t Has a pool :" <<"yes"<<el;
    else cout<<"\t\t\t\t Has a pool :" <<"No pools"<<el;
    cout<<"__________________________________________"<<el;
}

Admin::Admin() {
    userName="Ibrahim";
    pass="123456";
}

Room::Room() {
    ID=0;
    roomType="single";
    wifi=false;
    tv=false;
    reservation_duration=NULL;
    price=0.0;
    users=new User[6]; //new
    Available=false;
    numberOfUseres=0;

}

void Room::displayRooms() { //New
    cout<<"\t\t\t\t Room ID :"<< ID<<el;
    cout<<"\t\t\t\t Room type :" <<roomType<<el;
    cout<<"\t\t\t\t Hotel price :" <<price<<" $"<<el;
    cout<<"\t\t\t\t Number of tenants :" <<numberOfUseres<<el;
    cout<<"\t\t\t\t Reservation Duration :" <<reservation_duration<<el;
    if (tv)
        cout<<"\t\t\t\t Has a tv :" <<"yes"<<el;
    else cout<<"\t\t\t\t Has a tv :" <<"No tvs"<<el;
    if (wifi)
        cout<<"\t\t\t\t Has a wifi :" <<"yes"<<el;
    else cout<<"\t\t\t\t Has a wifi :" <<"No wifi"<<el;
    if (Available)
        cout<<"\t\t\t\t Room is available"<<el;
    else cout<<"\t\t\t\t Room is unavailable"<<el;
    cout<<el;
}


User::User() {
    name=" ";
    address=" ";

    phone=" ";


}

void User::displayUser() {
    cout<<"\t\t\t\t Name :"<< name<<el;
    cout<<"\t\t\t\t Address :" <<address<<el;
    cout<<"\t\t\t\t Phone :" <<phone<<" $"<<el;
    //cout<<"\t\t\t\t Number of tenants :" <<numberOfUseres<<el;
}
