// This program illustrates the concept of Circular Header Linked List.
// Methods for Inserting a node, Deleting a node and displaying the contents of the List have been programmed.
// No global variables are used in the implementation of the program.
#include <iostream>

using namespace std;

class CircularHeaderLinkedList
{
    public:
        CircularHeaderLinkedList* next;
        int info;
};


void addNode(CircularHeaderLinkedList* head, CircularHeaderLinkedList* node, int p)
{
    int pos = 0;
    CircularHeaderLinkedList* t = head;
    if(p == 1)
    {
        node->next = head;
        t->next = node;
    }
    else
    {
        while(pos < p-1)
        {
            t = t->next;
            pos++;
        }
        node->next = t->next;
        t->next = node;

    }

}

 void print(CircularHeaderLinkedList* head)
 {
    CircularHeaderLinkedList* temp = head->next;
    do
    {
        cout << temp->info << endl;
        temp = temp->next;
    }while(temp != head);
 }


 void deleteNode(CircularHeaderLinkedList* head, int p)
 {
    int pos = 0;
    CircularHeaderLinkedList* temp = head;
    CircularHeaderLinkedList* temp1 = head->next;
    while(pos < p-1)
    {
        temp = temp->next;
        temp1 = temp1->next;
        pos++;
    }
    temp->next = temp1->next;
    delete temp1;
 }


int main()
{
    CircularHeaderLinkedList* start = NULL;
    char c;
    cout << "Do you want to add a record(y/n): ";
    cin >> c;
    while(c == 'y' || c == 'Y')
    {
        // header->info++;
        CircularHeaderLinkedList* node = new CircularHeaderLinkedList();
        cout << "HELLO\n";
        int data;
        if(start == NULL)
        {
            start = node;
            node->next = NULL;
            node->info = 0;
        }
        else
        {
            (start->info)++;
            int p;
            cout << "Enter the data: ";
            cin >> data;
            node->info = data;
            cout << "Enter the position at which you'd like to add the record(>0): ";
            cin >> p;
            addNode(start, node, p);
        }
        cout << "Do you want to add a record(y/n): ";
        cin >> c;
    }
    print(start);
    cout << "Do you want to delete a node(y/n)";
    cin >> c;
    while(c == 'y' || c == 'Y')
    {
        int p;
        cout << "Enter the position at which you want to perform deletion: ";
        cin >> p;
        deleteNode(start, p);
        cout << "Do you want to delete a node(y/n)";
        cin >> c;
    }
    print(start);
    return 0;
}
