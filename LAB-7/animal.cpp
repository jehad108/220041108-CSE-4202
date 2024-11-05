#include<animal.hpp>

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

void Animal::make_sound() const
{
    cout << get_sound() << endl;
}

void cow::set_sound(string sound)
{
    this->sound=sound;
}

void cow::make_sound() const
{
    cout << "the cow says: " << sound << endl;
}

void cow::set_milkproduction(double milkproduction)
{
    this->milkproduction=milkproduction;
}

double cow::get_milkproduction() const
{
    return milkproduction;
}

void chicken::set_sound_chicken(string sound)
{
    set_sound(sound);
}

void chicken::make_sound_chicken() const
{
    cout << "the chicken says: " << get_sound()<< endl;
}

int chicken::get_eggproduction() const
{
    return eggproduction;
}

void cat::set_sound_cat(string sound)
{
    set_sound(sound);
}

void cat::make_sound_cat() const
{
    cout << "the cat says: " << get_sound()<< endl;
}

string cat::get_sound_cat() const
{
    get_sound();
}

void petcat::set_name(string name)
{
    this->name=name;
}

string petcat::get_name() const
{
    return name;
}

void petcat::make_sound_petcat() const
{
    cout << "the " << get_name() << " says: " << get_sound_cat()<< endl;

}
