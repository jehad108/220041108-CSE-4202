#include <bits/stdc++.h>
using namespace std;
class Motorbike
{
private:
    string modelnumber;
    double price;
    string manifacturar;

public:
    Motorbike(string modelnumber = "motorola", double price = 20000.2) : modelnumber(modelnumber), price(price) {

                                                                         };
    friend void setmanifacturar(Motorbike &d1);
    void display()
    {
        cout << "model_number :" << modelnumber << endl;
        cout << "price : " << price << endl;
        cout << "manifacturar : " << manifacturar << endl;
    }
    void set_modelnumber(string x)
    {
        modelnumber = x;
    }
    void set_price(double y)
    {
        price = y;
    }
    string get_modelnumber()
    {
        return modelnumber;
    }
    double get_price()
    {
        return price;
    }
    friend string getmanifacturar(const Motorbike &d1);
};
void setmanifacturar(Motorbike &d1)
{
    string take_input;
    cout << "set the manifacturar : ";
    getline(cin, take_input);
    cin.ignore();
    d1.manifacturar = take_input;
}
string getmanifacturar(const Motorbike &d1)
{
    return d1.manifacturar;
}
int main()
{
    Motorbike a[10];
    for (int i = 0; i < 10; i++)
    {
        string s1, s2;
        double pri;
        cout << "enter the modenumber : ";
        getline(cin, s1);
        cin.ignore();
        a[i].set_modelnumber(s1);
        cout << "enter the price : ";
        cin >> pri;
        cin.ignore();
        a[i].set_price(pri);
        setmanifacturar(a[i]);
    }
    for (int i = 0; i < 10 - 1; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (getmanifacturar(a[j]) > getmanifacturar(a[j + 1]))
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        a[i].display();
    }
}
