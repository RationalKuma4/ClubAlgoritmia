#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

Node *Reverse(Node *head);

int main()
{

}

Node *Reverse(Node *head)
{
    if (!head || !head->next) return head;
    Node *actual = head, *aux = NULL;
    while (actual)
    {
        actual = actual->next;
    }
}