
#include <iostream>
using namespace std;

// Parent class
class Payment
{
public:
    virtual void makePayment()
    {
        cout << "Making a general payment." << endl;
    }
};

// First derived class
class CashPayment : public Payment
{
public:
    void makePayment() override
    {
        cout << "Payment made using cash." << endl;
    }
};

// Second derived class
class MobileMoneyPayment : public Payment
{
public:
    void makePayment() override
    {
        cout << "Payment made using Mobile Money." << endl;
    }
};

int main()
{
    // Create objects of the derived classes
    CashPayment cash;
    MobileMoneyPayment mobileMoney;

    // Base-class pointer
    Payment *payment;

    // Point to the CashPayment object
    payment = &cash;
    payment->makePayment();

    // Point to the MobileMoneyPayment object
    payment = &mobileMoney;
    payment->makePayment();

    return 0;
}
