#include<iostream>

using namespace std;

class Pieniadze
{
public:

    int zlotowki;
    int grosze;


    Pieniadze(int my_grosze,int my_zlotowki)
    {
        if((my_grosze||my_zlotowki) < 0)
        {
            throw "Blad: liczby ujemne\n";
        }
        zlotowki=my_zlotowki;
        grosze=my_grosze;
        zamiana();
    }
    Pieniadze(int my_grosze)
    {
        if(my_grosze < 0)
        {
            throw "Blad: liczba ujemna\n";
        }
        grosze = my_grosze;
        zlotowki = 0;
        zamiana();
    }
    Pieniadze()
    {
        zlotowki=0;
        grosze=0;

    };

    void zamiana()
    {
        while(grosze>=100)
        {
            grosze-=100;
            zlotowki+=1;
        }
        while(grosze<0)
        {
            zlotowki -=1;
            grosze +=100;
        }
    }

    void set_zlotowki(int my_zlotowki)
    {
        zlotowki=my_zlotowki;
    }
    void set_grosze(int my_grosze)
    {
        grosze=my_grosze;
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
    Pieniadze tysiac(1000);
    Pieniadze kwota(2458,1);
    Pieniadze suma;
    Pieniadze ujemne(-100);
    tysiac.wypisz();
    kwota.wypisz();
    // ujemne.wypisz();
    suma=tysiac+kwota;
    suma.wypisz();
    cout<<"Tysiac groszy to "<<tysiac<<endl;
    return 0;
}
