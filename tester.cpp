#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];

        for(int i=0; i<n; i++)  cout << *(lower_bound(b, b+n, a[i])) - a[i]<< " ";
        cout << endl;

        int c[n], d[n];
        c[0] = 0;
        for(int i=1; i<n; i++){
            if(b[i-1]>=a[i]) c[i] = c[i-1];
            else c[i] = c[i-1] + 1;
        }
        for(int i=0; i<n; i++){
            if(upper_bound(b, b + n, c[i]) != b + n){
                cout << *(upper_bound(b, b + n, c[i]) - 1) - a[i] << " ";
            }else{
                cout << b[n-1] - a[i] << " ";
            }
        }
        cout << endl;

        
        
    }
}
