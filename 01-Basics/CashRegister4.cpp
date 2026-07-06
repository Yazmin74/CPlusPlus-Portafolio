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

//Output: Display the results

cout << "Change Due: $" << changeDue << endl;
cout << "     " << endl;
cout << "Change paid out in: " << endl;

// Number of bills

int hundredThousands = remainingChange / 100000;
remainingChange %= 100000;
if (hundredThousands > 0){
    cout << "   This many hundred thousand dollar bills: " << hundredThousands << endl;
} //hundred thousands

int tenThousands = remainingChange / 10000;
remainingChange %=  10000;
if (tenThousands > 0){
    cout << "   This many ten thousand dollar bills: " << tenThousands << endl;
} // Ten Thousands  

int fiveThousands = remainingChange / 5000;
remainingChange %=  5000;
if (fiveThousands > 0){
    cout << "   This many five thousand dollar bills: " << fiveThousands << endl;
} // five thousands

int thousands = remainingChange / 1000;
remainingChange %=  1000;
if (thousands > 0){
    cout << "   This many thousands dollar bills: " << thousands << endl;
} // thousands

int fiveHundred = remainingChange / 500;
remainingChange %=  500;
if (fiveHundred > 0){
    cout << "   This many five hundred dollar bills: " << fiveHundred << endl;
} // five hundreds

int hundred = remainingChange / 100;
remainingChange %=  100;
if (hundred > 0){
    cout << "   This many hundred dollar bills: " << hundred << endl;
} // hundreds

int fifty = remainingChange / 50;
remainingChange %= 50;
if (fifty > 0){
    cout << "   This many fifty dollar bills: " << fifty << endl;
} // fifties

int twenty = remainingChange / 20;
remainingChange %=  20;
if (twenty > 0){
    cout << "   This many twenty dollar bills: " << twenty << endl;
} // Twenties

int ten = remainingChange / 10;
remainingChange %=  10;
if (ten > 0){
    cout << "   This many ten dollar bills: " << ten << endl;
} // Tens

int five = remainingChange / 5;
remainingChange %=  5;
if (five > 0){
    cout << "   This many five dollar bills: " << five << endl;
} // fives

int two = remainingChange / 2;
remainingChange %=  2;
if (two > 0){
    cout << "   This many two dollar bills: " << two << endl;
} // Twos

int one = remainingChange / 1;
remainingChange %=  1;
if (one > 0){
    cout << "   This many one dollar bills: " << one << endl;
} // Ones


    return 0; // Exit
    
} // Int Main
