#include "iostream"
#include "string"
#include "operator.h"
#include "ride_type.h"
#include "taxy_company.h"
#include "person.h"
#include "economy_management.h"
#include "driver.h"
#include "customer.h"
#include "car.h"
#include "admin.h"
#include "cstdlib"
#include "stdlib.h"
#include "unistd.h"


using namespace std;

int main()
{
    srand (time(NULL));
    Admin admin_x;
    Car car_x;
    Driver driver_x;
    Customer customer_x;
    Income eco_x;
    Operator operator_x;
    Ride_Type ride_x;

    float day = 1; 
    float day_income = 0;
    float total_income = 0;
    float cnt = 0;
    string val[2] = {"true", "false"};
    string chek = "true";
    

    while(true){

        cnt = (rand() % 20)+5;
        cout << "\n";
        cout << "Nr de comenzi : " << cnt << endl;
        cout << "Day : "  << day << endl;
        cout << "\n";
        float a = int(rand()%1);

        // make all the simulation
        for(int i = 0; i < cnt; i++){
            int ride_price = int(rand() % 200);
            int car = int(rand()%9);
            operator_x.get_the_request();
            operator_x.assign_request_to_drivers();
            driver_x.get_the_command(int(rand()%4));
            car_x.start_engine(car);
            driver_x.drive();
            driver_x.arrive();
            car_x.stop_engine();
            driver_x.wait_customer();
            int x = int(rand()%2);
            if(chek == val[x]){
                customer_x.check_ride(val[x]);
                if(a == 1){
                    ride_x.ride_price_prem();
                }else{
                    ride_x.ride_price_satand();
                }
                customer_x.get_in_the_car(int(rand()%23));
                car_x.start_engine(car);
                driver_x.drive();
                driver_x.arrive();
                car_x.stop_engine();
                customer_x.pay_for_ride();
                driver_x.get_money_from_customer();
                customer_x.get_out_from_car();
                day_income = eco_x.calculate_income(ride_price);
                cout << "--------------" << endl;
            }else{
                customer_x.check_ride(val[x]);
                day_income = eco_x.calculate_income(0);
                cout << "--------------" << endl;
            }
            cout << "\n";
        }

        cout << "\n";
        cout << "Income for this day : " << day_income << " lei" << endl;
        total_income = total_income + day_income;
        day_income = 0;
        eco_x.income = 0;
        day++;
        cout << "Total income : " <<  total_income << " lei" << endl;
        cout << "-------------------------------------------------------";
        sleep(1);
    }

    return 0;
}


