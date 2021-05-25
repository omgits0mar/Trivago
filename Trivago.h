//
// Created by Omar on 5/25/2021.
//
#include<bits/stdc++.h>
#include "Hotel.h"
#ifndef TRIVAGO_TRIVAGO_H
#define TRIVAGO_TRIVAGO_H
#define t template<class dt>

using namespace std;

class Trivago {

};

class ArrayList{
private:
    Hotel* arr;
    int count,size;
public:
    ArrayList(int);
    int length();
    void append(Hotel);
    void expand();
    void display();
    Hotel findAt(int);
    void insertAt(int, Hotel);
    void deleteAt(int);
    ~ArrayList();
};

//class Admin{
//
//private:
//    string userName,pass;
//public:
//    Admin();
//    string getUserName(){
//        return userName;
//    };
//    string getpass(){
//        return pass;
//    };
//
//};  //finished
//
//class Room{
//private:
//    int ID;
//    string roomType;
//    bool tv,wifi;
//    string reservation_duration;
//    double price;
//
//public:
//    Room();
//};





#endif //TRIVAGO_TRIVAGO_H
