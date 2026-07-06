#include <iostream>
#include <string>
using namespace std;

int main()
{
  string vegetarian;
  string vegan;
  string glutenfree;
  
  cout << "Is anyone in your party vegetarian?  "; 
  getline(cin, vegetarian);

  if (vegetarian == "yes"|| vegetarian == "no")
  {
      cout << "Is anyone in your party vegan?  ";
      getline(cin, vegan);
      if (vegan == "yes" || vegan == "no")
      {
          cout <<"Is anyone in your party a gluten-free?  ";
          getline(cin, glutenfree);
          if (glutenfree == "yes" || glutenfree == "no")
          {
              cout << "                                   " << endl;
              cout << "Here are you restaurant choices: " << endl;
              cout << "      " << endl;
              
              if (vegetarian == "yes")
              {
                  if (vegan == "yes")
                  {
                      if (glutenfree == "yes" || glutenfree == "no")
                      {
                          cout << " Corner Cafe"<< endl;
                          cout << " The Chef's Kitchen" << endl;
                      }
                  }
                  else
                  {
                      if (glutenfree == "yes")
                      {
                          cout << " Main Street Pizza Company"<< endl;
                          cout << " Corner Cafe"<< endl;
                          cout << " The Chef's Kitchen";
                      }
                      else
                      {
                          cout << " Main Street Pizza Company" << endl;
                          cout << " Corner Cafe" << endl;
                          cout << " Mama's Fine Italian" << endl;
                          cout << " The Chef's Kitchen" << endl;
                      }
                  }
              }
              else
              {
                  if (vegan == "yes")
                  {
                      if (glutenfree == "yes" || glutenfree == "no")
                      {
                          cout << " Corner Cafe "<< endl;
                          cout << " The Chef's Kitchen " << endl;
                      }
                  }
                  else
                  {
                      cout << " Joe's Gourmet Burgers " << endl;
                      cout << " Main Street pizza Company " << endl;
                      cout << " Corner Cafe " << endl;
                      cout << " Mama's Fine Italian " << endl;
                      cout << " The Chef's Kitchen " << endl;
                  }
              }
          }
      }
      else
      {
          cout << "Enter either 'yes' or 'no'!" << endl;
          cout << "Rerun the program and try again." << endl;
      }
  }
  else
  {
      cout << "Enter either 'yes' or 'no'!" << endl;
      cout << "Rerun the program and try again." << endl;
  }
  
  return 0;
}
 
