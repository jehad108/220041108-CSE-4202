#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
    string nameofanimal;
    string habibtat;
    string sound;
    int weight;
    int height;
    public:
    Animal(){};
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
class cow : public Animal{
    double  milkproduction;
    public:
    cow(){};
    void set_sound(string sound="moo");
    void make_sound()const;
    void set_milkproduction(double milkproduction);
    double get_milkproduction()const;
};
class chicken : protected Animal{
    int  eggproduction;
    public:
    chicken(){};
    void set_sound_chicken(string sound="cluck");
    void make_sound_chicken()const;
    int get_eggproduction()const;
};
class cat : private Animal{
    public :
    cat(){};
    void set_sound_cat(string sound="meow");
    void make_sound_cat()const;
    string get_sound_cat()const;
};
class petcat : public cat{
    string name;
    public:
    petcat(){};
    void set_name(string name);
    string get_name()const;
    void make_sound_petcat()const;
};