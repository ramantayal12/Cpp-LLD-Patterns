#include<bits/stdc++.h>
using namespace std;

int divide(int a, int b){

    if( b == 0 ){
        throw "Divide by 0 not possible";
    }
    return a/b;
}

int main(){

    int a, b;
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;
    try{
        cout<<"Dividing a by b : "<<divide(a, b)<<endl;;
    }
    catch( const char* msg ){
        cout<<msg<<endl;
    }

}