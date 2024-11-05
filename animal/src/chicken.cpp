#include "chicken.h"

void chicken::set_sound(string sound)
{
    Animal :: set_sound(sound);
}

void chicken::make_sound() const
{
    cout << "the chicken says: " <<  endl;
    Animal :: make_sound();
}

int chicken::get_eggproduction() const
{
    return eggproduction;
}
