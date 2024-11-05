#include "cow.h"
void cow::set_sound(string sound)
{
    this->sound=sound;
}

void cow::make_sound() const
{
    cout << "the cow says: "<< " ";
    Animal :: make_sound();
}

void cow::set_milkproduction(double milkproduction)
{
    this->milkproduction=milkproduction;
}

double cow::get_milkproduction() const
{
    return milkproduction;
}
