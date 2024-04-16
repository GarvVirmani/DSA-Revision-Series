/*
Questions

1.Peak Index in Mountain Array [852.]
if((a[mid]>a[mid-1])&&(a[mid]>a[mid-1]))
    return mid;
else if(a[mid]>a[mid-1])
    s=mid+1;
else
    e=mid-1;

2.Rotate Array(Minimum) [153.]
int ans=a[0];
if(a[mid]>=a[0])
    s=mid+1;
else{
    ans=a[mid];
    e=mid-1;
}

3.Search in Rotated Array [33.]
if(a[mid]==target)
    return mid;
else if(a[mid]>=a[0]){
    if(a[s]<=target && a[mid]>=target)
        e=mid-1;
    else
        s=mid+1;
}
else if(a[mid]<=target && a[e]>=target)
    s=mid+1;
else
    e=mid-1;

4.kth missing +ve integer [1539.]
int s=0,e=n-1,mid,ans=n;
while(s<=e){
    mid=s+(e-s)/2;
    if(a[mid]-mid-1>=k){
        ans=mid;
        e=mid-1;
    }
    else{
        s=mid+1;
    }
}
return ans+k;
*/