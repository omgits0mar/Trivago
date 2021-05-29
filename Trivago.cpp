//
// Created by Omar on 5/25/2021.
//

#include "Trivago.h"
#define t template<class dt>
#include<bits/stdc++.h>
#define el '\n'

using namespace std;


ArrayList::ArrayList(int s){
    count=0;
    size=s;
    arr=new Hotel[size];
}


int ArrayList::length() {
    return count;
}


void ArrayList::append(Hotel value) {
    if(count==size)
        expand();
    arr[count]=value;
    count++;
}


void ArrayList::expand() {
    size +1; //define new capacity
    Hotel* temp=new Hotel[size];
    for (int i = 0; i < count; ++i) {
        temp[i]=arr[i];
    }
    delete arr; //release old space
    arr=temp;
}


void ArrayList::display() {
    for (int i = 0; i < count; i++) {
        arr[i].display();
    }
}

void ArrayList::diplayHotel(string n) {
    for (int i = 0; i < count; i++) {
        if (arr[i].name == n)
            arr[i].display();
    }
}


Hotel ArrayList::findAt(int i) {
    assert(i>0 && i<count);
    return arr[i];
}


void ArrayList::insertAt(int i, Hotel value) {
    //assert(i>0 && i<count);
    if(count==size)
        expand();
    for (int j = count; j > i; --j) {
        arr[j]=arr[j-1];
        arr[i]=value;
        count++;
    }
}


void ArrayList::deleteAt(int i) {
    assert(i<count);
    for (int j = i; j < count-1; ++j) {
        arr[i]=arr[i+1];
    }
    count--;
}

void ArrayList::deleteBy(string n) {
    for (int i = 0; i < count; i++) {
        if (arr[i].name == n)
            deleteAt(i);
    }
}


ArrayList::~ArrayList() {
    delete[] arr;
}

void ArrayList::searchWithQuery() {
    string query;
    cout << "Do you want to search for wifi or gym or pool?";
    cin >> query;
    if (query == "wifi") {
             for (int i = 0; i < count; i++) {
                 if (arr[i].hasGym)
                     arr[i].display();
             }
    }
    else if (query == "gym") {
        for (int i = 0; i < count; i++) {
            if (arr[i].hasGym)
                arr[i].display();
        }
    }
    else if (query == "pool") {
        for (int i = 0; i < count; i++) {
            if (arr[i].hasPool)
                arr[i].display();
        }
    }
}


// Lab 4




//Admin::Admin() {
//    userName="Ibrahim";
//    pass="123456";
//}
//
//
//Room::Room() {
//    ID=0;
//    roomType="single";
//    wifi=false;
//    tv=false;
//    reservation_duration=" ";
//    price=0.0;
//}

