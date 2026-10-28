#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    for(int i=1; i<=t; i++){
        int n; cin >> n;
        string s; cin >> s;
        cout << "Case " << i << ": ";
        if(s=="Alice"){
            if(n%3==1){
                cout << "Bob" << endl;
            }
            else cout << "Alice" << endl;
        }
        else{
            if(n%3==0){
                cout << "Alice" << endl;
            }else cout << "Bob" << endl;
        }
    }
}