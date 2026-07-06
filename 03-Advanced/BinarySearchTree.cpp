#include <iostream>
#include <set>
#include <vector>
#include <algorithm> // for shuffle
#include <random>
#include <ctime>
#include <iomanip>

using namespace std;

/*
Discussion:

1. What is the time complexity when locating a record in a Binary Tree?
   - Average case: O(log n)
   - Worst case (unbalanced tree): O(n)

2. What would be the estimated number of key comparisons if the number of nodes in the tree is 100?
   - log₂(100) ≈ 6.64 comparisons on average for a balanced BST.

3. Compare the estimated number with x11 that you obtained from Part 1. Are these two numbers close?
   - Yes, if the BST is randomly built and reasonably balanced, the average comparisons should be close to the estimate.

4. When a tree is not balanced, the worst case may occur. What should be done to avoid the worst cases from happening?
   - Use self-balancing trees like AVL or Red-Black Trees to maintain tree height at O(log n).
*/

struct TreeNode {
    int key;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int k) : key(k), left(nullptr), right(nullptr) {}
};

class BST {
public:
    TreeNode* root;

    BST() {
        root = nullptr;
    }

    void insert(int key) {
        root = insertRecursive(root, key);
    }

    pair<bool, int> search(int key) {
        return searchRecursive(root, key, 0);
    }

private:
    TreeNode* insertRecursive(TreeNode* node, int key) {
        if (!node) return new TreeNode(key);
        if (key < node->key)
            node->left = insertRecursive(node->left, key);
        else if (key > node->key)
            node->right = insertRecursive(node->right, key);
        return node;
    }

    pair<bool, int> searchRecursive(TreeNode* node, int key, int comparisons) {
        if (!node) return {false, comparisons};  // No comparison here — node is null

        comparisons++; // We are comparing keys now
        if (key == node->key)
            return {true, comparisons};
        else if (key < node->key)
            return searchRecursive(node->left, key, comparisons);
        else
            return searchRecursive(node->right, key, comparisons);
    }
};

vector<int> generateUniqueRandomNumbers(int count, int range) {
    set<int> uniqueNumbers;
    while (uniqueNumbers.size() < count) {
        uniqueNumbers.insert(rand() % range + 1);
    }
    vector<int> numbers(uniqueNumbers.begin(), uniqueNumbers.end());
    
    // Shuffle to avoid insertion in sorted order
    shuffle(numbers.begin(), numbers.end(), default_random_engine(time(0)));
    
    return numbers;
}

int main() {
    srand(time(0));

    BST bst;
    vector<int> numbers = generateUniqueRandomNumbers(100, 500);

    // Insert shuffled numbers into BST
    for (int num : numbers)
        bst.insert(num);

    // Search for 10 random targets
    cout << left << setw(6) << "#" << setw(15) << "Comparisons" << "Result" << endl;
    double totalComparisons = 0.0;

    for (int i = 1; i <= 10; ++i) {
        int target = rand() % 500 + 1;
        auto result = bst.search(target);
        totalComparisons += result.second;
        cout << left << setw(6) << i << setw(15) << result.second << (result.first ? "Found" : "Not found") << endl;
    }

    cout << fixed << setprecision(2);
    cout << "\nAverage Comparisons: " << totalComparisons / 10 << endl;

    return 0;
}
