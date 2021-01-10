#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int key,arr[] = {1,2,3,4,5};
    cin >> key;
    int n = sizeof(arr)/sizeof(int);
    int *address = find(arr, arr+n, key); // find func returns the address of the value found.
    // We can subtract the base address to get its position.
    // If value is not found, last address or 'n' is printed
    int index = address - arr;
    if(index != n){
        cout << "Key found at index " << index;
    }
    else{
        cout << "Key not found";
    }
}