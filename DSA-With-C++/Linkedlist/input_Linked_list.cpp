#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};


void print_linkedlist(Node *head){
    Node* tmp = head;
    cout<<endl<<"Your Linked list:  ";
    if(head==NULL){
        cout<< "0" <<endl;
        return;
    }
    while (tmp != NULL)
    {
        cout<< tmp->value <<"  ";
        tmp = tmp->next;
    }
    cout<< endl <<endl;
};

void insert_at_tail(Node *&head, int val){
    Node* newNode = new Node(val);
    Node* tmp = head;
    if (head== NULL)
    {
        head=newNode;
        return;
    }
    
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
};

int main(){

int val;

Node* head = NULL;
while (true)
{
    cin>> val ;
    if(val == -1) break;
    insert_at_tail(head, val);
}

print_linkedlist(head);

    return 0;
};