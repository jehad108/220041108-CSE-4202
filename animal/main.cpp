#include <iostream>
#include"animals.h"
#include"cat.h"
#include"petcat.h"
#include"chicken.h"
#include"cow.h"
using namespace std;

int main()
{
    Animal a1("dog","home","bark",10,50);
    a1.display();
    cat c;
    cow cw;
    cw.set_sound();
    cw.make_sound();
    c.set_sound();
    c.make_sound();
    petcat p;
    p.set_name("obidit");
    p.set_sound();
    p.make_sound();
}
