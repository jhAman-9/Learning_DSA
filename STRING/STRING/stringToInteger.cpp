// convert the string into Integer (string must has size less than 10)


#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    
    int product = 1;

    int n = s.size();

    int ans = 0;

    for(int i=n-1; i>=0; i--){
        ans = ans +(s[i] - '0') * product;
        product *= 10;

    }

    cout<<ans;
}
