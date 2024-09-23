#include <iostream>
using namespace std;
class bankaccount
{
private:
    static int totalaccountnumber;
    static int present;
    int accountnumber;
    string accountholdername;
    string accounttype;
    float currentbalance;
    const float minimumvalue = 100;

public:
    bankaccount(int accountnumber, string name, string accounttype, float currentbalance)
        : accountnumber(accountnumber), accountholdername(name), accounttype(accounttype), currentbalance(currentbalance)
    {
        totalaccountnumber++;
        present++;
    }
    void assign()
    {
        int x;
        cout << "show account number : " << endl;
        cin >> accountnumber;
        cout << "show accountholdernumber : " << endl;
        cin >> accountholdername;
        cout << "show accounttype : " << endl;
        cin >> accounttype;
        cout << "currentbalance : " << endl;
        cin >> currentbalance;
    }
    void showdata()
    {
        cout << accountnumber << endl;
        cout << accountholdername << endl;
        cout << accounttype << endl;
        cout << currentbalance << endl;
    }
    void balance()
    {
        cout << currentbalance << endl;
    }
    void deposit(float x)
    {
        currentbalance += x;
    }
    void withdrawal(float x)
    {
        if (currentbalance - x < minimumvalue)
        {
            cout << "can't withdraw" << endl;
        }
        else
        {
            currentbalance -= x;
        }
    }
    void giveintrest()
    {
        float intrest = currentbalance * (3.0 / 100.0);
        intrest -= intrest * 0.10;
        currentbalance += intrest;
    }
    ~bankaccount()
    {
        cout << accountholdername << "with a acccount number" << accountnumber << " is destroyed with balance BDT" << currentbalance << endl;
        present--;
    }
    static int showtotalentry()
    {
        return totalaccountnumber;
    }
    static int showintpresent()
    {
        return present;
    }
    float currentbalance1(){
        return currentbalance;
    }
    
};
int bankaccount ::totalaccountnumber = 0;
int bankaccount ::present = 0;
void display_stat()
{
    cout << "current member " << bankaccount ::showintpresent() << endl;
    cout << "total entries " << bankaccount ::showtotalentry() << endl;
}

bankaccount ret(bankaccount b1, bankaccount b2){
    if (b1.currentbalance1() > b2.currentbalance1())
    {
        return b1;
    }
    else
    {
        return b2;
    }
    
}
int main()
{
    bankaccount b1(1234, "alamgir", "saving", 333.5);
    b1.withdrawal(100);
    b1.giveintrest();
    b1.~bankaccount();
    b1.showdata();
    display_stat();
}