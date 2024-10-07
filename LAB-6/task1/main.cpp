#include <iostream>
#include "counter.h"
using namespace std;

int main()
{
  counter c1,c2;
  c1.increase();
  cout << c1.getcount() <<endl;
  c1++;
  cout << c1.getcount() <<endl;
  c2.setincrementstep(5);
  c2++;
  c1 += c2;
  cout << c1.getcount() << endl;
}
