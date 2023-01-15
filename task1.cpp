#include <iostream>
using namespace std;
main()
{
    string temperature,humidity;
    cout << "Temperature is : ";
    cin >>temperature;
    cout << "Humidity is : ";
    cin >>humidity;
    if(temperature == "warm" && humidity == "dry")
    cout <<  "Play Tennis";
     if(temperature == "warm" && humidity == "humid")
    cout <<  "Swim";
     if(temperature == "cold" && humidity == "dry")
    cout <<  "Play Basketball";
     if(temperature == "cold" && humidity == "humid")
    cout <<  "Watch tv ";
    
    
}