#include<iostream>

using namespace std;

class A {

int p;
friend void wypisz (A a);
friend ostream &operator<<(ostream &ekran, A a1);
public:
A():p(1){};


};
void wypisz (A a){
    cout<<a.p;
}

ostream & operator <<(ostream & ekran, A a1 ){
    ekran<<"Wartosc ";
    ekran<<"pola p ";
    ekran<<"jest nowa";
    ekran<<endl;
}

int main(){

A a;
A a1;
wypisz(a);
cout<<a1;

return 0;
}
