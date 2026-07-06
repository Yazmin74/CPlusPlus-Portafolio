#include <iostream>
#include <cstdlib> // Rand and Srand
#include <ctime> // ctime

using namespace std; 
  
//Function to calculate the sum of 2 numbers

void additionProblem(int topNumber, int bottomNumber) 
{ 
  int userAnswer; 
  cout << "\n\n\n      " << topNumber << " + " << bottomNumber << " = "; 
  cin >> userAnswer; 
  cin.ignore(1000, 10); 
  
  int theAnswer = topNumber + bottomNumber; 
  if (theAnswer == userAnswer) {
    cout << "      Correct!" << endl; 
  } else {
    cout << "      Very good, but a better answer is " << theAnswer << endl; 
  }
} // additionProblem 
  
int main() 
{ 
    // Seed the random number generator with Srand
    srand(time (0));
    
    //Variables
    
    const int NUM_QUESTIONS = 5;
    int correctCount = 5;
    int userAnswer;
 
    // Loop for questions 
    for (int i = 1; i <= NUM_QUESTIONS; ++i) 
    {
        //Generate random numbers between 0 and 10 (inclusive)
        
        int num1 = rand() % 11;
        int num2 = rand() % 11;
        
        //Ask the questions to the userAnswer
        
        additionProblem(num1, num2);
        
        //Read the user input
        

        //check if the answer is correct
        
        int theAnswer = num1 + num2; 
        if (userAnswer == theAnswer) 
        {
            cout << "    Correct!" << endl;
            ++correctCount;
        } 
        
    }

  return 0;
  
} // main 


