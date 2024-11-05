#ifndef ANIMALS_H
#define ANIMALS_H
#include<bits/stdc++.h>
using namespace std;
class Animal
{
public:
    string nameofanimal;
    string habibtat;
    string sound;
    int weight;
    int height;
public:
    Animal() {};
    Animal(string nameofanimal,string habibtat,string sound,int weight,int height);
    void display()const;
    void set_nameofanimal(string nameofanimal);
    void set_habitat(string habitat);
    void set_sound(string sound);
    void set_weight(int weight);
    void set_height(int height);
    string get_nameofanimal()const;
    string get_habitat()const;
    string get_sound()const;
    int get_weight()const;
    int get_height()const;
    void make_sound() const;
};


#endif // ANIMALS_H
