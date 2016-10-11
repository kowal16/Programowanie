#include<iostream>
#include<string>

using namespace std;

int przelicznik(int i)
{
    switch (i)
    {
    case 0 :
        return 60*60*24*7*4*12;
    case 1 :
        return 60*60*24*7*4;
    case 2 :
        return 60*60*24*7;
    case 3:
        return 60*60*24;
    case 4 :
        return 60*60;
    case 5 :
        return 60;
    case 6 :
        return 1;

    }
}
string test(int i)
{
    switch (i)
    {
    case 0:
        return "Lat";
    case 1:
        return "Miesiecy";
    case 2:
        return "Tygodni";
    case 3:
        return "Dni";
    case 4:
        return "Godzin";
    case 5:
        return "Minut";
    case 6:
        return "Sekund";

    }
}
int main()
{
    int czas,i=0;
    cout << "Podaj liczbe sekund: ";
    cin >> czas;
    while(i<=6)
    {
        cout<<czas/przelicznik(i)<<" "<<test(i)<<endl;
        czas%=przelicznik(i);
        i++;
    }
    return 0;
}
