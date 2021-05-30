//
// Created by Omar on 5/25/2021.
//
#include<iostream>
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
    void displayHotel(string);
    Hotel findAt(int);
    void insertAt(int, Hotel);
    void deleteAt(int);
    void deleteBy(string);
    void searchWithQuery();
    void searchHotelsAvailability(int );
    void filterByHotelNumberOfStars(int);
    int searchHotelsAvailability();
    int filterByHotelNumberOfStars();
    ~ArrayList();
};







#endif //TRIVAGO_TRIVAGO_H
