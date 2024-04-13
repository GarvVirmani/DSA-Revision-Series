#include<iostream>
using namespace std;
int main(){
//Pattern Printing
//1
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cout<<"* ";
    }
    cout<<endl;
}
//2
for(int i=0;i<4;i++){
    for(int j=0;j<5;j++){
        cout<<10<<" ";
    }
    cout<<endl;
}
//3
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cout<<i+1<<" ";
    }
    cout<<endl;
}
//4
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cout<<j+1<<" ";
    }
    cout<<endl;
}
//5
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cout<<-j+5<<" ";
    }
    cout<<endl;
}
//6
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cout<<(j+1)*(j+1)<<" ";
    }
    cout<<endl;
}
//7
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        char c='a'+i;
        cout<<c<<" ";
    }
    cout<<endl;
}
//8
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cout<<5*i+j+1<<" ";
    }
    cout<<endl;
}

}


