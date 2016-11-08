#include<iostream>

using namespace std;

class Czas
{
    public:
    int godziny;
    int minuty;
    int sekundy;

    Czas (int my_sekundy=0, int my_minuty=0, int my_godziny=0)
    {
        sekundy=my_sekundy;
        godziny=my_godziny;
        minuty=my_minuty;
    }
    Czas (int MY_sekundy){
        sekundy=MY_sekundy;
    }
    Czas (){
    }
    void get_godziny(){
        cout<<godziny<<"godz ";
    }
    void get_minuty(){
        cout<<minuty<<"min ";
    }
    void get_sekundy(){
        cout<<sekundy<<"sek";
    }
    void set_godziny(int my_godziny){
        godziny=my_godziny;
    }
    void get_minuty(int my_minuty){
        minuty=my_minuty;
    }
    void set_sekundy(int my_sekundy){
      sekundy=my_sekundy;
    }

    void drukuj(){
        zamiana_sek();
        zamiana_min();
        get_godziny();
        get_minuty();
        get_sekundy();
    }
    void zamiana_sek(){
        while(sekundy>=60){
            sekundy-=60;
            minuty+=1;
        }
    }
    void zamiana_min(){
        while(minuty>=60){
            minuty-=60;
            godziny+=1;
        }
    }

};
int main(){
    Czas cz(61,59,0);
    Czas cz_1();
    Czas cz_2(623);
    cz.drukuj();
    cz.drukuj();


return 0;
}
