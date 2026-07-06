#include <iostream>
using namespace std;

int main()
{

int cashPayment;
int amountTendered;

// Prompt for user Cashpayment amount
cout << "Cash payment amount: $ ";
cin >> cashPayment;
cin.ignore(1000, 10);

// Prompt for Tendered amount
cout << "Tendered Amount: $ ";
cin >> amountTendered;
cin.ignore(1000, 10);
    

while (cashPayment > amountTendered || cashPayment <= 0)
{
    cout << "Error: Cash payment should be less than or equal to the amount tendered (and greater than 0): $ ";
    cin >> cashPayment;
    cin.ignore(1000, 10);
} 

// Calculate the Change Due
int changeDue = amountTendered - cashPayment;


// Validate user input

cout << "Change Due: $ " << changeDue << endl;

int hundredThousands = changeDue / 100000;
changeDue = changeDue % 100000;

int tenThousands = changeDue / 10000;
changeDue = changeDue % 10000;

int fiveThousands = changeDue / 5000;
changeDue = changeDue % 5000;

int thousands = changeDue / 1000;
changeDue = changeDue % 1000;

int fiveHundred = changeDue / 500;
changeDue = changeDue % 500;

int hundred = changeDue / 100;
changeDue = changeDue % 100;

int fifty = changeDue / 50;
changeDue = changeDue % 50;

int twenty = changeDue / 20;
changeDue = changeDue % 20;

int ten = changeDue / 10;
changeDue = changeDue % 10;

int five = changeDue / 5;
changeDue = changeDue % 5;

int two = changeDue / 2;
changeDue = changeDue % 2;

int one = changeDue / 1;
changeDue = changeDue % 1;

cout << "     " << endl;
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

    return 0;
}
