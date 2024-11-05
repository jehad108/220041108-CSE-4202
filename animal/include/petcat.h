#ifndef PETCAT_H
#define PETCAT_H
#include "cat.h"

class petcat : public cat
{
    string name;
public:
    petcat() {};
    void set_name(string name);
    string get_name()const;
    void make_sound()const;
};
#endif // PETCAT_H
