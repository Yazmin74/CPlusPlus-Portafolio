#include <iostream>
#include <vector>
#include <list>
#include <random>

using namespace std;

class HashMgr {
    private: 
         vector<list<int>> hashTable;
         int tableSize;
         
    public: 
        HashMgr() : tableSize(107), hashTable(107) {
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<> distrib (1, 1000);
            
            for (int i = 0; i < 100; ++i) {
                int num = distrib(gen);
                int index = num % tableSize;
                hashTable[index].push_front(num);
            }
        }
    void displayAll() {
        for (int i = 0; i < tableSize; ++i) {
            cout << "Bucket #" << i << " - ";
            for (int num : hashTable[i]) {
                cout << num << " -> ";
            }
            cout << "@" << endl;
        }
    }
    
    void noOfKeyComparisons(int x) {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> distrib(0, 1000);
        
        for (int i = 0; i < x; ++i) {
            int searchNum = distrib (gen);
            int index = searchNum % tableSize;
            int comparisons = 0;
            bool found = false;
            
            for (int num : hashTable[index]) {
                comparisons++;
                if (num == searchNum) {
                    cout << searchNum << " - Found in Bucket#" << index << " - Number of Key Comparisons = " << comparisons << endl;
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << searchNum << " - Not found" << endl;
            }
        }
    }
};

int main () {
    HashMgr hm;
    hm.displayAll();
    hm.noOfKeyComparisons(3);
    return 0;
}
