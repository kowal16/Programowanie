
#include<iostream>

using namespace std;

//funkcja, ktora sprawdza czy podana liczba jest nieparzysta
void test_nieparzystosci(int liczba)
{
    //warunek nieparzystosci
    if(liczba%2==0)
    {
        //gdy parzysta wypisz Blad
        //cout<<"Blad: liczba parzysta\n";
        //wyjatek
        throw "Blad: liczba parzysta";
    }
    else
    {
        //gdy nieparzysta wypisz j¹
        cout<<liczba<<endl;
    }
}
void iteruj()
{
    for(int i = 0; i<= 10; i++)
    {
        try
        {
            test_nieparzystosci(i);
        }
        catch(const char* w)
        {
            cout<<w<<endl;
        }
    }
}

int main()
{
    //obsluga wyjatkow
    /* try
     {
         test_nieparzystosci(6);
         //wywolanie funkcji z argumentem 5
         test_nieparzystosci(5);
         //wywolanie funkcji z argumentem 6

     }
     catch(const char* e)
     {
         cout<<"Wyjatek\n"<<e<<endl;

     }*/
    /* try
     {
         iteruj();
     }
     catch(const char* wyjatek)
     {
         cout<<wyjatek<<endl;
     }*/
    iteruj();
    cout<<"Skonczono testowanie\n";

    return 0;
}
