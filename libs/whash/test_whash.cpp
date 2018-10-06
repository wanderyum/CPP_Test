#include<iostream>
#include<vector>
#include"whash.h"

using namespace std;

int main(){
    string s = "Hello world!";
    cout << BKDRHash(&s[0], 1002000000) << endl;
    cout << atoi("123") << endl;
    cout << itoa(1);
    return 0;
}
