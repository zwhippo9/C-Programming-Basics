//This program calulates distances traveled in the city and on the highway given MPG and size of tank in gallons.
#include <iostream>
using namespace std;

int main(){

   //constants
   const int Num_Of_Gallons = 20;
   const float In_Town_Miles_Per_Gallon = 23.5;
   const float On_The_Highway_Miles_Per_Gallon = 28.9;

   //calulations
   float Town_Distance = Num_Of_Gallons * In_Town_Miles_Per_Gallon;
   float Highway_Distance = Num_Of_Gallons * On_The_Highway_Miles_Per_Gallon;
   cout << endl;

   //In city
    cout << "A car can Travels a Distance in Town" << endl;
    cout << "On a 20 Gallon Gas Tank at 23.5 Miles Per Gallon is: ";
    cout << Town_Distance << " Miles." << endl;
    cout << endl;

   //On Highway
    cout << "A car can Travels a Distance in  Highway" << endl;
    cout << "On a 20 Gallon Gas Tank at 28.9 Miles Per Gallon is: ";
    cout << Highway_Distance << " Miles." << endl;
    cout << endl;

    return 0;
}