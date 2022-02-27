/*swap alternate numbers in an array
(odd number of elements)Ex - {1,2,7,8,5} => {2,1,8,7,5}
(even number of elements)Ex - {1,4,3,6,7,8} => {4,1,6,3,8,7}*/

#include <iostream>
using namespace std;

// void swapAlter(int arr[], int n){
//     if(n%2 == 0){
//         for(int i = 0; i < n-1; i+=2){
//             int temp = arr[i];
//             arr[i] = arr[i+1];
//             arr[i+1] = temp;
//         }
//     }else{
//         for(int i = 0; i < n-2; i+=2){
//             int temp = arr[i];
//             arr[i] = arr[i+1];
//             arr[i+1] = temp;
//         }
//     }
// }

void swapAlter(int arr[], int n){
    for(int i = 0; i < n; i+=2){
        if(i+1 < n){
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr1[6] = {1,4,3,6,7,8};
    int arr2[5] = {1,2,7,8,5};

    swapAlter(arr1, 6);
    printArr(arr1, 6);

    cout << "\n";

    swapAlter(arr2, 5);
    printArr(arr2, 5);
}

// TAKEAWAY - WE HAVE A SWAP(var1, var2),FUNCTION IN C++ STL, used in line 27,  WHICH WE CAN USE TO SWAP TWO VARIABLES