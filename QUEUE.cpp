#include<iostream>
using namespace std;

#define n 5
int queue1[n];
int front1 = -1;
int rear1 = -1;

void enqueue(){
    int data;
    cout<<"Enter the data: ";
    cin>>data;
    if(rear1 == n){
        cout<<"OVERFLOW...";
    }
    else{
        if(rear1==-1 && front1==-1){
            rear1=0;
            front1=0;
            queue1[rear1]=data;
            rear1++;
        }else{
            queue1[rear1]=data;
            rear1++;
        }
    }
}
void printQueue(){
    if(front1 == -1 && rear1==-1){
        cout<<"Queue is empty.. nothing to print";
    }
    for(int i= front1 ; i<rear1 ;i++){
        cout<<" "<<queue1[i];
    }
}
void dequeue(){
    if(front1 == -1 && rear1==-1){
        cout<<"Queue is empty.. nothing to delete";
    }
    else{
        if(front1==n){
            front1=-1;
            rear1=-1;
        }
        else{
            front1++;
        }

    }
}
int main(){
    int x;

    while (x!= 4) {
        cout << "\n SELECT: \n 1: ENQUEUE \n 2: DEQUEUE \n 3: PRINT \n 4: EXIT \t ";
        cin >> x;

        switch (x) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                printQueue();
                break;
            case 4:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid selection. Please try again." << endl;
                break;
        }
    }
}
