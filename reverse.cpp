#include<iostream>
#include<iostream>
#include<algorithm>

using namespace std;

int main(){

string napis;
cin>>napis;
reverse(napis.begin(),napis.end());
cout<<napis<<endl;

random_shuffle(napis.begin(),napis.end());
cout<<napis;
return 0;
}
