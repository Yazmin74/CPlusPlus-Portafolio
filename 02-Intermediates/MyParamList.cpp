#include <iostream> 
#include <iomanip> // For setprecision

using namespace std; 
  
double calcAverage(int a, int b, int c) 
{ 
  double result = (a + b + c) /3.0; 
  return result; 
  
} // calcAverage 
  
int main() 
{ 
  int w, x, y;
    
  // Prompt for the user to input the three whole numbers
  cout << "Enter The First Whole Number: ";
  cin >> w; 
  
  cout << "Enter The Second Whole Number: ";
  cin >> x;
  
  cout << "Enter The Third Whole Number: ";
  cin >> y;
  
  // Let's calculate the average
  
  double z = calcAverage(w, x, y); 
  
  //display the result
  cout << fixed <<setprecision (2);
  cout << "\nThe Average is: " << z << endl;
  
  return 0;
   
} // main 
