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
    void diplayHotel(string);
    Hotel findAt(int);
    void insertAt(int, Hotel);
    void deleteAt(int);
    void deleteBy(string);
    void searchWithQuery();
    ~ArrayList();
};







#endif //TRIVAGO_TRIVAGO_H
