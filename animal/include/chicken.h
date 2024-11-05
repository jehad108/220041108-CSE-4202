#ifndef CHICKEN_H
#define CHICKEN_H
#include"animals.h"


class chicken : protected Animal
{
    int  eggproduction;
public:
    chicken() {};
    void set_sound(string sound="cluck");
    void make_sound()const;
    int get_eggproduction()const;
};

#endif // CHICKEN_H
