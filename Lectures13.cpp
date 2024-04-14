//LEETCODE Questions
/*
1.Add Digit [258.]
while(num>9){
    int ans=0,rem;
    while(num!=0){
        rem=num%10;
        num/=10;
        ans+=rem;
    }
    num=ans;
}
cout<<num;

2.Leap Year [GFG]
if(N%400==0) return 1;
else if(N%4==0 && N%100!=0) return 1;
else return 0;

3.Reverse Integer [7.]
int ans=0,rem;
while(x){
    rem=x%10;
    x/=10;
    ans=ans*10 + rem;
}

4.Power of 2 [231.]
if(x<1) return 0;
while(x!=1){
    if(x%2==1) return 0;
    x/=2;
}
return 1;

5.Sqrt x [69.]
if(x==0) return 0;
for(int i=1;i<=x;i++){
    if(i>x/i){
        return i-1;
    }
    else if(i==x/i){
        return i;
    }
}

6.Palindrome [9.]
if(x<0) return 0;
int num=x,rem,ans=0;
while(num){
    rem=num%10;
    num/=10;
    ans=ans*10 + rem;
}
if(ans==x) return 1;
else return 0;

7.Complement of a Number [1009.]
int ans=0,rem,mul=1;
while(n){
    rem=n%2;
    rem^=1;
    n/=2;
    ans=ans+ rem*mul;
    mul*=2;
}
*/