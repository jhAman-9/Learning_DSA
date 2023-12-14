// https://leetcode.com/problems/reverse-words-in-a-string/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int i = 0;
        int n = s.size();
        int we = 0;  // next word end Point
        int ws = 0;  // next word start point
        
        while(i < n){
            while( i < n && s[i] != ' '){
              s[we++] = s[i++];
            }
            // here extracting the word and sidha karte hai opas s me jor dete hai
            if(ws < we){
                reverse(s.begin()+ws , s.begin()+we);
                s[we] = ' ';
                we++;
                ws = we;
            }
            i++;
        }
        s = s.substr(0,we-1);
        return s;
        
    }
};


int main(){
    Solution s;
    cout<<s.reverseWords("a good   example");
}