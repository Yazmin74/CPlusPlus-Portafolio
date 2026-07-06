#include <iostream>
using namespace std;

const int SIZE = 3;
int * func()
{
int * arrInt = nullptr;
arrInt = new int [SIZE]; // {9,9,9};
arrInt[0] = 9;
arrInt[1] = 9;
arrInt[2] = 9;

int arr [10] = {1, 2, 3, 4, 5, 6 , 7, 8, 9};

return arrInt;


}

int main()
{
int * arr = func();
for (int i = 0; i < SIZE; i++)
{
cout << arr[i] << "\n";
}
delete [] arr;
return 0;
}
