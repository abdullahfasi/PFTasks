#include <iostream>
using namespace std;
main()
{
    char type;
    char call;
    int mints;
  
    float charges;
    float extraAmount;
    cout << "type is: ";
    cin >>type;
    cout << "pres d for day and n for night : ";
    cin >>call;
    cout << "mints you used the service:  ";
    cin >>mints;
    
    if (type == 'r')
    {
        float initialCharges = 10.0;
        if (mints <= 50)
        {
    
      cout << "Charges are : "<<initialCharges<<"$";
        }
       if(mints > 50 )
       {
      
      extraAmount = .20 * (mints - 50) ;
     charges = initialCharges + extraAmount;
      cout << "Charges are : "<<charges<<"$";
    }
    }
    if (type == 'p' && call == 'd')
    { 
      float initialCharges = 25.00;
        if(mints <= 75)
        {
         
          cout << "Charges are : "<<initialCharges<<"$";
        }
        else if (mints >75)
        {
        
         extraAmount = .10 * (mints - 75) ;
        charges = 25.00 + extraAmount ; 
        cout <<"Charges are : "<<charges<<"$";
    
        }
    }
    
         if ( type == 'p' && call == 'n')
         {
         float initialCharges = 25.00;
        if(mints <= 100)
        {
          
          cout << "Charges are : "<<initialCharges<<"$";
        }
         
         if (mints >100)
        {
         
         extraAmount = .05 * (mints - 100) ;
        charges = 25.00 + extraAmount ; 
        cout <<"Charges are : "<<charges<<"$";
    }
         }
}