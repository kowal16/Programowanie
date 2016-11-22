/*prosty program testuje mechanizm klas abstrakcyjnych /funkcji czysto wirtualnych
na przyk³ad dwoch klas i funkcji */
#include<iostream>

using namespace std;

//klasa abstrakcyjna przechowujaca dydaktyczny atrybut p1 (typu int)
//oraz funkcje powitanie do witania uzytkownika
class A
{
protected:
    int p1; //atrybut przechowujacy element dydaktyczny
public:
    //p1 -- ustawiana wartosc atrybutu this->p1 na wartosc p1
    A(int p1)
    {
        this->p1=p1;
    }
    //funkcja zwracajaca na ekran pewien komunikat
    virtual string powitanie()=0;
};

//klasa B dziedzicz¹ca po A, implementuje funkcje powitanie do witania uzytkownika
class B:public A
{
public:
    B(int p):A(p) {};
    //funkcja zwracajaca komunikat powitania "hello\n"
    //funkcja implementujaca funkcje czysto bazowa z klasy abstrakcyjnej A
    string powitanie()
    {
        return "Hello\n";
    }
};

//testujemy ze dla klasy abstrakcyjnej nie mozna stworzyc obiektu
int main()
{
//    A a = A(3);
//stworzenie obiektu o poczatkowej wartosci atrybutow p1=4 w celach dydaktycznych/badawczych
    B b(4);

    return 0;
}
