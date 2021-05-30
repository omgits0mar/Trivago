//
// Created by Omar on 5/26/2021.
//
#include<iostream>
#ifndef TRIVAGO_HOTEL_H
#define TRIVAGO_HOTEL_H
#define t template<class dt>
using namespace std;

class Hotel{
    public:
        string name,country,location;
        string comment;
        int stars;
        float rate;
        int roomNumbers;
        bool hasGym,hasPool, available[7];

    public:
        Hotel();
        void display();
    };
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

};  //finished

class Room{
private:
    int ID;
    string roomType;
    bool tv,wifi;
    string reservation_duration;
    double price;

public:
    Room();
};


#endif //TRIVAGO_HOTEL_H
