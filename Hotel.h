//
// Created by Omar on 5/26/2021.
//
#include<bits/stdc++.h>
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
        bool hasGym,hasPool;

    public:
        Hotel();
        void display();
    };


#endif //TRIVAGO_HOTEL_H
