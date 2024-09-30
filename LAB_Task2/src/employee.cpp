#include "employee.h"
#include<bits/stdc++.h>
using namespace std;
employee::employee()
{

}
void employee :: setname()
{
    getline(cin,name);
    if(name.size()<=2)
    {
        name = "John Doe";
    }
}
void employee :: setdateofbirth()
{
    cin.ignore();
    cin >> dateofbirth[0] ;
    cin >> dateofbirth[1] ;
    cin >> dateofbirth[2];
    if(2024-dateofbirth[2] <= 18)
    {
        dateofbirth[0]=1;
        dateofbirth[1]=1;
        dateofbirth[2]=2002;
    }
}
void employee ::setsalary()
{
    cin.ignore();
    cin >> salary;
    if(salary<10000.0 || salary > 100000.0)
    {
        salary = 10000.0;
    }
    cin.ignore();
}
void employee ::setinfo()
{
    setname();
    setdateofbirth();
    setsalary();
}
string employee ::getname()const
{
    return name;
}
float employee ::getsalary()const
{
    return salary;
}
int* employee ::getdateofbirth()
{
    return dateofbirth;
}
void employee ::getinfo(){
    cout << "name of the user : "<< getname()<<endl;
    cout << "Salary : "<<getsalary()<<endl;
    cout << "Date of birth : ";
    int *arr = getdateofbirth();
    for(int i=0; i<3; i++){
       cout << arr[i] << " ";
    }
    cout <<endl;
}
employee employee  ::compare(const employee &a)const{
    employee temp;
    if(dateofbirth[2]<=a.dateofbirth[2]){
            temp.name = getname();
            temp.dateofbirth[0] = dateofbirth[0];
            temp.dateofbirth[1] = dateofbirth[1];
            temp.dateofbirth[2] = dateofbirth[2];
            temp.salary = getsalary();
            return temp;
    }
    else
        return a;
}
employee::~employee()
{

}
