#include <iostream>
using namespace std;
main()
{
    int day;
    string month;
    cout << " Date = ";
    cin >>day;
    cout << "Month = ";
    cin >>month;
    if (month == "march " || month == "april")
    {
        if (day >=21 && day <=31 || day <= 19)
        cout << "aries";
    }
    else if (month == "april " || month == "may")
    {
        if (day >=20 && day <=30 || day <= 20)
        cout << "taurus";
    }
    else if (month == "may " || month == "june")
    {
        if (day >=21 && day <=30 || day <= 20)
        cout << "gemini";
    }
    else if (month == "june " || month == "july")
    {
        if (day >=21 && day <=30 || day <= 22)
        cout << "cancer";
    }
    else if (month == "july " || month == "august")
    {
        if (day >=23 && day <=30 || day <= 22)
        cout << "Leo";
    }
    else if (month == "august " || month == "september")
    {
        if (day >=23 && day <=30 || day <= 22)
        cout << "virgo";
    }
    else if (month == "september " || month == "october")
    {
        if (day >=23 && day <=30 || day <= 22)
        cout << "libra";
    }
    else if (month == "october " || month == "november")
    {
        if (day >=23 && day <=30 || day <= 21)
        cout << "scorpio";
    }
    else if (month == "november " || month == "december")
    {
        if (day >=22 && day <=30 || day <= 21)
        cout << "sagittarius";
    }
    else if (month == "december " || month == "january")
    {
        if (day >=22 && day <=30 || day <= 19)
        cout << "capricorn";
    }
    else if (month == "january " || month == "february")
    {
        if (day >=20 && day <=30 || day <= 18)
        cout << "aquarius";
    }
    else if(month == "february " || month == "march")
    {
        if (day >=19 && day <=30 || day <= 20)
        cout << "pisces";
    }
}