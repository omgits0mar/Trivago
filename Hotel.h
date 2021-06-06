//
// Created by Omar on 5/26/2021.
//
#include<iostream>
#ifndef TRIVAGO_HOTEL_H
#define TRIVAGO_HOTEL_H
#define t template<class dt>
using namespace std;

class Admin{

private:
    string userName,pass;
public:
    Admin();
    string getUserName(){
        return userName;
    };
    string getpass(){
        return pass;
    };

};


class User{
public:
    string name,address,phone;
    User();
    void displayUser();
};

class Room{
public:
    int ID;
    string roomType;
    bool tv,wifi;
    int d1,m1,y1, // new
        d2,m2,y2;
    int year,year4;
    double reservation_duration;
    double price;
    User* users; //new
    int numberOfUseres; //new
    bool Available; //New;

public:
    Room();
    void displayRooms(); // New
};



class Hotel{
    public:
        string name,country,location;
        string comment;
        int stars;
        float rate;
        int roomNumbers;
        bool hasGym,hasPool, available[7];
        Room* rooms; //new

    public:
        Hotel();
        Hotel(int roomno);  //New
        void display();
    };







#endif //TRIVAGO_HOTEL_H
