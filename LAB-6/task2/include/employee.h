#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<bits/stdc++.h>
using namespace std;
class employee
{
private:
    string name;
    int dateofbirth[3];
    float salary;
    public:

        employee();
        void setinfo();
        void setname();
        void setdateofbirth();
        void setsalary();
        string getname()const;
        float getsalary()const;
        int* getdateofbirth();
        void getinfo();
        employee compare(const employee &a)const;
        ~employee();
};

#endif // EMPLOYEE_H
