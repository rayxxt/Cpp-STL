#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1("Hello");
    string s2 = "Hello";

    string s3(s2);
    string s4 = s2;

    char s[] = {'a','b','c','\0'};
    cout << s << endl;

    // empty function (only for strings)
    if(s1.empty()){
        cout << "empty" << endl;
    }
    else{
        cout << "full" << endl;
    }

    // append
    cout << s2.append(" I love c++") << endl;

    //length
    cout << s3.length() << endl;

    //clear
    s1.clear();

    //Compare- returns an int either equal to 0, or greater than or less than 0
    cout << s2.compare(s3) << endl; 

    //Operators are overloaded for this-
    cout << (s1>s2) << endl; //true or false

    //find- returns the index of the starting character of our key-
    string key = "c++";
    int index = s2.find(key);
    cout << index << endl;

    // remove a word from a string
    int len = key.length();
    s2.erase(index, len);
    cout << s2 << endl;

    // for each loop-
    for(char c:s2){
        cout<< c <<endl;
    }

}