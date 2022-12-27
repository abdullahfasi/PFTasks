#include <iostream>
using namespace std;
main(){
int sum,num1,num2,num3,num4,digit4,div1,div2,div3;
cout <<"Four Digit Number: ";
cin >>digit4;
num1=digit4%10;
div1=digit4/10;
num2=div1%10;
div2=div1/10;
num3=div2%10;
div3=div2/10;
num4=div3%10;
sum=num1+num2+num3+num4;
cout <<"Sum= "<<sum;}