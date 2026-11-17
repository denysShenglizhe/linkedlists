/**
 * ============================================================
 * Assignment: Working with Singly Linked Lists
 * ============================================================
 *
 * Instructions:
 * - Node and printList() are already done for you. Study them!
 * - Complete every function marked TODO.
 * - Do NOT change any function name, parameter, or return type.
 * - Do NOT use std::list, std::vector, or any STL container.
 * - main() runs tests. Compare your output with the "Expected" lines.
 *
 * Compile: g++ -std=c++17 linkedlist_starter.cpp -o linkedlist
 * Run: ./linkedlist
 * ============================================================
 */

#include <iostream>
using namespace std;

/** The Node structure (DONE). */
struct Node
{
    int data;   /**< The value stored in this node. */
    Node *next; /**< Pointer to the next node, or nullptr if this is last. */

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

/**
 * Prints the list in the form 10 -> 20 -> 30 -> NULL.
 * @param head Pointer to the first node.
 * @return void
 */
void printList(Node *head)
{
    Node *current = head;
    while (current != nullptr)
    {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

/** PART A: Basic operations. */

/**
 * Counts the nodes in the list.
 * @param head Pointer to the first node.
 * @return int Number of nodes in the list.
 */
int getLength(Node *head)
{
    // TODO
    Node * current =head;
    int counter =0;
    while(current!=nullptr){
        counter+=1;
        current =current->next;
    }
    return counter;
    return 0;
}

/**
 * Adds a node containing value to the front of the list.
 * @param head Reference to the pointer to the first node.
 * @param value Value to store in the new node.
 * @return void
 */
void insertAtFront(Node *&head, int value)
{
    // TODO
    Node* front =Node(value);
    Node-> next =head ;
    head =Node;
    
}

/**
 * Adds a node containing value to the end of the list.
 * @param head Reference to the pointer to the first node.
 * @param value Value to store in the new node.
 * @return void
 */
void insertAtEnd(Node *&head, int value)
{
    // TODO
}
/**
 * Runs the linked-list test cases.
 * @return int Process exit status; 0 indicates success.
 */

/**
 * Inserts value at position, where index 0 is the front. Positions at or below
 * zero insert at the front; positions at or beyond the length insert at the end.
 * @param head Reference to the pointer to the first node.
 * @param value Value to store in the new node.
 * @param position Index at which to insert the value.
 * @return void
 */
void insertAtPosition(Node *&head, int value, int position)
{
    // TODO
}

/**
 * Checks whether value occurs in the list.
 * @param head Pointer to the first node.
 * @param value Value to search for.
 * @return bool true if value is present; otherwise, false.
 */
bool search(Node *head, int value)
{
    // TODO
    return false;
}

/** PART B: Deleting nodes. Remember to use delete. */

/**
 * Removes the first node, if the list is not empty.
 * @param head Reference to the pointer to the first node.
 * @return void
 */
void deleteFront(Node *&head)
{
    // TODO
}

/**
 * Removes the last node, if the list is not empty.
 * @param head Reference to the pointer to the first node.
 * @return void
 */
void deleteEnd(Node *&head)
{
    // TODO
}

/**
 * Removes the first node whose data equals value.
 * @param head Reference to the pointer to the first node.
 * @param value Value to remove.
 * @return bool true if a node was removed; otherwise, false.
 */
bool deleteValue(Node *&head, int value)
{
    // TODO
    return false;
}

/** PART C: Thinking harder. */

/**
 * Removes duplicate values from the unsorted list, keeping the first occurrence.
 * @param head Pointer to the first node.
 * @return void
 */
void removeDuplicates(Node *head)
{
    // TODO
}

/**
 * Reverses the list in place without creating new nodes.
 * @param head Reference to the pointer to the first node.
 * @return void
 */
void reverseList(Node *&head)
{
    // TODO
}

/**
 * Finds the middle value, using the second middle for an even-length list.
 * @param head Pointer to the first node.
 * @return int Middle node's value, or -1 if the list is empty.
 */
int findMiddle(Node *head)
{
    // TODO
    return -1;
}

/**
 * Sums the values in the list.
 * @param head Pointer to the first node.
 * @return int Sum of the values, or 0 if the list is empty.
 */
int sumList(Node *head)
{
    // TODO
    return 0;
}

/**
 * Deletes every node and sets head to nullptr.
 * @param head Reference to the pointer to the first node.
 * @return void
 */
void clearList(Node *&head)
{
    // TODO
}

/** BONUS (optional). */

/**
 * Inserts value into an ascending list while preserving its sorted order.
 * @param head Reference to the pointer to the first node.
 * @param value Value to insert.
 * @return void
 */
void insertSorted(Node *&head, int value)
{
    // TODO (bonus)
}

/** TESTS: do not modify below this line. */
int main()
{
    Node *head = nullptr;

    cout << "===== PART A =====" << endl;
    cout << "Empty list: ";
    printList(head);
    cout << "Expected:   NULL" << endl
         << endl;

    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtFront(head, 10);
    insertAtEnd(head, 50);
    cout << "After inserts: ";
    printList(head);
    cout << "Expected:      10 -> 20 -> 30 -> 50 -> NULL" << endl
         << endl;

    insertAtPosition(head, 40, 3);
    insertAtPosition(head, 5, 0);
    insertAtPosition(head, 60, 100);
    cout << "After insertAtPosition: ";
    printList(head);
    cout << "Expected:               5 -> 10 -> 20 -> 30 -> 40 -> 50 -> 60 -> NULL" << endl
         << endl;

    cout << "Length: " << getLength(head) << "   (Expected: 7)" << endl;
    cout << "Search 30: " << (search(head, 30) ? "found" : "not found") << "   (Expected: found)" << endl;
    cout << "Search 99: " << (search(head, 99) ? "found" : "not found") << "   (Expected: not found)" << endl
         << endl;

    cout << "===== PART B =====" << endl;
    deleteFront(head);
    deleteEnd(head);
    cout << "After deleteFront + deleteEnd: ";
    printList(head);
    cout << "Expected:                      10 -> 20 -> 30 -> 40 -> 50 -> NULL" << endl
         << endl;

    bool removed = deleteValue(head, 30);
    bool notRemoved = deleteValue(head, 99);
    cout << "After deleteValue(30): ";
    printList(head);
    cout << "Expected:              10 -> 20 -> 40 -> 50 -> NULL" << endl;
    cout << "deleteValue(30) returned " << removed << "   (Expected: 1)" << endl;
    cout << "deleteValue(99) returned " << notRemoved << "   (Expected: 0)" << endl
         << endl;

    cout << "===== PART C =====" << endl;
    clearList(head);
    cout << "After clearList: ";
    printList(head);
    cout << "Expected:        NULL" << endl
         << endl;

    int values[] = {5, 3, 5, 2, 3, 5};
    for (int v : values)
        insertAtEnd(head, v);
    removeDuplicates(head);
    cout << "After removeDuplicates: ";
    printList(head);
    cout << "Expected:               5 -> 3 -> 2 -> NULL" << endl
         << endl;

    clearList(head);
    for (int i = 1; i <= 5; i++)
        insertAtEnd(head, i);
    cout << "Middle of 1..5: " << findMiddle(head) << "   (Expected: 3)" << endl;
    cout << "Sum of 1..5:    " << sumList(head) << "   (Expected: 15)" << endl;
    deleteEnd(head);
    cout << "Middle of 1..4: " << findMiddle(head) << "   (Expected: 3)" << endl
         << endl;

    reverseList(head);
    cout << "After reverseList: ";
    printList(head);
    cout << "Expected:          4 -> 3 -> 2 -> 1 -> NULL" << endl
         << endl;

    cout << "===== BONUS =====" << endl;
    clearList(head);
    insertSorted(head, 40);
    insertSorted(head, 10);
    insertSorted(head, 30);
    insertSorted(head, 20);
    insertSorted(head, 50);
    cout << "After insertSorted: ";
    printList(head);
    cout << "Expected:           10 -> 20 -> 30 -> 40 -> 50 -> NULL" << endl;

    clearList(head);
    return 0;
}
