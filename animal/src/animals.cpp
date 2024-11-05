#include "animals.h"
Animal::Animal(string nameofanimal, string habibtat, string sound, int weight, int height)
{
    this->nameofanimal=nameofanimal;
    this->habibtat= habibtat;
    this->sound=sound;
    this->weight=weight;
    this->height=height;
}

void Animal::display() const
{
    cout<<"Name of animal: "<<nameofanimal<<endl;
    cout<<"Habitat: "<<habibtat<<endl;
    cout<<"Sound: "<<sound<<endl;
    cout<<"Weight: "<<weight<<endl;
    cout<<"Height: "<<height<<endl;
}
void Animal :: make_sound()const
{
    cout << get_sound() << endl;
}

void Animal::set_nameofanimal(string nameofanimal)
{
    this->nameofanimal=nameofanimal;
}

void Animal::set_habitat(string habitat)
{
    this->habibtat=habitat;
}

void Animal::set_sound(string sound)
{
    this->sound=sound;
}

void Animal::set_weight(int weight)
{
    this->weight=weight;
}

void Animal::set_height(int height)
{
    this->height=height;
}

string Animal::get_nameofanimal() const
{
    return nameofanimal;
}

string Animal::get_habitat() const
{
    return habibtat;
}

string Animal::get_sound() const
{
    return sound;
}

int Animal::get_weight() const
{
    return weight;
}

int Animal::get_height() const
{
    return height;
}





