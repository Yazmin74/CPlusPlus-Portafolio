#include <iostream>
using namespace std;

int main()
{
  int age;
  cout << "How old are you? "; 
  cin >> age;
  cin.ignore(1000, 10);
  
  if (age < 18) {
  cout << "Hello Wonderful Future!";
 
  } else if(age < 70) {
  cout << "Hello Fantastic Person!";
  
  } else {
  cout << "Hello Most Venerable Person!";
  }
 return 0;
}
