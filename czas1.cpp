#include<iostream>

using namespace std;

class Czas
{
public:
    int godziny;
    int minuty;
    int sekundy;


    void get_godziny()
    {
        cout<<godziny<<"godz ";
    }
    void get_minuty()
    {
        cout<<minuty<<"min ";
    }
    void get_sekundy()
    {
        cout<<sekundy<<"sek"<<endl;
    }
    void set_godziny(int my_godziny)
    {
        godziny=my_godziny;
    }
    void get_minuty(int my_minuty)
    {
        minuty=my_minuty;
    }
    void set_sekundy(int my_sekundy)
    {
        sekundy=my_sekundy;
    }


    void zamiana_sek()
    {
        while(sekundy>=60)
        {
            sekundy-=60;
            minuty+=1;
        }
    }
    void zamiana_min()
    {
        while(minuty>=60)
        {
            minuty-=60;
            godziny+=1;
        }
    }
    void zamiana_na_sec()
    {
        sekundy+=(godziny*60*60)+minuty*60;
    }


    Czas operator +(const Czas & x)
    {
        Czas result;
        result.sekundy = this->sekundy+x.sekundy;
        result.minuty = this->minuty+x.minuty;
        result.godziny = this->godziny+x.godziny;
        return result;
    }
    Czas operator -(const Czas & y)
    {
        Czas result1;
        Czas result2;
        Czas result3;
        result1.sekundy = this->sekundy-y.sekundy;
        result1.minuty = this->minuty*60-y.minuty*60;
        result1.godziny = this->godziny*3600-y.godziny*3600;
        result2.sekundy = result1.sekundy;
        result2.minuty = result1.minuty/60;
        result2.godziny = result1.godziny/3600;
        result3.sekundy = result2.sekundy;
        result3.minuty = result2.minuty;
        result3.godziny = result2.godziny;
        if(result2.sekundy < -1)
        {
            result2.sekundy =result3.sekundy+60;
        }
        if(result2.sekundy < 0)
        {
            result2.minuty =result3.minuty-60;
        }
        if(result2.minuty < 0)
        {
            result2.minuty =result3.minuty+60;
        }
        if(result2.godziny <0)
        {
            result2.godziny =result3.godziny-60;
        }
        if(result2.godziny <0)
        {
            result2.godziny =result3.godziny+24;
        }
        return result2;
    }

    Czas (int my_sekundy, int my_minuty, int my_godziny)
    {
        sekundy=my_sekundy;
        godziny=my_godziny;
        minuty=my_minuty;
    }
    Czas (int my_sekundy)
    {
        sekundy=my_sekundy;
        minuty=0;
        godziny=0;
    }
    Czas ()
    {
    }
    void drukuj()
    {
        zamiana_sek();
        zamiana_min();
        get_godziny();
        get_minuty();
        get_sekundy();
    }



};
int main()
{

    Czas cz(10,10,11);
    Czas time1(1000);
    Czas time2 = cz - Czas(11,10,9);
    Czas time3(16,52,5);
    Czas time4 =time3-time1;
    Czas time5(12,50,17);
    Czas time6 = time5-Czas(8472);

    cz.drukuj();
    time1.drukuj();
    time2.drukuj();
    time4.drukuj();
    time6.drukuj();

    return 0;
}
