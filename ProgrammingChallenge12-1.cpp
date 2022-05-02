/* Jonathan Hall
11/11/2021 */

#include <iostream>
using namespace std;
 

struct CorpData
{
    string name;
    double firstQ;
    double secondQ;
    double thirdQ;
    double fourthQ;
}   north, south, east, west;
 
int main()
{
    double northTotal, southTotal, eastTotal, westTotal,
            aveNorth, aveSouth, aveEast, aveWest;
    
    //North Division
    cout << "North Division" << endl;

    cout << "Enter first quarter sales: ";

    cin >> north.firstQ;

    cout << "Enter second quarter sales: ";

    cin >> north.secondQ;

    cout << "Enter third quarter sales: ";

    cin >> north.thirdQ;

    cout << "Enter fourth quarter sales: ";

    cin >> north.fourthQ;

    cout << endl;

    //South Division
    cout << "South Division" << endl;

    cout << "Enter first quarter sales: ";

    cin >> south.firstQ;

    cout << "Enter second quarter sales: ";

    cin >> south.secondQ;

    cout << "Enter third quarter sales: ";

    cin >> south.thirdQ;

    cout << "Enter fourth quarter sales: ";

    cin >> south.fourthQ;

    cout << endl;

    //East Division
    cout << "East Division" << endl;

    cout << "Enter first quarter sales: ";

    cin >> east.firstQ;

    cout << "Enter second quarter sales: ";

    cin >> east.secondQ;

    cout << "Enter third quarter sales: ";

    cin >> east.thirdQ;

    cout << "Enter fourth quarter sales: ";

    cin >> east.fourthQ;

    cout << endl;

    //West Division
    cout << "West Division" << endl;
    
    cout << "Enter first quarter sales: ";

    cin >> west.firstQ;

    cout << "Enter second quarter sales: ";

    cin >> west.secondQ;

    cout << "Enter third quarter sales: ";

    cin >> west.thirdQ;

    cout << "Enter fourth quarter sales: ";

    cin >> west.fourthQ;

    cout << endl;
    
    //calc Totals
    northTotal = (north.firstQ + north.secondQ + north.thirdQ + north.fourthQ);

    southTotal = (south.firstQ + north.secondQ + north.thirdQ + north.fourthQ);

    eastTotal = (east.firstQ + east.secondQ + east.thirdQ + east.fourthQ);

    westTotal = (west.firstQ + west.secondQ + west.thirdQ + west.fourthQ);
    
    //calc Average
    aveNorth = northTotal / 4;

    aveSouth = southTotal / 4;

    aveEast = eastTotal / 4;

    aveWest = westTotal / 4;
    
    //output
    cout << "Total sales for the North Division is " << northTotal << endl;
    cout << "The average sales for the North Division is " << aveNorth << endl;
    cout << endl;

    cout << "Total sales for the South Division is " << southTotal << endl;
    cout << "The average sales for the South Division is " << aveSouth << endl;
    cout << endl;

    cout << "Total sales for the East Division is " << eastTotal << endl;
    cout << "The average sales for the East Division is " << aveEast << endl;
    cout << endl;

    cout << "Total sales for the West Division is " << westTotal << endl;
    cout << "The average sales for the West Division is " << aveWest << endl;

    return 0;
}
