// find maximum and minimum element in an array 

#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,67,23,0,10};

    int max = arr[0];
    int min = arr[0];

    for(int i : arr){
        if(i > max){
            max = i;
        }
        if(i < min){
            min = i;
        }
    }

    cout << min << " " << max;
}