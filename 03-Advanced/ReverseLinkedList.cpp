#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to reverse the linked list
ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* current = head;
    ListNode* next = nullptr;

    while (current != nullptr) {
        // Store the next node
        next = current->next;

        // Reverse the current node's pointer
        current->next = prev;

        // Move pointers one position ahead.
        prev = current;
        current = next;
    }

    // prev now points to the new head of the reversed list
    return prev;
}

// Helper function to print the linked list
void printList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->val;
        if (current->next != nullptr) {
            cout << " -> ";
        }
        current = current->next;
    }
    cout << " -> @." << endl;
}

// Function to delete the linked list and free memory
void deleteList(ListNode* &head) {
    ListNode* current = head;
    while (current != nullptr) {
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }
    head = nullptr;  // Prevent dangling pointer
}

int main() {
    // Test Case 1: Empty list (0 nodes)
    ListNode* head0 = nullptr;
    cout << "Test Case 1: 0 Nodes" << endl;  
    cout << "Original List: ";
    printList(head0);
    head0 = reverseList(head0);
    cout << "Reversed List: ";
    printList(head0);

    // Test Case 2: Single-node list (1 node)
    ListNode* head1 = new ListNode(1);
    cout << "\nTest Case 2: 1 Node" << endl;
    cout << "Original List: ";
    printList(head1);
    head1 = reverseList(head1);
    cout << "Reversed List: ";
    printList(head1);
    deleteList(head1);

    // Test Case 3: Two-node list (2 nodes)
    ListNode* head2 = new ListNode(1);
    head2->next = new ListNode(2);
    cout << "\nTest Case 3: 2 Nodes" << endl; 
    cout << "Original List: ";
    printList(head2);
    head2 = reverseList(head2);
    cout << "Reversed List: ";
    printList(head2);
    deleteList(head2);

    // Test Case 4: Multi-node list (3 or more nodes)
    ListNode* head3 = new ListNode(1);
    ListNode* current = head3;
    for (int i = 2; i <= 6; ++i) {
        current->next = new ListNode(i);
        current = current->next;
    }
    cout << "\nTest Case 4: 3+ Nodes" << endl; 
    cout << "Original List: ";
    printList(head3);
    head3 = reverseList(head3);
    cout << "Reversed List: ";
    printList(head3);
    deleteList(head3);

    return 0;
}
