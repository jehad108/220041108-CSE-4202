#include "cat.h"
#include"animals.h"
void cat::set_sound(string sound)
{
    Animal :: set_sound(sound);
}

void cat::make_sound() const
{
    cout << "the cat says: " << get_sound()<< endl;
}

string cat::get_sound() const
{
    Animal::get_sound();
}

