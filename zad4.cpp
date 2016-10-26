#include<iostream>
#include<algorithm>

using namespace std;

class Student
{
public:
    string imie;
    string nazwisko;
    int nr_indeks;
    int rok_stud;
    string kierunek;
    string specjalizacja;

    void get_imie() //funkcja get_nazwa wypisuje na ekran dany element struktury
    {
        cout<<imie<<endl;
    }
    void set_imie(string my_imie) //funkcja set_nazwa wprowadza dane do struktury
    {
        imie=my_imie;
    }
    void get_nazwisko()
    {
        cout<<nazwisko<<endl;
    }
    void set_nazwisko(string my_nazwisko)
    {
        nazwisko=my_nazwisko;
    }
    void get_nr_indeks()
    {
        cout<<nr_indeks<<endl;
    }
    void set_nr_indeks(int my_nr_indeks)
    {
        nr_indeks=my_nr_indeks;
    }
    void get_rok_stud()
    {
        cout<<rok_stud<<endl;
    }
    void set_rok_stud(int my_rok_stud)
    {
        rok_stud=my_rok_stud;
    }
    void get_kierunek()
    {
        cout<<kierunek<<endl;
    }
    void set_kierunek(string my_kierunek)
    {
        kierunek=my_kierunek;
    }
    void get_specjal()
    {
        cout<<specjalizacja<<endl;
    }
    void set_specjal(string my_specjal)
    {
        specjalizacja=my_specjal;
    }
    void uzupelnij(string u_imie, string u_nazwisko,int u_nr_indeks,int u_rok_stud,string u_kierunek, string u_specjalizacja)
    {   //funcja wywolujaca wszystkie funkcja wczytujace dane
        set_imie(u_imie);
        set_nazwisko(u_nazwisko);
        set_kierunek(u_kierunek);
        set_rok_stud(u_rok_stud);
        set_nr_indeks(u_nr_indeks);
        set_specjal(u_specjalizacja);

    }
    void wypisz()
    {   //funkcja wywolujaca wszystkie funkcje wypisujace na ekran
        get_imie();
        get_nazwisko();
        get_nr_indeks();
        get_rok_stud();
        get_kierunek();
        get_specjal();

    }
    bool operator < (const Student &x)const
    {   //zdefiniowanie zachowania siê operatora < potrzebnego przy sortowaniu
        return x.nazwisko>nazwisko;
    }
};



int main()
{
    int n;
    cout<<"Podaj liczbe studentow: "; //Ustalenie wielkosci struktury
    cin>>n;
    Student uczen[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Wpisz "<<i+1<<" studenta"<<endl; //Wczytywanie danych do struktury
        cin>>uczen[i].imie;
        cin>>uczen[i].nazwisko;
        cin>>uczen[i].nr_indeks;
        cin>>uczen[i].rok_stud;
        cin>>uczen[i].kierunek;
        cin>>uczen[i].specjalizacja;
        cout<<endl;
    }

    for(int j=0; j<n; j++)
    {
        cout<<"Student nr: "<<j+1<<" przed sortowaniem"<<endl; //Wypisywanie struktury na ekran przed sortowaniem
        uczen[j].wypisz();
        cout<<endl;
    }

    sort(uczen,uczen+n); //sortowanie struktury

    for(int k=0; k<n; k++)
    {
        cout<<"Student nr: "<<k+1<<" po sortowaniu"<<endl;  //Wypisywanie struktury na ekran po sortowaniu
        uczen[k].wypisz();
        cout<<endl;
    }


    return 0;
}
