#include<iostream>
using namespace std;

struct Node{
int data;

Node *next;

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

    if(start==nullptr){
        start = newnode;
        newnode->next = start;
    }else{
        Node *ptr = start;
        while(ptr->next != start){
            ptr = ptr->next;
        }
        ptr->next = newnode;
        newnode->next = start;
    }
    cout<<"Enter data(-1 for exit..): ";
    cin>>data;
}
}

void display(){
    if(start == nullptr){
        cout<<"No data found!!";
    }
    else{
        Node *ptr = start;
        while(ptr->next != start){
            cout<<ptr->data<<"-->";
            ptr= ptr->next;
        }
        cout<<ptr->data<<"-->";
        cout<<ptr->next->data<<"-->";
    }
}
void enterff(){
    int data;
    cout<<"Enter data: ";
    cin>>data;

    Node *newnode;
    newnode = new Node;
    newnode->data = data;
    newnode->next = nullptr;

    if(start==nullptr){
        start = newnode;
        newnode->next = start;
    }else{
        Node *ptr=start;
        while(ptr->next != start){
            ptr = ptr->next;
        }
        ptr->next = newnode;
        newnode->next = start;
        start = newnode;
    }
}
void enterfl(){
    int data;
    cout<<"Enter data: ";
    cin>>data;

    Node *newnode;
    newnode = new Node;
    newnode->data = data;
    newnode->next = nullptr;

    if(start==nullptr){
        start = newnode;
        newnode->next = start;
    }else{
        Node *ptr=start;
        while(ptr->next != start){
            ptr= ptr->next;
        }
        ptr->next = newnode;
        newnode->next = start;
    }

}

void delfl(){
    if(start==nullptr){
        cout<<"No data found..";
    }

    Node *ptr=start,*preptr;
    while(ptr->next != start){
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = start;
    delete ptr;
}
void delff(){
    if(start==nullptr){
        cout<<"No data found..";
    }
    Node *ptr=start;
    while(ptr->next != start){
        ptr = ptr->next;
    }
    Node *temp = start;
    start = start->next;
    ptr->next = start;
    delete temp;
}

void printinreverse(Node* node) {
    if (node->next == start) {
        cout<< node->data <<"-->";
        return;
    }

    printinreverse(node->next);
    cout << node->data << "-->";
}

void sortll(){
    if(start == nullptr){
        cout<<"No data found..";
    }
    Node *ptr = start ;
    bool flag;
    do{
        flag = false;
        ptr = start;
        while(ptr == start || ptr->next != start){
            if(ptr->data > ptr->next->data){
                swap(ptr->data , ptr->next->data);
                flag = true;
            }
            ptr = ptr->next;
        }
    }while(flag);


}



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
