#include <iostream>
using namespace std;

int main()
{
 // define an array of fixed size 5 to store temperatures
 int temp [5];
 string days [] = {"Monday, Sep 25", "Tuesday, Sep 26,", "Wednesday, Sep 27", "Thursday, Sep 28", "Friday, Sep 29"};
 string city = "Pleasant Hill ";
 
 // Prompt the user for Temperatures
 for (int i = 0; i < 5; ++i) {
     cout << "Enter the High for " << city << " on " << days[i]<< ": ";
     cin >> temp[i];
 }
 
// Find the maximum and minimum 

int max_temp = temp[0];
int min_temp = temp[0];
int count_max = 1; //Initialize count_max to 1
int count_min = 1; //Initialize count_max to 1

for (int i = 1; i < 5; ++i) {
    if(temp[i] > max_temp) {
       max_temp = temp[i];
       count_max = 1;
    }
    else if (temp [i] == max_temp) {
        count_max++; // Increment count_max
    }
    
    if(temp[i]< min_temp) {
       min_temp = temp [i];
       count_min = 1;
    }
    else if (temp[i] == min_temp) {
        count_min++; // Increment count_min
    }
} // for loop

// Display the Temperatures and counts
cout << "   " << endl;
cout << city << "Forecast High temperatures: " << endl;
for (int i = 0; i < 5; ++i) {
    cout << days [i] <<", "<< temp[i] << " degrees" << endl;
}

cout << "   " << endl;
cout << "The High For The Week is: " << max_temp << " degrees, ocurring ";
if (count_max == 1) {
    cout << "once" << endl;
}
else {
    cout << count_max << " times" << endl;
}
cout << "The Low For The Week is: " << min_temp << " degrees, ocurring ";
if (count_min == 1) {
    cout << "once" << endl;
}
else {
    cout << count_min << " times" << endl;
}

return 0;

}//Main


