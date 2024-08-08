#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    bool flag= false;
    int temp;
    for(int i=0 ;i<n;i++){
        for(int j=0 ; j< n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=true;
            }
        }
        if(flag==false){
            break;
        }
    }

    cout<<"::: SORTED ARRAY ::: \t";
    for(int i=0 ; i< n ;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    cout<<"23DIT017 - DARSHAN HOTCHANDANI ";
    int n;
    cout<<"\n Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0 ; i< n ;i++){
        cout<<"Enter "<<i+1<<" number: ";
        cin>>arr[i];
    }

    bubblesort(arr,n);
}
