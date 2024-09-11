//This program displays statistics of an Energy Drink company

#include <iostream>
using namespace std;

int main () {

   // constants
   const int Num_of_Customers = 16500;
   const double Percent_of_Customers_Purchase_Energy_Drinks = 0.15;
   const double Percent_of_Customers_Purchase_Citrus_Flavored_Energy_Drinks = 0.58;

   //calulations
   float Total_Customers_Purchase_Energy_Drinks = Num_of_Customers * Percent_of_Customers_Purchase_Energy_Drinks;
   float Total_Customers_Purchase_Citrus_Flavored_Energy_Drinks = Total_Customers_Purchase_Energy_Drinks * Percent_of_Customers_Purchase_Citrus_Flavored_Energy_Drinks;

   //Customers Buy 1+ Drink Per Week
   cout << "The number of customers that buy 1+ energy drink per week is" << endl;  
   cout << Total_Customers_Purchase_Energy_Drinks << endl;
  

   //Customers Purchase Citrus Flavored Energy Drinks
   cout << "Of the customers that but 1+ energy drink per week," << endl;
   cout << Total_Customers_Purchase_Citrus_Flavored_Energy_Drinks << endl;
   cout << "prefer citrus flavored drinks"  <<endl;

   return 0;
}