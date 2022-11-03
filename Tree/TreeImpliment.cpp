// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Tree
{
public:
    int val;
    Tree *left;
    Tree *right;
};

void Traverse(Tree *head)
{
    if (head == NULL)
        return;
    cout << head->val;
    Traverse(head->left);
    Traverse(head->right);
}

int main()
{
    Tree *head = new Tree();
    Tree *second = new Tree();
    Tree *third = new Tree();
    head->val = 10;
    head->left = second;
    second->val = 9;
    second->left = NULL;
    second->right = NULL;
    head->right = third;
    third->val = 11;
    third->left = NULL;
    third->right = NULL;
    Traverse(head);
    return 0;
}