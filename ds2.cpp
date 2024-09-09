#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    char ch; 
    int alphabet=0;
    int spaces =0; 
    int digits = 0;
    while (ch != '\n')
    {
        ch = cin.get();
        if (ch>='0' and ch <='9')
        {
            digits++;
        }
        else if (ch==' ' or ch=='\t')
        {
            spaces++;
        }
        else if ((ch>='a' and ch<='z') or (ch >='A' and ch <= 'Z'))
        {
            alphabet++;
        }
    }
    cout<<" number of alphabets :"<<alphabet<<"\n" <<"number of spaces"<<spaces<<"\n"<<"number of digits:"<<digits<<endl;
}