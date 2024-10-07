#ifndef COUNTER_H
#define COUNTER_H
class counter
{
private:
    int count;
    int steps;

public:
    counter();
    void setincrementstep(int step);
    int getcount();
    void increase();
    void resetcount(int step);
    counter operator+(const counter &);
    bool operator<(counter);
    bool operator>(counter);
    bool operator>=(counter);
    bool operator<=(counter);
    bool operator!=(counter);
    bool operator==(counter);
    void operator+=(counter);
    void operator++();
    void operator++(int);
};

#endif // COUNTER_H
