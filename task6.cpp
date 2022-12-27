#include <iostream>
using namespace std;
main(){
int sizeofbag;
int costofbag;
int areainsquarefeet;
cout <<"Size of fertilizer bag in pounds: ";
cin >>sizeofbag;
cout <<"Cost of the bg: ";
cin >>costofbag;
cout <<"Area covered by each bag in square feet: ";
cin >>areainsquarefeet;
int costoffertilizer;
int costpersquarefeet;
costoffertilizer=costofbag/sizeofbag;
cout <<"Cost of fertilizer per pound: "<<costoffertilizer<<endl;
costpersquarefeet=costofbag/areainsquarefeet;
cout <<"Cost of fertilizing area sper square feet: "<<costpersquarefeet;}