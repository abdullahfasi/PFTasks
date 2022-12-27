#include <iostream>
using namespace std;
main(){
int initialVelocity;
int finalVelocity;
int time;
int acceleration;
cout <<"Initial Velocity: ";
cin >>initialVelocity;
cout <<"Time: ";
cin >>time;
cout <<"Acceleration: ";
cin >>acceleration;
finalVelocity=acceleration*time+initialVelocity;
cout <<"Final Velocity: "<<finalVelocity;}