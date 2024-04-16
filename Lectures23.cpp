/*
Questions
1.First and Last position of element [34.]
int s=0,e=n-1,mid,first=-1;         //last=-1
while(s<=e){
    mid=s+(e-s)/2;
    if(a[mid]==target){
        first=mid;                  //last=mid
        e=mid-1;                    //s=mid+1
    }
    else if(a[mid]<x)
        s=mid+1;
    else
        e=mid-1;
}

2.Search Insert Position [35.]
int s=0,e=n-1,index=n;
while(s<=e){
    if(a[mid]==target){
        index=mid;
        break;
    }
    else if(a[mid]<target)
        s=mid+1;
    else{
        index=mid;
        e=mid-1;
    }
}

3.Sqrt(x) [69.]
if(x<2) return x;
int s=0,e=x,mid,ans;
while(s<=e){
    mid=s+(e-s)/2;
    if(mid==x/mid){
        ans=mid;
        break;
    }
    else if(mid<x/mid){
        ans=mid;
        s=mid+1;
    }
    else
        e=mid-1;
}
*/