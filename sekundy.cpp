#include<iostream>

using namespace std;

const int rok=60*60*24*7*4*12;
const int mie=60*60*24*7*4;
const int tyg=60*60*24*7;
const int dni=60*60*24;
const int godz=60*60;
const int minu=60;

int main()
{
    int czas;
    cout << "Podaj liczbe sekund: ";
    cin >> czas;

    if(czas>=60)
    {
       cout<<czas/rok<<" Lat: "<<endl;
       czas%=rok;
       cout<<czas/mie<<" Miesiecy: "<<endl;
       czas%=mie;
       cout<<czas/tyg<<" Tygodni: "<<endl;
       czas%=tyg;
       cout<<czas/dni<<" Dni: "<<endl;
       czas%=dni;
       cout<<czas/godz<<" Godzin: "<<endl;
       czas%=godz;
       cout<<czas/minu<<" Minuty: "<<endl;
       czas%=minu;
       cout<<czas<<" Sekundy: "<<endl;
    }
    return 0;
}
