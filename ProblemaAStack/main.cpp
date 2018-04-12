#include <iostream>

using namespace std;

template<class T>
struct Stack
{
    struct Node
    {
        Node *next;
        T data;

        Node(T val)
        {
            next = NULL;
            data = val;
        }
    };

    Node *head;
    int size;

    Stack()
    {
        head = NULL;
        size = 0;
    }

    void push(T val)
    {
        Node *node = new Node(val);
        node->next = head;
        head = node;
        size++;
    }

    void pop()
    {
        if (size == 0)
            throw runtime_error("Cannot pop from the empty stack");
        head = head->next;
        size--;
    }

    T top()
    {
        if (size == 0)
            throw runtime_error("Cannot pop from the empty stack");
        return head->data;
    }

    bool isEmpty()
    {
        return size == 0;
    }
};

string estaBalanceado(string chars);

int main()
{
    int n = 0;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string chars, resp;
        cin >> chars;
        cout << estaBalanceado(chars) << "\n";
    }
    return 0;
}

string estaBalanceado(string chars)
{
    Stack<char> *stack = new Stack<char>();
    for (auto c:chars)
    {
        if (c == '(' || c == '{' || c == '[')
            stack->push(c);
        else
        {
            if (stack->isEmpty())
                return "NO";

            if (c == ')')
            {
                if (stack->top() != '(')
                    return "NO";
                stack->pop();
            } else if (c == '}')
            {
                if (stack->top() != '{')
                    return "NO";
                stack->pop();
            } else if (c == ']')
            {
                if (stack->top() != '[')
                    return "NO";
                stack->pop();
            }
        }
    }
    if (stack->isEmpty())
        return "YES";
    else return "NO";
}

