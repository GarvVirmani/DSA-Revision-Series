#include<iostream>
using namespace std;
int main(){
    //While loop
    int i=1;
    while(i<=10){
        cout<<i<<" ";
        i++;
    }

    //do-while loop(runs atleast once)
    i=1;
    do{
        cout<<i<<" ";
        i++;
    }while(i<=10);

    //break(to exit from the loop)

    //continue(skips current value in loop)

    //Switch-Case
    i=1;
    switch(i){
        case 1:
        cout<<"HI";
        break;
        case 2:
        cout<<"BYE";
        break;
        default:
        cout<<"HI BYE";
        //break;(not necessary)
    }

    //Scope of a variable
    /*
    int a=5; //Global
    if(true){
        int a=10;//Local
    }
    */
}