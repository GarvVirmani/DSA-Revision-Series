/*
Binary Search
"Sorted Array"
O(logN)

to prevent integer overflow use:
mid=s+(e-s)/2

[704.]
int s=0,e=n-1,mid;
while(s<=e){
    mid=s+(e-s)/2;
    if(a[mid]==x)
        return true;
    else if(a[mid]<x)
        s=mid+1;
    else
        e=mid-1;
}
*/