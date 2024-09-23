#include <iostream>
using namespace std;
class flight
{
private:
    int flightnumber;
    string destination;
    float Distance;
    float maxfuelcapacity;
    double CalFuel()
    {
        if (Distance >= 1000)
        {
            return 500.0;
        }
        else if (Distance > 1000 && Distance <= 2000)
        {
            return 1100.0;
        }
        else
        {
            return 2200.0;
        }
    }

public:
    void Feedinfo()
    {
        int flight;
        cout << "Enter the flight number : ";
        cin >> flight;
        flightnumber = flight;
        string s;
        cout << "Enter the Destination : ";
        cin >> s;
        destination = s;
        float distance;
        cout << "Enter the Distance : ";
        cin >> distance;
        Distance = distance;
        float maxfuel;
        cout << "Enter the max fuel capacity : ";
        cin >> maxfuel;
        maxfuelcapacity = maxfuel;
    }
    void showinfo()
    {
        cout << "flight number : " << flightnumber << endl;
        cout << "Destination : " << destination << endl;
        cout << "Distance : " << Distance << endl;
        cout << "Max Fuel capacity :" << maxfuelcapacity << endl;
        if (maxfuelcapacity >= CalFuel())
        {
            cout << "fuel capacity is fit for this flight distance" << endl;
        }
        else
        {
            cout << "fuel capacity is not fit for this flight distance" << endl;
        }
    }
};
int main()
{
    flight f1;
    f1.Feedinfo();
    f1.showinfo();
}