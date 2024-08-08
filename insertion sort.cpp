#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
    int j;
    for(int i = 1 ;i<n ;i++){
        int temp = arr[i];
        for(j=i-1 ; j>=0 ;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }

    cout<<"::: SORTED ARRAY ::: \t";
    for(int i=0 ; i< n ;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    cout<<"23DIT017 - DARSHAN HOTCHANDANI \n";
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ;i++){
        cout<<"Enter "<<i+1<<" number: ";
        cin>>arr[i];
    }

    insertionsort(arr,n);
}
