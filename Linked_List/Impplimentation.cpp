#include <bits/stdc++.h>
using namespace std;

// creating class of node
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{
    // Dynamically create A node
    Node *head = new Node(100);
    cout << "Data: " << head->data<<endl;
    cout << "Next: " << head->next<<endl;
 
}