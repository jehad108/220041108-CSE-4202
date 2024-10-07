#ifndef COORDINATE_H
#define COORDINATE_H


class Coordinate
{
private:
    float absicca;
    float ordinate;
public:
    Coordinate();
    Coordinate(float x, float y);
    ~Coordinate();
    void display();
    float operator -(Coordinate);
    float getdistaneorigin();
    void move_x(float value);
    void move_y(float value);
    void moveaxis(float x, float y);
    bool operator ==(Coordinate);
    bool operator <(Coordinate);
    bool operator >(Coordinate);
    bool operator <=(Coordinate);
    bool operator >=(Coordinate);
    bool operator !=(Coordinate);
    float random_float(float min, float max);
    void assignaradnomnumber();
    void assignrandomcoordinates();
};
#endif
