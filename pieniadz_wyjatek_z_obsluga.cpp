#include<iostream>

using namespace std;

class Pieniadze
{
public:

    int zlotowki;
    int grosze;

    Pieniadze(int my_grosze,int my_zlotowki)
    {
        czy_ujemna2(my_zlotowki,my_grosze);
        zlotowki = my_zlotowki;
        grosze = my_grosze;
        zamiana();
    }
    Pieniadze(int my_grosze)
    {
        czy_ujemna1(my_grosze);
        grosze = my_grosze;
        zlotowki = 0;
        zamiana();
    }
    Pieniadze()
    {
        zlotowki = 0;
        grosze = 0;
    };
    void czy_ujemna2(int my_zlotowki,int my_grosze)
    {
        if((my_zlotowki || my_grosze) < 0)
            throw "Blad: liczba ujemna\n";
        else return;
    }
    void czy_ujemna1(int my_grosze)
    {
        if(my_grosze < 0)
            throw "Blad: liczba ujemna\n";
        else return;
    }
    void zamiana()
    {
        while(grosze >= 100)
        {
            grosze -= 100;
            zlotowki += 1;
        }
        while(grosze < 0)
        {
            zlotowki -= 1;
            grosze += 100;
        }
    }
    void set_zlotowki(int my_zlotowki)
    {
        zlotowki = my_zlotowki;
    }
    void set_grosze(int my_grosze)
    {
        grosze = my_grosze;
    }
    void get_zlotowki()
    {
        cout<<zlotowki<<"zl ";
    }
    void get_grosze()
    {
        cout<<grosze<<"gr "<<endl;
    }
    void wypisz()
    {
        zamiana();
        get_zlotowki();
        get_grosze();
    }

    Pieniadze operator +(const Pieniadze & x)
    {
        Pieniadze temp(zlotowki + x.zlotowki, grosze + x.grosze);
        return temp;
    }
    Pieniadze operator -(const Pieniadze & x)
    {
        Pieniadze temp(zlotowki - x.zlotowki, grosze - x.grosze);
        return temp;
    }

};
ostream & operator <<(ostream & ekran, Pieniadze a1 )
{
    ekran<<a1.zlotowki<<" zl"<<" i ";
    ekran<<a1.grosze<<" groszy";
}


int main()
{
    try
    {
        Pieniadze tysiac(1000);
        tysiac.wypisz();
        Pieniadze kwota(2458,1);
        kwota.wypisz();
        Pieniadze suma;
        suma=tysiac + kwota;
        suma.wypisz();
        cout<<"Tysiac groszy to "<<tysiac<<endl;
    }
    catch(const char* e)
    {
        cout<<e;
    }
    try
    {
        Pieniadze ujemne(-100);
        ujemne.wypisz();
    }
    catch(const char* wyjatek)
    {
        cout<<wyjatek;
    }
    return 0;
}
