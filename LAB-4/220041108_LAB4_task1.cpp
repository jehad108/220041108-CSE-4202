#include <iostream>
using namespace std;
class calculator
{
private:
    int currentstatus;
    int getvalue()
    {
        return currentstatus;
    }
    void setvalue(int x)
    {
        currentstatus = x;
    }

public:
    calculator() : currentstatus(0)
    {
    }
    calculator(int x) : currentstatus(x)
    {
    }
    void add(int x)
    {
        int sum = getvalue() + x;
        setvalue(sum);
    }
    void subtract(int x)
    {
        int reduce = getvalue() - x;
        setvalue(reduce);
    }
    void multiply(int x)
    {
        int multi = getvalue() * x;
        setvalue(multi);
    }
    int divideby(int x)
    {
        if (x == 0)
        {
            cout << "Invalid operation !!" << endl;
            return 0;
        }
        else
        {
            int devi = getvalue() / x;
            setvalue(devi);
            return getvalue() % x;
        }
    }
    void clear()
    {
        currentstatus = 0;
    }
    void display(){
        cout << "Calculator display: " << getvalue() << endl;
    }
    ~calculator(){
        display();
        cout << "Destructor of that following function is called" <<endl;
    }
};
int main (){
    calculator s1;
    s1.add(10); s1.display();
    s1.add(7); s1.display();
    s1.multiply(31) ;s1.display();
    s1.subtract(42) ; s1.display();
    s1.divideby(7) ; s1.display();
    s1.divideby(0) ; s1.display();
    s1.add(3) ; s1.display();
    s1.clear() ; s1.display();
}