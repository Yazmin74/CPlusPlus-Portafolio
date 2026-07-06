#include <iostream>
using namespace std;

int main ()
{
    int addition;
    cout << "15 + 18 =  ";
    cin >> addition;
    cin.ignore(1000, 10);
    
    if (addition == 33) {
        cout << "Good Job! Your answer is correct!" << endl;
    }
        else {
            cout << "Nice Try! But the correct answer is 33." << endl;
    } 
    
    int substraction;
    cout << "45 - 30 =  ";
    cin >> substraction;
    cin.ignore(1000, 10);
    
    if (substraction == 15) {
        cout << "Good Job! Your answer is correct!" << endl;
    }
        else {
            cout << "Nice Try! But the correct answer is 15. " << endl;
    }
    
    int addition2;
    cout << "34 + 15 =  ";
    cin >> addition2;
    cin.ignore(1000,10);
    
    if (addition2 == 49) {
        cout << "Good Job! Your answer is correct!" << endl;
    }
        else {
        cout << "Nice Try! But the correct answer is 49.";
    } 
 return 0;
    
}
