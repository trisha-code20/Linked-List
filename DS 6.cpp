#include <iostream>
using namespace std;
struct Node {
 int data;
 Node* next;
};
Node* head = NULL;
// Insert at beginning
void insertBegin(int value) {
 Node* newNode = new Node();
 newNode->data = value;
 newNode->next = head;
 head = newNode;
}
// Insert at end
void insertEnd(int value) {
 Node* newNode = new Node();
 newNode->data = value;
 newNode->next = NULL;
 if (head == NULL) {
 head = newNode;
 return;
 }
 Node* temp = head;
 while (temp->next != NULL) {
 temp = temp->next;
 }
 temp->next = newNode;
}
// Delete from beginning
void deleteBegin() {
 if (head == NULL) {
 cout << "List is empty\n";
 return;
 }
 Node* temp = head;
 head = head->next;
 delete temp;
}
// Delete from end
void deleteEnd() {
 if (head == NULL) {
 cout << "List is empty\n";
 return;
 }
 if (head->next == NULL) {
 delete head;
 head = NULL;
 return;
 }
 Node* temp = head;
 while (temp->next->next != NULL) {
 temp = temp->next;
 }
 delete temp->next;
 temp->next = NULL;
}
// Traversal
void display() {
 Node* temp = head;
 if (temp == NULL) {
 cout << "List is empty\n";
 return;
 }
 while (temp != NULL) {
 cout << temp->data << " -> ";
 temp = temp->next;
 }
 cout << "NULL\n";
}
// Main function
int main() {
 insertBegin(10);
 insertEnd(20);
 insertEnd(30);
 cout << "Linked List: ";
 display();
 deleteBegin();
 cout << "After deleting from beginning: ";
 display();
 deleteEnd();
 cout << "After deleting from end: ";
 display();
}
