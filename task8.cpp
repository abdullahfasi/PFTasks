#include <iostream>
using namespace std;
main()
{
    int h,x,y;
    cout << "integr h: ";
    cin >>h;
    cout <<"coordinate x: ";
    cin >>x;
    cout <<"coordinate y: ";
    cin>>y;
    if( x >= h*1 || x <= h*3 || y <= h*0 || y >= h*8)
    {
        if( x >h*1 && x < h*2 && y >h*0 && y < h*4)
        {
            cout << "Inside";
        }
        if( x ==h*1 || x == h*2 || y== h*0 || y == h*4)
        {
            cout << "Border";
        }
    }
    if( x< h*1 || x > h*3 || y > h*4)
    {
        cout << "Outside ";
    }
}