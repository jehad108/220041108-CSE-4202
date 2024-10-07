#include "Coordinate.h"
#include<bits/stdc++.h>
#include <random>
#include <ctime>
using namespace std;
Coordinate::Coordinate():absicca(0),ordinate(0)
{

}
Coordinate ::Coordinate(float x, float y): absicca(x),ordinate(y)
{

}
Coordinate::~Coordinate()
{

}
void Coordinate :: display(){
    cout << "Positon (" << absicca << ", " << ordinate << ")" << endl;
}
float Coordinate :: operator -(Coordinate d1)
{
    return sqrt(pow(absicca - d1.absicca,2)+ pow(ordinate-d1.ordinate,2));
}
float Coordinate :: getdistaneorigin(){
    return sqrt(pow(absicca,2)+pow(ordinate,2));
}
void Coordinate :: move_x(float value){
    absicca += value;
}
void Coordinate :: move_y(float value){
    ordinate += value;
}
void Coordinate :: moveaxis(float x, float y){
    absicca += x;
    ordinate += y;
}
bool Coordinate :: operator == (Coordinate d1){
    return getdistaneorigin() == d1.getdistaneorigin();
}
bool Coordinate :: operator <(Coordinate d1){
    return getdistaneorigin() < d1.getdistaneorigin();
}
bool Coordinate :: operator > (Coordinate d1){
    return getdistaneorigin() > d1.getdistaneorigin();
}
bool Coordinate :: operator != (Coordinate d1){
    return getdistaneorigin() != d1.getdistaneorigin();
}
bool Coordinate :: operator >= (Coordinate d1){
    return getdistaneorigin() >= d1.getdistaneorigin();
}
bool Coordinate :: operator <= (Coordinate d1){
    return getdistaneorigin() <= d1.getdistaneorigin();
}
float Coordinate ::  random_float(float min, float max) {

	return ((float)rand() / RAND_MAX) * (max - min) + min;
}
void Coordinate :: assignrandomcoordinates(){
    absicca = random_float(0,1000.0);
    ordinate = random_float(0,1000.0);
}
