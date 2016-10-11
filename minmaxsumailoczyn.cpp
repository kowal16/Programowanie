#include <iostream>

using namespace std;


int main()
{
    int n,s=0,ilo=1,max,min,t,i=0;
    cin >>n;
    int *tab=new int [n];
    while(i<n){
        cin>>tab[i];
        i++;

    }
    max = min = tab[0];
for(int z = 0; z < n; z++)
{
    if(tab[z] > max)
        max = tab[z];
    if(tab[z] < min)
        min = tab[z];
        s+=tab[z];
        ilo*=tab[z];

}
cout<<"Max: "<<max<<endl;
cout<<"Min: "<<min<<endl;
cout<<"Suma: "<<s<<endl;
cout<<"Iloczyn: "<<ilo<<endl;


    delete[] tab;
    return( 0 );
}
