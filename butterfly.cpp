#include <iostream>
using namespace std;
int  main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        if(i!=n-1){
        for(int j=0;j<2*(n-i)-2;j++){
            cout<<" ";
        }
        }
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"*";
        }
        for(int j=0; j<i+1;j++){
            cout<<"  ";
        }
       for(int j=0;j<n-i-1;j++){
        cout<<"*";
       }
         cout<<endl;
    }
}