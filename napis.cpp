#include<iostream>
#include<string>

using namespace std;

int toASCII(char c)
{
    switch (c)
    {
    case '0':
        return 0;
    case '1':
        return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;
    }
}

int main ()
{
    int t,suma=0,i=0;
    string liczba;
    cin>>liczba;
    t=liczba.length();
    while(i<t)
    {
        int x;
        x=toASCII(liczba[i]);
        i++;
        suma+=x;
    }
    cout<<suma;
    return 0;
}
