#include "iostream"
#include "string"
#include "taxy_company.h"
#include <string>
#include <cstdlib>
using namespace std;

class Car:Taxi_Company
{
public:
    string model[9] = {"BMW", "Audi", "Mercedes","Porche", "Toyota", "Nissan", "Opel", "Skoda", "Tesla"};

    void start_engine(int val){
        cout << "Start the engine of " << model[val] << endl;
    }

    void stop_engine(){
        cout << "Stop the engine" << endl;
    }
};

