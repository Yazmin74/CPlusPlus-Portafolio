#include <iostream>
using namespace std;

//Function prototypes

void getScore (int& score);
void calcAverage (int score1, int score2, int score3, int score4, int score5);
int findLowest (int score1, int score2, int score3, int score4, int score5);

int main () {
 
 // Define an array of fixed 5 to store the scores   
    int score [5];
    string place [] = {"the first", "the second", "the third", "the forth", "the fifth"};
 
 // Prompt to get the scores by the user
    for (int i = 0; i < 5; ++i){
        cout << "Enter " << place[i] << " test score: ";
        cin >> score[i];
        getScore(score[i]);
    }
    
 // Calculate average (dropping the lowest score)
    calcAverage (score [0], score[1], score[2], score[3], score[4]);
    
    return 0;
    
}//Main

//function to get a test score
void getScore(int& score) {
    
    while (score < 0 || score > 100) {
    if (score < 0) {
        cout << "    " << endl;
        cout << "The program stopped because a negative test score was entered, and negative test scores are not allowed." << endl;
        exit (1);
    } 
    else if (score > 100){
        cout << "     "<< endl;
        cout << "The program stopped because a test score greater than 100 was entered, and test scores greater than 100 are not allowed." << endl;
        exit (1);
    }
        // while loop
} 
}// void getScore function

// Function to calculate average ( Dropping the lowest score)

void calcAverage (int score1, int score2, int score3, int score4, int score5) {
    int lowestScore = findLowest(score1, score2, score3, score4, score5);
    double average = (score1 + score2 + score3 + score4 + score5 - lowestScore) / 4.0;
    cout << "  " << endl;
    cout << "Average of the four highest test scores is: " << average << "." << endl;
    
} // void calcAverage function

// find the lowest scores
int findLowest (int score1, int score2, int score3, int score4, int score5) {
    int lowest = score1;
    if (score2 < lowest) lowest = score2;
    if (score3 < lowest) lowest = score3;
    if (score4 < lowest) lowest = score4;
    if (score5 < lowest) lowest = score5;
    return lowest;
    
} //Find lowest score
