#pragma once
#include "iostream"
#include "taxy_company.h"
using namespace std;

class Person:Taxi_Company
{
public:
    string name;
    string forename;
    string phone_number;
    float rank_val;

    virtual float rank(float value) = 0;

};
