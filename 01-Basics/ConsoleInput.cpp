#include <iostream>
#include <string>
using namespace std;

int main()
{
  int age;
  cout << "How old are you? "; 
  cin >> age;
  cin.ignore(1000, 10);

  string fullname;
  cout << "What is your full Name? "; 
  getline(cin, fullname);
  
  double temperature;
  cout << "What is the temperature outside right now in degrees F? "; 
  cin >> temperature;
  cin.ignore(1000, 10);
  
  string city;
  cout << "Which city do you live in? "; 
  getline(cin, city);
 
  
  cout <<"                                       " << endl;
  cout << fullname << " is " << age << " years old." << endl; 
  cout << "It is " << temperature << " degrees F in " <<city << endl; 

 }

