#include<iostream>
using namespace std;

class Car
{
    string model;
    int year;
    int speed;
    double fuel_level;
    bool is_running;

    public:

    Car(string model,int year,double fuel_level,bool is_running,int speed)
    {
        this->model = model;
        this->year = year;
        this->fuel_level=fuel_level;
        this->speed = speed;
        this->is_running = is_running;
    }

    void display_status() 
    {
        cout << "Car's Model : "<<model<<endl;
        cout<<"launched year : "<<year<<endl;
        cout<<"Remaining Fuel Percentage : "<<fuel_level<<endl;
        if(is_running && speed>0)
        {
            cout<<"Speed of Car : "<<speed<< " Km/h"<<endl;
            cout<<"Car is Running"<<endl;
        }

        else 
        {
            cout <<"Car is at rest"<<endl;
        }
    }

    void start_engine()
    {
        is_running = 1;
        cout << "Engine is starting"<<endl;
    }

    void stop_engine()
    {
        is_running = 0;
        cout << "Engine is stopping"<<endl;
    }

    void accelerate(int amount)
    {
        if(is_running)
        {
            speed += amount;
            cout << "Car is Accelerated by "<<amount<<" km/h."<< " , Now the speed of the car is : "<<speed<<" km/h"<<endl;
        }
    }

    void brake(int amount)
    {
        if(is_running)
        {
            speed-=amount;
            if(speed>0)
            {
                cout<<"Speed of car after applying Brake is "<<speed<<" km/h"<<endl;
            }
        }
    }
    void refuel(int amount)
    {
       is_running = 0;
            if(amount<=100-fuel_level)
            {
                fuel_level+=amount;
                cout<<"Fuel Level is Increased by : "<<amount<<" percent"<< " , Now the Fuel_level is : "<<fuel_level<<" percent"<<endl;
                is_running = 1;
            }
            
            else 
            {
                amount=100-fuel_level;
                fuel_level+=amount;
                cout<<"Fuel Level is Increased by : "<<amount<<" percent"<< " , Now the Fuel Level is : "<< fuel_level<<endl;
                is_running=1;
            }
    }
};

int main()
{
    Car c1("Old Classic",1987,30,0,50);
    c1.display_status();
    c1.start_engine();
    c1.accelerate(20);
    c1.brake(10);
    c1.refuel(40);
    c1.accelerate(20);
    c1.brake(50);
    c1.stop_engine();

}
