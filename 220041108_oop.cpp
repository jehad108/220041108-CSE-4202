#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
int  func(int  &par1,int &par2){
    par1++;
    par2++;
    return par1;
}
void solve(){
    int a,b,c,d;
    int upperpart, lowerpart;
    char dummy;
    cout<< "enter the first fraction: ";
    cin >> a >> dummy >> b;
    cout << "enter the second fraction: ";
    cin >> c >> dummy >> d;
    upperpart = a*d + c*b;
    lowerpart = b*d;
    cout << upperpart << "/"<<lowerpart;
}
int main(){
    int part1 =3;
    int part2 = 4;
    solve();
}