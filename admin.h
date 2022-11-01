#pragma once
#include "iostream"
#include "person.h"
using namespace std;


class Admin:public Person
{
public:

    float income_amount = 0;
    int age;
    string IDNP;


    void manage_salary(float customer_amount) {
        income_amount = income_amount + customer_amount;
        cout << "The income for this day is " << income_amount << " lei. ";
    }

};

