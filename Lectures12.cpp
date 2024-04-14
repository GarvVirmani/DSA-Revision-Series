#include<iostream>
using namespace std;
int main(){
    //Decimal to Binary
    int num;
    cin>>num;
    int rem,ans=0,mul=1;
    while(num>0){
        rem=num%2;
        num=num/2;
        ans=rem*mul + ans;
        mul=mul*10;
    }
    cout<<ans<<endl;

    //Binary to Decimal
    cin>>num;
    rem,ans=0,mul=1;
    while(num){
        rem=num%10;
        num/=10;
        ans+=rem*mul;
        mul*=2;
    }
    cout<<ans;

    //Binary to Octa (Binary to Decimal to Octa)
}