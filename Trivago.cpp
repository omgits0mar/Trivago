//
// Created by Omar on 5/25/2021.
//

#include "Trivago.h"
#define t template<class dt>
#include<iostream>
#include "assert.h"
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
        else{
            cout << "There is no hotel with the given name";
        }
    }
}


ArrayList::~ArrayList() {
    delete[] arr;
}

void ArrayList::searchWithQuery() {
    queryError:
    string query;
    cout << "Do you want to search for wifi or gym or pool?" << el;
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
    }else{
        cout << "you have entered a wrong value. \nPlease try again."<< el;
        goto queryError;
    }
}

void ArrayList::searchHotelsAvailability(int day){
    for (int i = 0; i < count; i++) {
            if (arr[i].available[day-1] == true)
                arr[i].display();
            else{
                cout << "There isn't any available hotel at that current day" << el;
            }
    }

}

void ArrayList::filterByHotelNumberOfStars(int stars) {
    for (int i = 0; i < count; i++) {
        if (arr[i].stars == stars)
            arr[i].display();
        else{
            cout << "There isn't any hotel with this number of stars" << el;
        }
    }
}

int ArrayList::searchHotelsAvailability() {
    int dayNumber;
    dayTryAgain:
    cout << "choose from the following days: " << el;
    cout << "1: Saturday " << el;
    cout << "2: Sunday " << el;
    cout << "3: Monday " << el;
    cout << "4: tuesday " << el;
    cout << "5: Wednesday " << el;
    cout << "6: Thursday " << el;
    cout << "7: Friday " << el;

    cin >> dayNumber;

    if(dayNumber > 7 || dayNumber < 1){
        cout << "the selected value isn't available" << el;
        cout << "please try again" << el;
        goto dayTryAgain;
    }
    else{
        return dayNumber;
    }
}
int ArrayList::filterByHotelNumberOfStars(){
    int starNumber;
    starTryAgain:
    cout << "choose number of stars: " << el;
    cout << "1: * " << el;
    cout << "2: ** " << el;
    cout << "3: *** " << el;
    cout << "4: **** " << el;
    cout << "5: ***** " << el;
    cout << "6: ****** " << el;
    cout << "7: ******* " << el;

    cin >> starNumber;

    if(starNumber > 7 || starNumber < 1){
        cout << "the selected value isn't available" << el;
        cout << "please try again" << el;
        goto starTryAgain;
    }
    else{
        return starNumber;
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

