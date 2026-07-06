#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
 // define the Temperatures
 int temp [] = {74, 85, 75, 73, 81};
 int n = sizeof(temp) / sizeof(temp[0]);
 
 //Sort the array
 sort(temp, temp + n);

 // Display The Header
cout << "Pleasant Hill, California, Forecast High Temperatures: " << endl;
cout << "  " << endl;

 // Display the temperatures 
string days [] = {"Monday, Sep 25", "Tuesday, Sep 26,", "Wednesday, Sep 27", "Thursday, Sep 28", "Friday, Sep 29"};
for (int i = 0; i < n; ++i){
    cout << days[i] << ", " << temp[i] << " degrees" << endl;
}

// Max and Min Temperatures
int max_temp = temp[n-1];
int min_temp = temp[0];

cout << "   " << endl;
cout << "The High For The Week is: " << max_temp << " degrees" << endl;
cout << "The Low For The Week is " << min_temp << " degrees" << endl;

// Display the source
cout << "  "<< endl;
cout << "source: www.todaysweather.com " << endl;

return 0;
}
