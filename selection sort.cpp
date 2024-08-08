#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minimum = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minimum]){
                minimum = j ;
            }
        }
        swap(arr[minimum],arr[i]);
    }

    cout<<"::: SORTED ARRAY ::: \t";
    for(int i=0 ; i< n ;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    cout<<"23DIT017- DARSHAN HOTCHANDANI \n";
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ;i++){
        cout<<"Enter "<<i+1<<" number: ";
        cin>>arr[i];
    }

    selectionsort(arr,n);
}
