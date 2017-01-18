#include<iostream>

using namespace std;

class Niedozwolone_wartosci//:public exception
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

class Pieniadze
{
public:

    int zlotowki;
    int grosze;

    Pieniadze(int my_grosze,int my_zlotowki)
    {
        czy_ujemna2(my_zlotowki,my_grosze);
        czy_milion2(my_zlotowki,my_grosze);
        czy2_13(my_zlotowki,my_grosze);
        zlotowki = my_zlotowki;
        grosze = my_grosze;
        zamiana();
    }
    Pieniadze(int my_grosze)
    {
        czy_ujemna1(my_grosze);
        czy_milion1(my_grosze);
        czy1_13(my_grosze);
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
            throw Niedozwolone_wartosci(-1 ,"ujemna liczba") ;
        else return;
    }
    void czy_ujemna1(int my_grosze)
    {
        if(my_grosze < 0)
            throw Niedozwolone_wartosci(-1, "ujemne grosze");
        else return;
    }
    void czy_milion2(int my_zlotowki, int my_grosze)
    {
        if((my_zlotowki||my_grosze)>1000000)
            throw Niedozwolone_wartosci(404,"wiecej niz milion");
        else return;
    }
    void czy_milion1(int my_grosze)
    {
        if(my_grosze>1000000)
            throw Niedozwolone_wartosci(404,"wiecej niz milion");
        else return;
    }
    void czy1_13(int my_grosze)
    {
        if(my_grosze%13 == 0)
        {
            throw Niedozwolone_wartosci(my_grosze,"wielokrotnosc 13");
        }
    }
    void czy2_13(int my_zlotowki, int my_grosze)
    {
        if(my_zlotowki%13==0)
    {
        throw Niedozwolone_wartosci(my_zlotowki,"wielokrotnosc 13");
        }
        else
        {
            if(my_grosze%13==0)
            {
                throw Niedozwolone_wartosci(my_grosze,"wielokrotnosc 13");
            }
        }
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
        Pieniadze p1(-1);
        p1.wypisz();
    }
    catch(exception &e)
    {
        cout<<"Z EXCEPTION\n";
        cout<<e.what()<<endl;
    }
    catch(Niedozwolone_wartosci &e)
    {
        cout<<"Niedozwolone wartosci\n";
        cout<<e.what()<<endl;
    }
    catch(...)
    {
        cout<<"wyjatek\n";
    }

    try
    {
        Pieniadze p2(10000000000);
        p2.wypisz();
    }
    catch(Niedozwolone_wartosci &e)
    {
        cout<<"Niedozwolone wartosci\n";
        cout<<e.what()<<endl;
    }
    catch(exception &e)
    {
        cout<<"Z EXCEPTION\n";
        cout<<e.what()<<endl;
    }
    catch(...)
    {
        cout<<"wyjatek\n";
    }
        try
    {
        Pieniadze p13(26);
        p13.wypisz();
    }
    catch(Niedozwolone_wartosci &e)
    {
        cout<<"Niedozwolone wartosci\n";
        cout<<e.what()<<endl;
    }
    catch(exception &e)
    {
        cout<<"Z EXCEPTION\n";
        cout<<e.what()<<endl;
    }
    catch(...)
    {
        cout<<"wyjatek\n";
    }


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
    catch(Niedozwolone_wartosci &e)
    {
        cout<<e.what();
    }
    try
    {
        Pieniadze ujemne(-100);
        ujemne.wypisz();
    }
    catch(Niedozwolone_wartosci &wyjatek)
    {
        cout<<wyjatek.what();
    }

    return 0;
}
