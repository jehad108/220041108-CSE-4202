#ifndef CAT_H
#define CAT_H
#include"animals.h"

class cat : private Animal
{
public :
    cat() {};
    void set_sound(string sound="meow");
    void make_sound()const;
    string get_sound()const;
};

#endif // CAT_H
