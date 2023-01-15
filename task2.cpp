#include <iostream>
using namespace std;
 string grade(float percentage) ;
main()
{
    string name;
    int totalMarks,subject1Marks,subject2Marks,subject3Marks,subject4Marks,subject5Marks;
   
    cout << "Name is : ";
    cin >>name;
    cout <<"Marks in english: ";
    cin >>subject1Marks;
     cout <<"Marks in maths: ";
    cin >>subject2Marks;
     cout <<"Marks in chemistry: ";
    cin >>subject3Marks;
     cout <<"Marks in socila science: ";
    cin >>subject4Marks;
     cout <<"Marks in biology: ";
    cin >>subject5Marks;
    totalMarks = subject1Marks + subject2Marks + subject3Marks + subject4Marks + subject5Marks;
     cout << "Total Marks is: "<<totalMarks<<endl;
    float percentage = totalMarks *100 /500;
    cout << "percentage is :    "<<percentage<<endl;
     cout << grade( percentage) ;
     }
    string grade(float percentage) 
    {
     if (percentage >=91 || percentage == 100)
    return "A+" ;
     if (percentage >=81 || percentage == 90)
    return "A" ;
     if (percentage >=71 || percentage == 80)
    return "B+" ;
     if (percentage >=61 || percentage == 70)
    return "B" ;
     if (percentage >=51 || percentage == 60)
    return "C" ;
     if (percentage >=41 || percentage == 50)
    return "D" ;
     if (percentage <40)
    return "F" ;
   
 }