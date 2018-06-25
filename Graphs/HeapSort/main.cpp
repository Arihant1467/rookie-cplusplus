#include <iostream>
#include<conio.h>
using namespace std;

int main(){
    void heapify(int arr[],int n,int i);
    void heapsort(int arr[],int n);
    void printArray(int arr[],int n);
    int a[]= {23,45,67,12,1,8,92,8,5,54};
    heapsort(a,10);
    printArray(a,10);
    return 0;
}
void heapify(int arr[],int n,int i){

    int largest = i;  // Initialize largest as root
    int l = 2*i + 1;  // left = 2*i + 1
    int r = 2*i + 2;  // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }

}
void heapsort(int arr[],int n){
    for(int i=(n/2-1);i>=0;--i){
        heapify(arr,n,i);
    }

    int j=n;
    while(j--){
        swap(arr[0],arr[j]);
        heapify(arr,j,0);
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;++i){
        cout<<arr[i]<<endl;
    }
}
