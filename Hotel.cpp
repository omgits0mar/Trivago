//
// Created by Omar on 5/26/2021.
//

#include "Hotel.h"
#define el '\n'

Hotel::Hotel() {
    name=" ";
    country=" ";
    location=" ";
    comment=" ";
    stars=0;
    rate=0;
    roomNumbers=0;
    hasGym=false;
    hasPool=false;
    for(int i = 0; i < 7; i++)
        available[i] = true;
}

void Hotel::display() {
    cout<<"\t\t\t\t Hotel name :"<< name<<el;
    cout<<"\t\t\t\t Hotel country :" <<country<<el;
    cout<<"\t\t\t\t Hotel location :" <<location<<el;
    cout<<"\t\t\t\t Hotel comments :" <<comment<<el;
    cout<<"\t\t\t\t Hotel number of stars :" <<stars<<el;
    cout<<"\t\t\t\t Hotel rate :" <<rate<<el;
    cout<<"\t\t\t\t Hotel number of rooms :" <<roomNumbers<<el;
    if (hasGym==true)
        cout<<"\t\t\t\t Has a gym :" <<"yes"<<el;
    else cout<<"\t\t\t\t Has a gym :" <<"No gyms"<<el;
    if (hasPool==true)
        cout<<"\t\t\t\t Has a pool :" <<"yes"<<el;
    else cout<<"\t\t\t\t Has a pool :" <<"No pools"<<el;
    cout<<el;
}

Admin::Admin() {
    userName="Ibrahim";
    pass="123456";
}
