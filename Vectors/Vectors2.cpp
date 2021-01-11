#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> d{1,2,3,4,5,6,7};
    for(int x: d){
        cout<<x<<" ";
    }
    cout<<endl;

    //insert at last O(1)
    d.push_back(13);

    for(int x: d){
        cout<<x<<" ";
    }
    cout<<endl;

    //remove from last O(1)
    d.pop_back();

    for(int x: d){
        cout<<x<<" ";
    }
    cout<<endl;

    //insert in the middle
    d.insert(d.begin()+2,12); //adding 12 at 3rd position
   
    //insert multiple in the middle
    d.insert(d.begin()+2,4,14); //inserting 4 elements with value 14 at 3d position
    for(int x: d){
        cout<<x<<" ";
    }
    cout<<endl;

    //remove from the middle
    d.erase(d.begin()+3);
    for(int x: d){
        cout<<x<<" ";
    }
    cout<<endl;

    //remove multiple from the middle
    d.erase(d.begin()+2, d.begin()+6);
    for(int x: d){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;

    //we avoid resize/ avoid reducing the size.
    //size may change but capacity remains the same
    d.resize(12);
    for(int x: d){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"front element- "<<d.front()<<endl;
    cout<<"last element- "<<d.back()<<endl;

    d.clear(); //does not reduce capacity, only the size
    cout<<d.size()<<endl;
    cout<<(d.empty()?"empty vector":"vector has elements")<<endl; 


    /* Vector reserve-
    When we insert/ take input into a vector. Vector has to
    double its capacity every time which is an expensive operation.
    Therefore we use the concept of reserving some space for the vector
    so that we don't have to copy the elements to a new doubled vector
    everytime. */

    vector<int> v;
    v.reserve(1000);
    int n,num;
    cout<<"Enter no of elements of the vector- ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        v.push_back(num);
    }
    for(int x: v){
        cout<<x<<" ";
    }
    cout<<endl;

}