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
    if((rear1+1)%n == front1){
        cout<<"OVERFLOW...";
    }
    else{
        if(rear1==-1 && front1==-1){
            rear1=0;
            front1=0;
            queue1[rear1] = data;
        }else{
            rear1=(rear1+1)%n;
            queue1[rear1] = data;
        }
    }
}
void printQueue(){
    if(front1 == -1){
        cout << "Queue is empty";
    }

    int i = front1;
    do {
        cout << " " << queue1[i];
        i = (i + 1) % n;
    } while(i != (rear1 + 1) % n);

    cout << endl;
}
void dequeue(){
    if(front1 == -1){
        cout << "Nothing to delete.";
    }
    front1 = (front1+1)%n;
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
