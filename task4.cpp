#include <iostream>
using namespace std;
main(){
int subject1marks;
int subject2marks;
int subject3marks;
int subject4marks;
int subject5marks;
int sum;
float percentage;
cout <<"Subject1 Marks: ";
cin >>subject1marks;
cout <<"Subject2 Marks: ";
cin >>subject2marks;
cout <<"Subject3 Marks: ";
cin >>subject3marks;
cout <<"Subject4 Marks: ";
cin >>subject4marks;
cout <<"Subject5 Marks: ";
cin >>subject5marks;
percentage=(subject1marks+subject2marks+subject3marks+subject4marks+subject5marks)*100/500;
cout <<"Percentage= "<<percentage;}