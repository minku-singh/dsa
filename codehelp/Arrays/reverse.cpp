// reverse an array
// {1,2,3,4,5} => {5,4,3,2,1}

#include <iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        int ele;
        cout << "ele" ;
        cin >> ele;
        arr[i] = ele;
    }

    reverse(arr, n);
    printArr(arr, n);
}