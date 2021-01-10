#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

// Overloading the sort function
bool compare(string a ,string b){
    if(a.length() == b.length()){
        return a>b;
    }
    return a.length()>b.length();
}

int main(){
    int n;
    string s[100];
    cin >> n;
    cin.ignore();
    for(int i = 0 ; i < n ; i++){
        getline(cin,s[i]);
    }
    sort(s, s+n); //lexicographical sorting
    // alphabetical sorting
    for(int i = 0 ; i < n ; i++){
        cout << s[i] <<endl;
    }
}