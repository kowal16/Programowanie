#include<iostream>
#include<math.h>

using namespace std;

class Figura
{
protected:
    int bok_a;
    int bok_b;
    float ograniczenie;
public:
    Figura(int my_bok1,int my_bok2)
    {
        bok_a=my_bok1;
        bok_b=my_bok2;
    }
    virtual float oblicz_powierzchnie(){};
    virtual float oblicz_obwod(){};
    bool za_duza_powierzchnia(float ograniczenie)
    {
        if(oblicz_powierzchnie()>ograniczenie)
        {
            cout<<"Za duze pole powierzchni"<<endl;
            return true;
        }
        cout<<"Akceptowalne pole powierzchni"<<endl;
        return false;
    }
    bool za_duzy_obwod(float ograniczenie)
    {
        if(oblicz_obwod()>ograniczenie)
        {
            cout<<"Za duzy obwod figury"<<endl;
            return true;
        }
        cout<<"Akceptowalny obwod figury"<<endl;

        return false;
    }



};

class Trojkat:public Figura
{
protected:
    int bok_c;
public:
    Trojkat(int bok_a,int bok_b,int bok_c):Figura(bok_a,bok_c)
    {
        this->bok_c=bok_c;
    }
    float oblicz_obwod(int a, int b, int c)
    {
        return a + b + c;
    }
    float oblicz_powierzchnie(int a, int b, int c)
    {
        float pol_obwodu = (a+b+c)/2;
        float pole = sqrt(pol_obwodu*(pol_obwodu-a)*(pol_obwodu-b)*(pol_obwodu-c));
        return pole;
    }

};

int main()
{

Trojkat b(2,3,8);
b.drukuj();

    return 0;
}
