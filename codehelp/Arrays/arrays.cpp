#include <iostream>
#include <vector>
using namespace std;

int main(){
    // simple array
    int *arr = new int[5];
    
    for(int i = 0; i < 5; i++){
        arr[i] = i;
    }

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }


    // vectors STL 
    vector <int> v;

    for(int i = 0; i < 5; i++){
        v.push_back(i);
    }

    for(auto i = v.begin(); i < v.end(); i++){
        cout << *i << " ";
    }

    // range based loops in C++
    cout << "\nRange Based loops " << "\n";
    for(auto i : v){
        cout << i << " ";
    }
}