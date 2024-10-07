#include "counter.h"
#include<bits/stdc++.h>
using namespace std;
counter::counter() : count(0), steps(1)
{
}

void counter::setincrementstep(int step)
{
    if (step > 0 && count == 0)
    {

        cout << "the steps has been assigned" << endl;
        steps = step;
    }
    else if (step > 0 && count != 0)
    {
        cout << "count is already increased from 0" << endl;
    }
    else
    {
        cout << "can't assign negative numbers";
    }
}
int counter ::getcount()
{
    return count;
}
void counter ::increase()
{
    count += steps;
}

void counter::resetcount(int step)
{
    count = 0;
    steps = step;
}

counter counter::operator+(const counter &d)
{
    counter returncounter;
    if (steps == d.steps)
    {
        returncounter.count = count + d.count;
        returncounter.steps = d.steps;
        return returncounter;
    }
    else
    {
        cout << "the steps are not same can't add" << endl;
    }
}

bool counter::operator<(counter d1)
{
    return count < d1.count;
}

bool counter::operator>(counter d1)
{
    return count > d1.count;
}

bool counter::operator>=(counter d1)
{
    return count >= d1.count;
}

bool counter::operator<=(counter d1)
{
    return count <= d1.count;
}

bool counter::operator!=(counter d1)
{
    return count != d1.count;
}

bool counter::operator==(counter d1)
{
    return count == d1.count;
}

void counter::operator+=(counter d1)
{
    count += d1.count;
    steps = max(steps, d1.steps);
}

void counter::operator++()
{
    increase();
}
void counter :: operator++(int)
{
    increase();
}

