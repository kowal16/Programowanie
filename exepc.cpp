#include<iostream>
#include <exception>

using namespace std;

class Niedozwolone_wartosci
{
    int kod;
    const char* komunikat;
public:
    Niedozwolone_wartosci(int my_kod, const char* my_komunikat)
    {
        kod = my_kod;
        komunikat = my_komunikat;
    }
    Niedozwolone_wartosci()
    {
        kod=0;
        komunikat="";
    };
    const char* what()const throw()
    {
        return komunikat;

    }

};
int main ()
{

    return 0;
}
