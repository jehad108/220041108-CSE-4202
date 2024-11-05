#ifndef COW_H
#define COW_H
#include"animals.h"

class cow : public Animal
{
    double  milkproduction;
public:
    cow() {};
    void set_sound(string sound="moo");
    void make_sound()const;
    void set_milkproduction(double milkproduction);
    double get_milkproduction()const;
};

#endif // COW_H
