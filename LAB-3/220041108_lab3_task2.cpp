#include <bits/stdc++.h>
using namespace std;
class temp
{
private:
    float temp =100;
    char unit = 'c';
    char valid1 = 'c', valid2 = 'f', valid3 = 'k';
    float valid_temp1 = -273.15, valid_temp2 = (-273.15) * 1.8 + 32, valid_temp3 = 0;

public:
    void assign(float input_temp, char input_unit)
    {
        if ((input_unit == 'c' and temp >= valid_temp1) or (input_unit == 'f' and temp >= valid_temp2) or (input_unit == 'k' and temp >= valid_temp3))
        {
            temp = input_temp;
            unit = input_unit;
        }
        else
        {
            cout << "invalid temparature or unit" << endl;
        }
    }

//i made this functions so that i can reduce calculation errors
    void convert_celciustoferhenheight(float x)
    {
        temp = x * 1.8 + 32;
    }


    void convert_ferhenheighttocelcius(float x)
    {
        temp = (x - 32) / (1.8);
    }


    void convert_celciustokelvin(float x)
    {
        temp = x + 273.15;
    }
    void convert_kelvintocelcius(float x)
    {
        temp = x - 273.15;
    }
    void ferheight_to_kelvin(float x)
    {
        convert_ferhenheighttocelcius(x);
        convert_celciustokelvin(temp);
    }
    void kelvin_to_ferhenheight(float x)
    {
        convert_kelvintocelcius(x);
        convert_celciustoferhenheight(temp);
    }
    void convert(char c)
    {
        if (unit == 'c' && c == 'f')
        {
            convert_celciustoferhenheight(temp);
            unit = c;
        }
        else if (unit == 'f' && c == 'c')
        {
            convert_ferhenheighttocelcius(temp);
            unit = c;
        }
        else if (unit == 'c' && c == 'k')
        {
            convert_celciustokelvin(temp);
            unit = c;
        }
        else if (unit == 'k' && c == 'c')
        {
            convert_kelvintocelcius(temp);
            unit = c;
        }
        else if (unit == 'f' && c == 'k')
        {
            ferheight_to_kelvin(temp);
            unit = c;
        }
        else if (unit == 'k' && c == 'f')
        {
            kelvin_to_ferhenheight(temp);
            unit = c;
        }
        else
        {
            cout << "invalid unit"<<endl;
        }
        
    }
    void print(){
        if (unit == 'c')
        {
            cout<<"The temparature is "<<temp<<" degree celcius"<<endl; 
        }
        else if (unit == 'f')
        {
            cout<<"The temparature is "<<temp<<" degree ferhenheight"<<endl;
        }
        else
        {
             cout<<"The temparature is "<<temp<<" degree kelvin"<<endl;
        }
    }
};

int main()
{
    temp student;
    student.print();
    student.convert('k');
    student.print();
    student.assign(33,'c');
    student.print();
    student.convert('f');
    student.print();
}