// By: Aditya Patgaonkar
// Date: 2.11.2016
// Demonstrate usage of : operator overloading. MEMBER FUNCTION operator overloading!
// (** Important **)

#include <iostream>

using namespace std;

class processor
{
    char name[30];
    int bit, dataBus, addrBus, noOfPeripherals;
    double clkFreq; // MHz
public:
    processor(const char* name = "Unknown", int bit = 0, int dataBus = 0,
            int addrBus = 0, int noOfPeripherals = 0, double clkFreq = 0.0)
    {
        strcpy(this->name, name); this->bit = bit; this->dataBus = dataBus;
        this->addrBus = addrBus;
        this->noOfPeripherals = noOfPeripherals; this->clkFreq = clkFreq;
    }
    char* GetName() {return name;}
    int GetBit() {return bit;}
    int GetDataBus() {return dataBus;}
    int GetAddrBus() {return addrBus;}
    int GetNumPeri() {return noOfPeripherals;}
    double GetClkFreq() {return clkFreq;}
    friend void showProx(const processor ob);

    processor operator+(processor &ob)
    {
        ob.bit = this->bit + ob.bit;
        ob.addrBus = this->addrBus + ob.addrBus;
        return ob;
    }

    // Prefix operators overloaded
    processor operator++()
    {
        noOfPeripherals++;
        return *this;
    }
    processor operator--()
    {
        noOfPeripherals--;
        return *this;
    }

    // Postfix operators overloaded
    processor operator++(int x) // Only type int is allowed in arguments.
    {
        noOfPeripherals++;
        return *this;
    }
    processor operator--(int x) // Only type int is allowed in arguments.
    {
        noOfPeripherals--;
        return *this;
    }

};

void showProx(processor ob)
{
    cout << ob.GetName() << endl;
    cout << ob.GetBit() << " bit processor." << endl;
    cout << ob.GetDataBus() << " data bus." << endl;
    cout << ob.GetAddrBus() << " address bus." << endl;
    cout << ob.GetNumPeri() << " peripherals." << endl;
    cout << ob.GetClkFreq() << " Mhz." << "\n" << endl;
}


int main()
{
    processor arm1("Arm Cortex v7", 32, 32, 32, 5, 20.0);
    processor arm2("Arm Cortex v4", 32, 32, 32, 2, 18.0);
    arm1 = arm2 + arm1; // Second argument i.e. arm1 calls the overloaded operator.
    showProx(arm2);
    showProx(arm1);
    ++arm1;
    showProx(arm1);
    return 0;
}
