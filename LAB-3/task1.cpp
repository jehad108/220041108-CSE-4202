#include <bits/stdc++.h>
using namespace std;
class counter
{
private:
    int stepincrement=0;
    int count=0;

public:
    void setincreamentstep(int x)
    {
        stepincrement = x;
    }
    void increment()
    {
        count += stepincrement;
    }
    int getcount()
    {
        return count;
    }
    void resetcount()
    {
        count = 0;
    }
};
int main()
{
    counter student;
    student.setincreamentstep(2);
    student.increment();
    student.increment();
    cout <<student.getcount()<<endl;
    student.resetcount();
    cout << student.getcount()<<endl;
}