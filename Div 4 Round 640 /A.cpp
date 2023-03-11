#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[4];
        for(int i=0; i<4; i++)
        {
            a[i] = n%pow(10, i);
        }
        for(int i=0; i<4; i++)
        {
            cout << a[i] << " "
        }
        cout << endl;
    }
}