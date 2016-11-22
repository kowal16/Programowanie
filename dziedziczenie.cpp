#include<iostream>

using namespace std;

class Bazowa
{

public:
    int publiczne;
    Bazowa():publiczne(7),chronione(2),prywatne(9) {};
    Bazowa(int a, int b, int c):publiczne(a),chronione(b),prywatne(c) {};
   virtual void pisz()
    {
        cout<<"Bazowa"<<endl;
    }

protected:
    int chronione;

private:
    int prywatne;

};
class Pochodna:public Bazowa
{
public:
    Pochodna(int my_pub,int my_chr,int my_priv):Bazowa(my_pub,my_chr,my_priv) {};
    void wypisz()
    {
        cout<<publiczne<<" "<<chronione<<endl;
    }
    void pisz(){
        cout<<"Pochodna"<<endl;
    }

};

void test(Bazowa &b)
{
    b.pisz();
}



int main()
{
    Bazowa b;
    cout<<b.publiczne<<endl;
    //cout<<b.chronione<<endl;
    Pochodna c(1,2,3);
    c.wypisz();
    test(b);
    test(c);
    c.pisz();
    return 0;
}
