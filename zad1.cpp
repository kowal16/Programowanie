#include<iostream>

using namespace std;

struct Student
{
    private:
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
    void uzupelnij(string u_imie, string u_nazwisko,int u_nr_indeks,int u_rok_stud ,string u_kierunek, string u_specjalizacja)
    {
        set_imie(u_imie);
        set_nazwisko(u_nazwisko);
        set_kierunek(u_kierunek);
        set_rok_stud(u_rok_stud);
        set_nr_indeks(u_nr_indeks);
        set_specjal(u_specjalizacja);
        //funcja wywolujaca wszystkie funkcja wczytujace dane
    }
    void wypisz()
    {
        get_imie();
        get_nazwisko();
        get_nr_indeks();
        get_rok_stud();
        get_kierunek();
        get_specjal();
        //funkcja wywolujaca wszystkie funkcje wypisujace na ekran
    }
};

int main()
{
    Student uczen;
    Student student;
    uczen.uzupelnij("Jan","Kowalski",273167,2,"Informatyka","Licencjat");
    student.uzupelnij("Szymon","Kowalski",125478,3,"Informatyka","Inzynier");
    uczen.wypisz();
    student.wypisz();
    return 0;
}
