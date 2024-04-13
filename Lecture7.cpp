#include<iostream>
using namespace std;
int main(){
    //1
    for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(i>=j)
        cout<<"* ";
    }
    cout<<endl;
    }
    //2
    for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(i>=j)
        cout<<j+1;
    }
    cout<<endl;
    }
    //3
    for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(i+j<=4)
        cout<<"* ";
    }
    cout<<endl;
    }

}