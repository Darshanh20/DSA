#include<iostream>
using namespace std;

struct Node{
int data;
Node *next;
Node *prev;
}*start = nullptr;

void createLL(){
    int data;
    cout<<"Enter data(-1 for exit..): ";
    cin>>data;

    while(data != -1){

    Node *newnode;
    newnode = new Node;
    newnode->data = data;
    newnode->next = nullptr;
    newnode->prev = nullptr;

    if(start == nullptr){
        start = newnode;
        newnode->next = start;
        newnode->prev = start;
    }else{
        Node *ptr = start ;
        while(ptr->next != start){
            ptr = ptr->next;
        }
        ptr->next = newnode;
        newnode->prev = ptr;
        newnode->next = start;
        start -> prev = newnode;
    }
    cout<<"Enter data(-1 for exit..): ";
    cin>>data;
    }
}

void display(){
    if(start == nullptr){
        cout<<"No data found..";
    }
    Node *ptr=start;
    while(ptr->next != start){
        cout<<ptr->data<<"-->";
        ptr = ptr->next;
    }
    cout<<ptr->data<<"-->"<<ptr->next->data;
}

void enterfl(){
    int data;

    cout<<"\n Enter a data here:::";
    cin>>data;

    Node *newnode = new Node;
    newnode->data = data;
    newnode->next = nullptr;
    newnode->prev = nullptr;

    if(start == nullptr){
        start = newnode;
        newnode->next = start;
        newnode->prev = start;
    }else{
        Node *ptr=start;
        while(ptr->next != start){
            ptr = ptr->next;
        }
        ptr->next= newnode;
        newnode->prev = ptr;
        newnode->next = start;
        start->prev = newnode;
    }
}

void enterff(){
    int data;

    cout<<"\n Enter a data here:::";
    cin>>data;

    Node *newnode = new Node;
    newnode->data = data;
    Node *ptr=start;
    while(ptr->next != start){
        ptr = ptr->next;
    }
    ptr->next = newnode;
    newnode->prev = ptr;
    start->prev = newnode;
    newnode->next = start;
    start = newnode;
}

void delff(){
    if(start==nullptr){
        cout<<"No data found..";
    }
    Node *temp = start;
    Node *last = start->prev;
    start = start->next;
    start->prev = last;
    last->next = start;
    delete temp;
}

void delfl(){
    if(start==nullptr){
        cout<<"No data found..";
    }
    Node *ptr = start;
    while(ptr->next != start){
        ptr = ptr->next;
    }
    ptr->prev->next = start;
    start->prev = ptr->prev;
    delete ptr;
}
void sortll(){
    if(start == nullptr){
        cout<<"No data found..";
    }
    Node *ptr;
    bool flag;
    do{
        flag = false;
        ptr = start;
        while(ptr->next != start){
            if(ptr->data > ptr->next->data){
                swap(ptr->data , ptr->next->data);
                flag = true;
            }
            ptr = ptr->next;
    }

    }while(flag);
}
void printinreverse(Node *node){
    if(node == nullptr){
        return;
    }

    printinreverse(node->next);
    cout<<node->data<<"-->";
};

int main(){
    int n;
    cout<<"\n Choose from the following: 1) CREATE LINKED LIST \n 2) PRINT LINKED LIST \n 3) INSERT FROM FRONT \n 4) INSERT FROM LAST \n 5) DELETE FROM FRONT \n 6) DELETE FROM LAST \n 7)PRINT IN REVERSE \n 8) SORT \n 9) EXIT(-1): ";
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
        }
        cout<<"\n Choose from the following: 1) CREATE LINKED LIST \n 2) PRINT LINKED LIST \n 3) INSERT FROM FRONT \n 4) INSERT FROM LAST \n 5) DELETE FROM FRONT \n 6) DELETE FROM LAST \n 7)PRINT IN REVERSE \n 8) SORT \n 9) EXIT(-1): ";
        cin>>n;
    }
}




