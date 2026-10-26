#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    string s; cin >> s;
    stack<char> st;

    int flag=0;
    for(char ch:s){
        if(ch=='(' || ch=='{' || ch=='['){
            st.push(ch);
        }else{
            char top=st.top();
            if((ch==')' && top=='(') || (ch=='}' && top=='{') || (ch==']' && top=='[')){
                st.pop();
            }else{
                flag=1;
                break;
            }
        }
    }
    if(st.empty() && flag!=1){
        cout << "YES" << endl;
    }else cout << "NO" << endl;
}