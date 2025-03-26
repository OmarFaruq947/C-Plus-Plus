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

    // Node(int val): value(val), next(nullptr) {}  // short curt
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


// ========== Reverse using stack ===============
void reverse_print_linkedlist(Node *head){
stack<int>s;
Node* tmp = head;
while(tmp !=NULL){
    s.push(tmp->value);
    tmp=tmp->next;
}

while (!s.empty())
{
    cout<< s.top() <<" ";
    s.pop();
}
}

// ==============Reverse using Recursion ================
// void print_reverse(Node *head){
    
//      // base
//      if (head == NULL)
//      {
//          return;
//      }
//      cout<<endl<<"Your Linked list:  ";
//      print_reverse(head->next); 
//      cout << head->value << " "; 
     
//     //  cout << head->value << " "; 
//     //  print_reverse(head->next); 
    
//     }

// ==============reverse using array ===================
// void reverse_print_linkedlist(Node *head){
//     vector<int> s;
//     Node* tmp = head;
//     while(tmp !=NULL){
//         s.push_back(tmp->value);
//         tmp=tmp->next;
//     }
    
//     while (!s.empty())
//     {
//         cout<< s.back() <<" ";
//         s.pop_back();
//     }
//     }

void insert_at_tail(Node *&head, int val){
    Node* newNode = new Node(val);
    Node* tmp = head;
    if (head== NULL)
    {
        head=newNode;
        cout<<endl<<endl<< "value inserted at the HEAD." <<endl<<endl;
        return;
    }
    
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout<<endl<<endl<< "value inserted at the TAIL." <<endl<<endl;
};

void insert_at_any_position(Node *head, int val, int pos){
    Node* newNode = new Node(val);
    Node* tmp = head;

    for (int i = 1; i <=pos-1; i++)
    {
        tmp=tmp->next;
        if(tmp==NULL){
            cout<< endl<<"Invalid position" <<endl;
            return ;
        }
    }
    newNode->next = tmp->next;
    tmp->next=newNode;
    cout<<endl<<"value inserted at the"<< pos<<"position" <<endl;
    
}

void insert_at_head(Node *&head, int val){
    Node* newNode = new Node(val);
    Node* tmp = head;
    newNode->next = head;
    head = newNode;
}

void delete_at_position(Node *head, int pos){
    Node* tmp = head;
    if(tmp==NULL) return;
    for (int i = 1; i < pos-1; i++)
    {
        tmp=tmp->next;
        if(tmp == NULL){
            cout<< endl<<"Invalid Index !" <<endl;
            return;
        }
    }
    if(tmp->next == NULL){
        cout<< endl<<"Invalid Index !" <<endl;
        return;
    }
    Node* deleteNode = tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
    cout<<endl<< "Delete Successful !" <<endl;
    
}

void delete_at_head(Node *&head){
    Node* tmp = head;
    if(tmp==NULL){
        cout<<endl<< "Node is not present" <<endl;
        return;
    } 
    Node* deleteNode = head;
    head = tmp->next;
    delete deleteNode;
    cout<<endl<< "Delete Successful !" <<endl;
}

void delete_at_tail(Node *head){
    Node* tmp = head;

    // empty list
    if(head == nullptr){
        cout<<endl<<"List is empty, nothing to delete"<<endl;
        return;
    }

    if(head->next == nullptr){
        // delete head;
        // head = nullptr;
        // cout<< endl<<"Delete Successful (was last node) !" <<endl;
        // return;
        delete_at_head(head);
        return;
    }

    // multiple nodes - first the second-to-last node
    while (tmp->next->next != nullptr)
    {
        tmp = tmp->next;
    }
    
    //points the second to last node
    Node* deleteNode = tmp->next;
    tmp->next = nullptr;
    delete deleteNode;
    cout<<endl<<"Delete Successful !" <<endl;
}

int total_node_count(Node * head){
    Node* tmp = head;
    int count=0;
    while (tmp != NULL)
    {
        count ++;
        tmp = tmp->next;
    }
    return count;
    
}

void sortDescending(Node* head) {
    vector<int> values;
    Node* temp = head;
    // Store all values in a vector
    while (temp != NULL) {
        values.push_back(temp->value);
        temp = temp->next;
    }
    // Sort the values in descending order
    sort(values.rbegin(), values.rend());
    // Reconstruct the linked list with sorted values
    temp = head;
    for (int val : values) {
        temp->value = val;
        temp = temp->next;
    }
    // Print the sorted linked list
    temp = head;
    cout<< "Descending sorted list: ";
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

void removeDuplicate(Node* head) {
    Node* tmp = head;

    // traverse each node in the list
    while (tmp != NULL) {

        Node* tmp2 = tmp;
        // traverse the remaining nodes to find and remove duplicates
        while (tmp2->next != NULL) {
            // check if the next node has the same data as the current node
            if (tmp2->next->value == tmp->value) {
                // duplicate found, remove it
                Node* duplicateNode = tmp2->next;
                tmp2->next = tmp2->next->next;
                delete duplicateNode;
            } else {
                // no duplicate value, move to the next node
                tmp2 = tmp2->next;
            }
        }
        // move to the next node
        tmp = tmp->next;
    }

    // print the list after all duplicates have been removed
    cout << "After removing duplicate value:  ";
    Node* printTmp = head;
    while (printTmp != NULL) {
        cout << printTmp->value << " ";
        printTmp = printTmp->next;
    }
    cout << endl;
}


int main(){

Node* head = NULL;

while (true)
{
    cout<<endl<< "============= LINKEDLIST OPERATIONS ============="<<endl<<endl;
    cout<< "Option-1: Print linked list" <<endl;
    cout<< "Option-2: Insert at the head" <<endl;
    cout<< "Option-3: Insert at any position" <<endl;
    cout<< "Option-4: Insert at Tail" <<endl;
    cout<< "Option-5: delete at the head" <<endl;
    cout<< "Option-6: delete at any position" <<endl;
    cout<< "Option-7: delete at the tail" <<endl;
    cout<< "Option-8: Total node count" <<endl;
    cout<< "Option-9: Print Reverse list" <<endl;
    cout<< "Option-10: Print the sorted list(descending)" <<endl;
    cout<< "Option-11: Print the after duplicate value" <<endl;
    cout<< "Option-12: Terminate programme" <<endl<<endl;

    cout<<"Enter a option: ";
    int op; cin>> op ;
    
    if (op==1){
        print_linkedlist(head);
    }
    else if(op == 2){
        int num;
        cout<< "Enter a number :  " ;
        cin>> num;
        insert_at_head(head, num);
    }
    else if(op == 3){
        int num, pos;
        cout<< "Enter a number & position:  " ;
        cin>> num>> pos ;
        insert_at_any_position(head, num, pos);
    }
    else if(op == 4){
        cout<< "Enter a number: ";
        int num; cin>> num ;
        insert_at_tail(head, num);
    }
    else if(op == 5){
        delete_at_head(head);
    }
    else if(op == 6){
        int pos;
        cout<< "Enter a position:  " ;
        cin>> pos ;
        delete_at_position(head, pos);
    }
    else if(op == 7){
        delete_at_tail(head);
    }
    else if(op == 8){
        cout<< endl<< "Total node is: "<< total_node_count(head) <<endl;
    }
    else if(op == 9){
        reverse_print_linkedlist(head);
        // print_reverse(head);
    }
    else if(op == 10){
       sortDescending(head);
    } 
    else if(op == 11){
        removeDuplicate(head);
    }
    else if(op == 12){
        break;
    }
    else cout<< "Invalid Options" <<endl;
    
}
    return 0;
};





// ============ Remove Duplicate From Sorted List=============
// Node* removeDuplicates(Node* head) {
//     if(head == NULL) return head;
//     Node* tmp = head;
    
//     while(tmp != NULL && tmp->next !=NULL){
       
//             if(tmp->data == tmp->next->data){
//                 Node* duplicate = tmp->next;
//                 tmp->next = tmp->next->next;
//                 delete duplicate;
//             }else{
//                 tmp = tmp->next;
//             }
            
//     }
//     return head;
// }
