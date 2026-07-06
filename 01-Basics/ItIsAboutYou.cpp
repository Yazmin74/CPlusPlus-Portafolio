#include <iostream>
#include <string>
using namespace std;

int main()
{
  string firstname;
  cout << "What is your First Name? "; 
  getline(cin, firstname);
 
  string lastname;
  cout << "What is your last Name? "; 
  getline(cin, lastname);
  
  int streetNumber;
  cout << "What is your street Number? "; 
  cin >> streetNumber;
  cin.ignore(1000, 10);
  
  string streetName;
  cout << "What is your street Name? "; 
  getline(cin, streetName);
 
  
  string city;
  cout << "City: "; 
  getline(cin, city);
  
  string state;
  cout << "State: "; 
  getline(cin, state);
  
  
  int ZIPcode;
  cout << "Zipcode: "; 
  cin >> ZIPcode;
  cin.ignore(1000, 10);
  
  cout <<"                                       " << endl;
  cout << firstname << " " << lastname << endl; 
  cout << streetNumber << " " << streetName << endl; 
  cout << city << ", " << state << " " << ZIPcode << endl; 
  
 }
