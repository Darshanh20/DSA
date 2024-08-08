#include<iostream>
using namespace std;

struct Node{
int data;

Node *next;

}*start = nullptr;



void createLL(){

    int data;

    cout<<"\n Enter a data here(or -1 for EXIT):::";

    cin>>data;


    while(data != -1){

        Node *newnode,*ptr;

        newnode = new Node;

        newnode->data = data;

        newnode->next = nullptr;

        if(start == nullptr){
            start = newnode;
        }else{

            ptr = start;

            while(ptr->next  != nullptr){
                ptr = ptr->next;
            }
            ptr->next = newnode;
        }
        cout<<"\n Enter a data here(or -1 for EXIT):::";
        cin>>data;
    }


}

void display(){
    if (start == nullptr) {
        cout << "List is empty, nothing to Show." << endl;
        return;
    }

    Node *ptr;

    ptr = start;

    while(ptr != nullptr){

        cout<<ptr->data<<"-->";

        ptr = ptr->next;

    }

}


void enterff(){
    int data;

    cout<<"\n Enter a data here:::";
    cin>>data;

    Node *newnode = new Node;
    newnode->data = data;
    newnode->next = start;
    start = newnode;
}

void enterfl(){
    int data;
    Node *newnode = new Node;
    Node *ptr;
    cout<<"\n Enter a data here:::";
    cin>>data;
    newnode->data = data;
    newnode->next = nullptr;
    if(start == nullptr){
            start = newnode;
    }
    else{
        ptr = start;
        while(ptr->next  != nullptr){
                ptr = ptr->next;
        }
        ptr->next = newnode;
    }
}

void delff(){
    if (start == nullptr) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }
    Node *ptr = start ;
    start = start->next;
    delete ptr;
}

void delfl(){
    if (start == nullptr) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }
    Node *ptr = start ;
    Node *preptr;
    while(ptr->next != nullptr){
        preptr = ptr;
        ptr=ptr->next;
    }
    preptr->next = nullptr;
    delete ptr;

}

void printinreverse(Node* node) {
    if (node == nullptr) {
        return;
    }

    printinreverse(node->next);
    cout << node->data << "->";
}

void sortll(){
    Node *ptr;
    ptr = start;
    bool flag;
    do{
    flag = false;
    ptr = start;
    while(ptr->next != nullptr){
        if(ptr->data > ptr->next->data){
            swap(ptr->data , ptr->next->data);
            flag = true;
        }
        ptr= ptr-> next;
    }
    }while(flag);
}

void insertAtNth(Node *start, int data, int n)
{
    if (n == 1)
    {
        enterff();
        return;
    }
    Node *ptr = start;
    for (int i = 1; i < n - 1; i++)
    {
        ptr = ptr->next;
    }

    Node *temp = new Node();
    temp->data = data;
    temp->next = ptr->next;
    ptr->next = temp;
}
void reverseLinkedList(Node *&start)
{
    if (start == nullptr) {
        cout << "List is empty, nothing to Reverse." << endl;
    }
    Node *prev = nullptr;
    Node *ptr = start;
    Node *next = nullptr;
    while (ptr != nullptr)
    {
        next = ptr->next;
        ptr->next = prev;
        prev = ptr;
        ptr = next;
    }
    start = prev;
}
int main(){
    int n;
    cout<<"\n Choose from the following: 1) CREATE LINKED LIST \n 2) PRINT LINKED LIST \n 3) INSERT FROM FRONT \n 4) INSERT FROM LAST \n 5) DELETE FROM FRONT \n 6) DELETE FROM LAST \n 7)PRINT IN REVERSE \n 8) SORT \n 9) INSERT AT NTH POSITION \n 10)REVERSE LL \n 11) EXIT(-1): ";
    cin>>n;

    while(n!=-1){
        switch(n){
        case 1:
            createLL();
            break;
        case 2:
            display();
            break;
        case 3:
            enterff();
            break;
        case 4:
            enterfl();
            break;
        case 5:
            delff();
            break;
        case 6:
            delfl();
            break;
        case 7:
            printinreverse(start);
            break;
        case 8:
            sortll();
            break;
        case 9:
            cout << endl<< "Enter the Position (nth) : ";
            int pos,data;
            cin >> pos;
            cout << "Enter the value : ";
            cin >> data;
            insertAtNth(start, data, pos);
            break;
        case 10:
            reverseLinkedList(start);
            break;
        }
    cout<<"\n Choose from the following: 1) CREATE LINKED LIST \n 2) PRINT LINKED LIST \n 3) INSERT FROM FRONT \n 4) INSERT FROM LAST \n 5) DELETE FROM FRONT \n 6) DELETE FROM LAST \n 7)PRINT IN REVERSE \n 8) SORT \n 9) INSERT AT NTH POSITION \n 10)REVERSE LL \n 11) EXIT(-1): ";
    cin>>n;
    }

}
