#include <iostream>
using namespace std;

int main () {
    //Declare variables
    int cashPayment;
    int tenderedAmount;
    int changeDue;
    int remainingChange;
    
    //Input: Get user input for cash payment and tendered tendered Amount
    cout << "Cash Payment Amount: $";
    cin >> cashPayment;
    
    cout << "Tendered Amount: $";
    cin >> tenderedAmount;
    
    //Validate input
    if (cashPayment <= 0 || cashPayment > tenderedAmount) {
        cout << "Error: Cash Payment should be positive and less than or equal to the Tendered Amount." << endl;
        return 1;
    }
    
//Calculate Change Due
    
changeDue = tenderedAmount - cashPayment;
remainingChange = changeDue;

// Number of bills

int hundredThousands = remainingChange / 100000;
remainingChange %= 100000;

int tenThousands = remainingChange / 10000;
remainingChange %=  10000;

int fiveThousands = remainingChange / 5000;
remainingChange %=  5000;

int thousands = remainingChange / 1000;
remainingChange %=  1000;

int fiveHundred = remainingChange / 500;
remainingChange %=  500;

int hundred = remainingChange / 100;
remainingChange %=  100;

int fifty = remainingChange / 50;
remainingChange %= 50;

int twenty = remainingChange / 20;
remainingChange %=  20;

int ten = remainingChange / 10;
remainingChange %=  10;

int five = remainingChange / 5;
remainingChange %=  5;

int two = remainingChange / 2;
remainingChange %=  2;

int one = remainingChange / 1;
remainingChange %=  1;

//Output: Display the results

cout << "     " << endl;
cout << "Change Due: " << changeDue << endl;
cout << "Change paid out in: " << endl;
cout << "                        " << endl;
cout << "   This many hundred thousand dollar bills: " << hundredThousands << endl;
cout << "   This many ten thousand dollar bills: " << tenThousands << endl;
cout << "   This many five thousand dollar bills: " <<fiveThousands << endl;
cout << "   This many thousand dollar bills: " <<thousands << endl;
cout << "   This many five hundred dollar bills: " <<fiveHundred << endl;
cout << "   This many hundred dollar bills: " <<hundred << endl;
cout << "   This many fifty dollar bills: " <<fifty << endl;
cout << "   This many twenty dollar bills: " <<twenty << endl;
cout << "   This many ten dollar bills: " <<ten << endl;
cout << "   This many five dollar bills: " <<five << endl;
cout << "   This many two dollar bills: " <<two << endl;
cout << "   This many one dollar bills: " <<one << endl;

    return 0; // Exit
    
} // Main
