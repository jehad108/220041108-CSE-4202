#include "petcat.h"

void petcat::set_name(string name)
{
    this->name=name;
}

string petcat::get_name() const
{
    return name;
}

void petcat::make_sound() const
{
    cout << "the " << get_name() << " says: " << get_sound()<< endl;

}
