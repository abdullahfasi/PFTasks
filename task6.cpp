#include <iostream>
using namespace std;
main()
{
  float studio,apartment;  

  string month;
  int stays;
  cout << "month is: ";
  cin >>month;
  cout << "number of stays: ";
  cin >>stays;
  if(month == "may" || month =="october")
  {
   studio = 50 * stays;
   apartment = 65 * stays;
   if(stays > 7 && stays <= 14)
   {
    studio = studio - (studio*.05);
   cout << "Studio: "<<studio<<endl;
   }  
    if(stays > 14 )
   {
    studio = studio - (studio*.3);
   cout << "Studio: "<<studio<<endl;
   }  
   if(stays <7) 
   {
    cout << "studio: "<<studio<<endl;
   }
}
 if(month == "june" || month =="september")
  {
   studio = 75.20 * stays;
   apartment = 68.70 * stays;
   if(stays >14 )
   {
    studio = studio - (studio *.2);
    cout <<"studio: "<<studio<<endl;   
   }
   if(stays <=14)
   {
    cout << "studio "<<studio<<endl;
   }
}
if(month == "july" || month =="august")
  {
   studio = 76 * stays;
   apartment = 77 * stays;
   cout <<"studio: "<<studio<<endl;
}
 if(month=="may" || month =="october" || month == "june" || month=="september" || month =="july" || month =="august")
 {
  if(stays >14)
  {
    apartment = apartment - (apartment * .1);
    cout << "apartment : "<<apartment;
  }
  if(stays <=14)
  {
    cout <<"apartment : "<<apartment;
  }
 }
}