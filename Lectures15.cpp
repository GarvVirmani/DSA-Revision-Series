/*
Questions

1.Convert 'a' to 'A'
char convert(char name){
    char ans=name+'A'-'a';
    return ans;
}

2.Armstrong Number
int count(int n){
    int c=0;
    while(n){
        c++;
        n/=10;
    }
    return c; //number of digits
}
bool armstrong(int num,int digit){
    int n=num,ans=0,rem;
    while(n){
        rem=n%10;
        n/=10;
        ans+=pow(rem,digit);
    }
    if(ans==num) return 1;
    else return 0;
}

3.Find Trailing zeroes in a factorial [GFG]
int c=0;
while(N>=5){
    c+=N/5;
    N/=5;
}

4.Can I form rectangle with 4 sides? [GFG]
if(((a==b)&&(c==d))||((a==c)&&(b==d))||((a==d)&&(b==c)))
return 1;
else
return 0;

5.Total Moves for Bishop with Logical Approach [InterviewBit]
int c=0;
c+=min(8-A,8-B);
c+=min(8-A,B-1);
c+=min(A-1,B-1);
c+=min(A-1,8-B);

6.Nim Game [292.]
if(N%4==0) return 0;
else return 1;
*/