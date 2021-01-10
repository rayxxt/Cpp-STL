#include<iostream>
#include<algorithm>
using namespace std;


// Find func can take O(n) time so if the arr is sorted then we can use binary_search func that takes O(log n)
int main(){
    int key,arr[] = {10, 20, 30, 40, 40, 40, 50, 60, 70};
    cin >> key;
    int n = sizeof(arr)/sizeof(int);
    bool present = binary_search(arr, arr+n, key);
    if(present){
        cout << "Present" <<endl;
    }
    else{
        cout << "Absent" << endl;
    }

    // lower_bound method returns the address of the first num. '<=' to our key
    int lb = lower_bound(arr, arr+n, key)-arr; 
    cout << lb << " " << arr[lb] << endl;

    // upper_bound returns the address of the first num. '>' our key
    int ub = upper_bound(arr, arr+n, key)-arr;
    cout << ub << " " << arr[ub] << endl;

    // we can use these to calculate the occurences of a number in a sorted array in O(log n) time
    cout << "No of occurences " << ub-lb;
}