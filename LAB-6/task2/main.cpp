#include <iostream>
#include "Coordinate.h"
using namespace std;
void sort(Coordinate arr[],int size){
    for(int i= 0; i < size -1 ; i++){
        for(int j=0 ; j < size-i-1 ;j++ ){
            if(arr[j]> arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main()
{
    Coordinate c1(3,4),c2(0,0);
    c1.display();
    Coordinate c[10];
    for(int i=0; i<10; i++){
        c[i].assignrandomcoordinates();
    }
    sort(c,10);
    for(int i=0;i<10;i++){
        c[i].display();
        cout <<c[i].getdistaneorigin() <<endl;
    }
}
