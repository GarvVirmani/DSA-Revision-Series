/*
Questions
1.Search Element [GFG]
int index=-1;
for(int i=0;i<n;i++){
    if(a[i]==x){
        index=i;
        break;
    }
}
return index;

2.Reverse Array
int i=0,n=5;
while(i<n){
    swap(a[i],a[n]);
    i++;
    n--;
}

3.Second Max [GFG]
int ans=a[0];
for(int i=0;i<n;i++){
    if(a[i]>ans){
        ans=a[i];
    }
}
int second=a[0];
for(int i=0;i<n;i++){
    if(ans!=a[i]){
        second=max(second,a[i]);
    }
}
cout<<second;

4.Missing Number [GFG]
int sum=0,Sum=0;
for(int i=0;i<n;i++){
    sum+=a[i];
}
Sum=n*(n+1)/2;
cout<<Sum-sum;

5.Fibonacci Series
int a[0]=0,a[1]=1;
for(int i=2;i<n;i++){
    a[i]=a[i-1]+a[i-2];
}
cout<<a[n-1];

6.Rotate array by 1 [GFG]
int temp=a[n-1];
for(int i=n-2;i>=0;i--){
    a[i+1]=a[i];
}
a[0]=temp;
*/