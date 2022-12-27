#include <iostream>
using namespace std;
main(){
string name;
int adultprice;
int childprice;
int adultticketssold;
int childticketssold;
float percentage;
cout <<"Movie Name: ";
cin >>name;
cout <<"Adult Ticket Price: ";
cin >>adultprice;
cout <<"Child Ticket Price: ";
cin >>childprice;
cout <<"Adult Tickets Sold: ";
cin >>adultticketssold;
cout <<"Child Tickets Sold: ";
cin >>childticketssold;
cout <<"Percentage To Donate: ";
cin >>percentage;
float total;
float afterdonation;
total=(adultprice*adultticketssold)+(childprice*childticketssold);
cout <<"Total Amount: "<<total<<endl;
afterdonation=total-(total*.01);
cout <<"After Donation Amount: "<<afterdonation;}
