#pragma once
#include "iostream"
using namespace std;

class Taxi_Company
{
public:
    virtual void info() {
        cout << "This is the Taxi Company";
        cout << "It contains all the information about the Company !";
    }

};
