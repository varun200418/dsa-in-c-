#include <iostream>

class Node {
public:
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;
    LinkedList() : head(nullptr) {}

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void display() {
        Node* temp = head;
        while (temp) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "NULL" << std::endl;
    }
};

int main() {
    LinkedList list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.display();
    return 0;
}
//Explanation for Insertion at the End in a Singly Linked List://

  //  Create a New Node
    //    Allocate memory for a new node using new Node(val).
     //   Assign the given value to data and set next to nullptr.

   // Check if the List is Empty
    //    If head is nullptr, set head to the new node and return.

   // Traverse to the End
    //    Use a temporary pointer (temp) to iterate from head to the last node (where temp->next == nullptr).
   // Attach the New Node
     //   Set temp->next to the new node.//
