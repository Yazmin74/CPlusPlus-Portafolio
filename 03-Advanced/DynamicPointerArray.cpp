#include <iostream>
using namespace std;


const int SIZE = 10;
int ** getRandomInt() // Allocating memory
{
   int** pp = new int*[SIZE];
   srand (time(0));
   for (int i = 0; i < SIZE; ++i) {
       pp[i] = new int(rand() % 100); // Generating randoms numbers
   }
   return pp;   
}
void displayInt(int ** pp) // Accesing the memory
{
   for (int i = 0; i < SIZE; ++i) {
       cout << *pp [i] << " ";
   }
   cout << endl;   
}
void deleteInt(int ** pp)  // Releasing the memory
{
   for (int i = 0; i < SIZE; ++i)
   {
       delete pp[i];
   }
   delete[] pp;  
}

int main()
{
    int ** pp = getRandomInt();
    displayInt(pp);
    deleteInt(pp);
    return 0;
}
