#include <iostream>
using namespace std;
main()
{
    int starthour,startmint,arrivalhour,arrivalmint,mints,hours;
    cout <<"Exam starting time:  ";
    cin >>starthour;
     cout <<"Exam starting time:  ";
    cin >>startmint;
    cout <<"student arrival hour: ";
    cin >>arrivalhour;
    cout <<"student arrival minutes: ";
    cin >>arrivalmint;
    if ( starthour > arrivalhour)
    {
        hours = starthour - arrivalhour;
    if ( arrivalmint > startmint)
    {
         mints = (60 - arrivalmint) +startmint;
          if( mints<=30 )
          {
            cout <<" on time "<<endl;
            cout <<" "<<mints<<"minutes before start";
          }
          else
          {
            cout <<"early"<<endl;
            cout <<" "<<mints<<"minutes before start";
          }
        }
     if (arrivalmint <= startmint )
     {
        mints = startmint - arrivalmint ;
        cout << "early"<<endl;
        cout <<" "<<hours<<" : "<<" "<<mints<<" hours before start";
     }   
    }
    if( starthour == arrivalhour )
    {
     if(startmint == arrivalmint) 
    {
        cout << "on time";
    }
    if( startmint < arrivalmint )
    {
        mints = arrivalmint - startmint;
        cout <<"late"<<endl;
        cout <<" "<<mints<<"minutes after start ";
    }
    }
    if( starthour < arrivalhour)
    {
        hours = arrivalhour - starthour;
        if( startmint > arrivalmint)
        {
            mints = (60 - startmint) + arrivalmint;
            cout <<"late"<<endl;
            cout << " "<<mints<<"minutes after start";
        }
        if ( startmint < arrivalmint)
        {
            mints = arrivalmint - startmint;
            cout <<"late"<<endl;
            cout << " "<<hours<<" : "<<" "<<mints<<" hours after start";
        }
    }
    }