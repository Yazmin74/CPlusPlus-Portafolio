#include <iostream>
using namespace std;

int main()
{
  float celsius;
  cout << "What is the temperature Celsius (Cº)? "; 
  cin >> celsius;
  cin.ignore(1000, 10);
  
  float fahrenheit = celsius*9.0/5.0+32;
  cout <<celsius<< "º" << " Celsius equals to " << fahrenheit << "º Fahrenheit." << endl;

return 0;
 }
