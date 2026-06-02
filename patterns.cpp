#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for (int i= 0 ; i < n; i++){
        for (int  j= 0; j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
 
    void print2(int n){
    for (int i= 0 ; i < n; i++){
        for (int  j= 0; j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

}
void print3 (int n ){
    for ( int i = 1 ; i<=n; i++){
        for ( int j = 1 ; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
     }
}
void print4(int n ){
     for ( int i = 0 ;i<n; i++ ){
        for (int j = 0 ; j<=i; j++){
            cout<<i;

        }
    cout<<endl;
     }

}
void print5(int n ){
for ( int i = 1; i < n; i++){
    for (int j =0; j<n-i+1;j++){
        cout<<"*";

    }
    cout<<endl;

}
}
void print6( int n ){
    for (int i = 0 ; i < n ;i++ ){
        //space 
        for (  int j = 0 ; j<n - i -1;  j++){
            cout<<" ";
        }
            //star 
        for ( int j = 0 ; j < 2*i+1 ; j++){
            cout<<"*";
        }
            //space
        for (  int j = 0 ; j<n - i -1;  j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print7( int n){
    for ( int i =0; i<n; i++){
        for ( int j = 0; j < i ; j ++){
            cout << " ";
        }
        for ( int j = 0 ; j < 2*n- 2*i -1; j ++){
            cout << "*";
        }
        for (int j = 0 ; j < i ; j ++){
            cout <<" ";
        }
        cout<<endl;
    }
}
void print8( int n ){
    for (int i = 0 ; i < n ;i++ ){
        //space 
        for (  int j = 0 ; j<n - i -1;  j++){
            cout<<" ";
        }
            //star 
        for ( int j = 0 ; j < 2*i+1 ; j++){
            cout<<"*";
        }
            //space
        for (  int j = 0 ; j<n - i -1;  j++){
            cout<<" ";
        }
        cout<<endl;
    
    }
    for ( int i =0; i<n; i++){
        for ( int j = 0; j < i ; j ++){
            cout << " ";
        }
        for ( int j = 0 ; j < 2*n- 2*i -1; j ++){
            cout << "*";
        }
        for (int j = 0 ; j < i ; j ++){
            cout <<" ";
        }
        cout<<endl;
    }
}
void print9( int n  ){
    for ( int i = 1 ; i <=2*n-1; i ++ ){
        int stars = i;
        if ( i>n) stars = 2*n-i;
        for ( int j =0 ; j < stars ; j ++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print10( int n ){
    int stars = 1;
    for ( int i= 0 ; i < n ; i ++){
        if ( i % 2== 0 ) stars = 1 ;
        else stars = 0;
        for ( int j = 0 ; j <= i ; j ++){
            cout << stars ; 
            stars = 1 -  stars; 

        }
        cout<< endl;   
    }
}
void print11( int n){
    int space = 2*(n- 1);
    for ( int i=1; i < n ; i ++){
        for ( int j = 1; j <= i ; j ++){
            cout<<j;
            
        }
        for ( int j = 1 ; j <= space; j ++){
            cout<<" ";
        }
        for ( int j = i ; j >=1; j--){
            cout<<j;
        }
        cout<<endl;
        space = space -2;
    }
}
void print12( int n){
    int num = 1 ;
    for ( int i = 0 ; i < n ; i ++){
        
        for ( int j = 0 ; j < i ; j ++){
            cout<< num;
            num = num + 1;
        }
        cout << endl;
    }
}

void print13( int n ){
    
}
int main(){
    cout<<" namaste ji";
    int t;
    cin>>t;
    for ( int i = 0; i<t; i++){
        int n ;
        cin>>n;
        print12(n);

    }
}