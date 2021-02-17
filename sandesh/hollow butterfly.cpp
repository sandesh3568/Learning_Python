#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            if(j==1 || j==i) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        for(int space=1;space<=2*(n-i);space++) {
            cout<<" ";
        }
        for(int j=1;j<=i;j++) {
            if(j==1 || j==i) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
     for(int i=n;i>=1;i--) {
        for(int j=1;j<=i;j++) {
            if(j==1 || j==i) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        for(int space=2*(n-i);space>=1;space--) {
            cout<<" ";
        }
        for(int j=1;j<=i;j++) {
            if(j==1 || j==i) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
}