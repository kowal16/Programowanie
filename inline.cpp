#include <iostream>

int a,b;

using namespace std;
inline void zamien(int,int)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

}

int main()
{

    cout<<"Podaj a: "<<endl;
    cin>>a;
    cout<<"Podaj b: "<<endl;
    cin>>b;
    zamien(a,b);
    cout<<"Zamienione liczby: "<<a<<" "<<b<<endl;

    return( 0 );
}
