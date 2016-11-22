#include<iostream>

using namespace std;

class Pieniadze
{
public:

    int zlotowki;
    int grosze;


    Pieniadze(int my_grosze,int my_zlotowki)
    {
        zlotowki=my_zlotowki;
        grosze=my_grosze;
    }
    Pieniadze(int my_grosze)
    {
        grosze=my_grosze;
        zlotowki=0;
    }
    Pieniadze(){
        zlotowki=0;
        grosze=0;
    };

    void zamiana_gr()
    {
        while(grosze>=100)
        {
            grosze-=100;
            zlotowki+=1;
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
        zamiana_gr();
        get_zlotowki();
        get_grosze();
    }

    Pieniadze operator +(const Pieniadze & x)
    {
        Pieniadze temp;
        temp.zlotowki= this->zlotowki+x.zlotowki;
        temp.grosze= this->grosze+x.grosze;
        return temp;

    }


};
ostream & operator <<(ostream & ekran, Pieniadze a1 ){
    ekran<<a1.zlotowki<<" zl"<<" i ";
    ekran<<a1.grosze<<" groszy";

}

int main()
{
    Pieniadze tysiac(1000);
    Pieniadze kwota(2458,1);
    Pieniadze suma;
    tysiac.wypisz();
    kwota.wypisz();
    suma=tysiac+kwota;
    suma.wypisz();
    cout<<"Tysiac groszy to "<<tysiac<<endl;
    return 0;
}
