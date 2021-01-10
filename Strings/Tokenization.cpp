#include<iostream>
#include<cstring>
using namespace std;


//char *strtok(char *s, char *delimiters) - function structure
// Return value - returns a pointer to the first token found in the string. A null pointer is returned if there are no tokens left to retrieve.


//Helps us to create tokens/ divide a string based on certain delimiter
int main(){
    char s[100] = "How are you? I am fine";
    char ptr = strtok(s, " ");
    while(ptr){
        cout << ptr;
        ptr = strtok(NULL, " ");
    }
}