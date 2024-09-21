#include <bits/stdc++.h>
using namespace std;

class Time
{
private:
    int hour;
    int minutes;
    int second;

public:
    Time(int h, int m, int s)
    {
        hour = h;
        minutes = m;
        second = s;
    }
    int getHours()
    {
        return hour;
    }

    int getMinutes()
    {
        return minutes;
    }

    int getSeconds()
    {
        return second;
    }
    void resethour(int h, int m, int s)
    {
        hour = h;
        minutes = m;
        second = s;
    }
    void advance(int h, int m, int s)
    {
        int sum = hour * 3600 + minutes * 60 + second;
        int add = h * 3600 + m * 60 + s;
        sum += add;
        if (sum < 0)
        {
            sum = sum%86400 + 86400;
        }
        cout << sum << endl;
        sum = sum % 86400;
        cout << sum<<endl;
        hour = (sum/3600) % 24;
        sum = sum % 3600;
        minutes = sum / 60;
        sum = sum % 60;
        second = sum;
    }
};
int main()
{
    Time student(10, 30, 45);
    cout << "Hours: " << student.getHours() << endl;
    cout << "Minutes: " << student.getMinutes() << endl;
    cout << "Seconds: " << student.getSeconds() << endl;
    student.advance(-44, -30, 45);
    cout << "Hours: " << student.getHours() << endl;
    cout << "Minutes: " << student.getMinutes() << endl;
    cout << "Seconds: " << student.getSeconds() << endl;

    return 0;
}
