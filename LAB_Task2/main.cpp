#include <iostream>
#include"employee.h"
using namespace std;

int main()
{
    employee a1;
    a1.setinfo();
    a1.getinfo();
    employee a2;
    a2.setinfo();
    a2.getinfo();
    employee a3 = a1.compare(a2);
    a3.getinfo();
    return 0;
}
