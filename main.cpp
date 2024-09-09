//This program calulates distances traveled in the city and on the highway given MPG and size of tank in gallons.
#include <iostream>
using namespace std;

int main(){

   //constants
   const int Num_Of_Gallons = 20;
   const float MPG_In_Town = 23.5;
   const float MPG_On_Highway = 28.9;

   //calulations
   float Town_Distance = Num_Of_Gallons * MPG_In_Town;
   float Highway_Distance = Num_Of_Gallons * MPG_On_Highway;
   cout << endl;

   //In city
    cout << "The distance a car can travel in the city on a 20 gallon tank averaging 23.5 miles per gallon is" << endl;
    cout << Town_Distance << " Miles." << endl;
    cout << endl;

   //On Highway
    cout << "The distance a car can travel on the highway on a 20 gallon tank averaging 28.9 miles per gallon is" << endl;
    cout << Highway_Distance << " Miles." << endl;
    cout << endl;

    return 0;
}