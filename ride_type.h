#pragma once
#include "iostream"
#include "taxy_company.h"
#include "ride_type.h"

using namespace std;

class Ride_Type:public Taxi_Company{
public:
    float start_ride;
    float cost_per_km;
    float cost_per_min;
    float price;
    float distance;
    float time;

    float ride_price_prem() {
        // float start_ride = 70;
        // float cost_per_km = 10.5;
        // float cost_per_min = 1; 
        // price = start_ride + (cost_per_km * distance) + (cost_per_min);
        // return price;
        cout << "The ride is premium" << endl;
    }

    float ride_price_satand() {
        // float start_ride = 29;
        // float cost_per_km = 5.5;
        // float cost_per_min = 0.38;
        // price = start_ride + (cost_per_km * distance) + (cost_per_min);
        // return price;
        cout << "The ride is standart" << endl;
    }

};


