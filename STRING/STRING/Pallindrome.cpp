// Check whether the given string is palindrome or not.
// Input : "abcde"
// Output : No
// Input : "abcdcba"
// Output : Yes

#include<iostream>
#include<string>
using namespace std;
 int main(){
    string s;
    cin>>s;
    bool flage = true;
    int n = s.size();
    for(int i=0; i<n/2; i++){
       if (s[i] != s[n-i-1]){   // n = i+j-1 ->  j = n-i-1
       flage = false;
       }
    }
    if(flage == true)   cout<<"Pallindrome";
    else  cout<<"Not Pallindrome";

 }


 // ANOTHER APPROACH

 #include<iostream>
 #include<string>
 #include<algorithm>
 using namespace std;
 int main(){
    string s;
    cin>>s;

    string t = s;

    reverse(t.begin(), t.end());
    if(s != t)  cout<<"Not Pallindrome";
    else        cout<<"pallindrome";
 }
