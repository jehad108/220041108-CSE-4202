#include<bits/stdc++.h>
using namespace std;
class vehicle
{
    protected:
    string license_plate;
    string manufacturer;
    float carrige_size;
    public:
    vehicle(){};
    void set_license_plate(string license_plate);
    void set_manufacturer(string manufacturer);
    void set_carrige_size(float carrige_size);
};