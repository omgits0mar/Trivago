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
}

void Hotel::display() {
    cout<<name<<el;
    cout<<country<<el;
    cout<<location<<el;
    cout<<comment<<el;
    cout<<stars<<el;
    cout<<rate<<el;
    cout<<roomNumbers<<el;
    if (hasGym==true)
        cout<<"yes"<<el;
    else cout<<"No gyms"<<el;
    if (hasPool==true)
        cout<<"yes"<<el;
    else cout<<"No pools"<<el;
    cout<<el;
}
