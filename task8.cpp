#include <iostream>
using namespace std;
main(){
float vegprice;
float fruitprice;
int kgsofveg;
int kgsoffruits;
cout <<" Vegetable price per kg: ";
cin >>vegprice;
cout <<" Fruit price per kg: ";
cin >>fruitprice;
cout <<" Total kgs of Vegetables: ";
cin >>kgsofveg;
cout <<"Total kgs of Fruits: ";
cin>>kgsoffruits;
int earning;
earning=(vegprice*kgsofveg)+(fruitprice*kgsoffruits);
cout <<" Total Earning in coins: "<<earning<<endl;
int earninginRps;
earninginRps=earning/1.94;
cout <<"Total Earning in Rps: "<<earninginRps;}
