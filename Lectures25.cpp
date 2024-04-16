/*
Advanced Binary Search

1.Book Allocation [GFG]
int s=0,e=0,mid,ans;
for(int i=0;i<n;i++){
    s=max(s,a[i]);
    e+=a[i];
}
while(s<=e){
    mid=s+(e-s)/2;
    page=0,count=1;
    for(int i=0;i<n;i++){
        page+=a[i];
        if(page>mid){
            count++;
            page=a[i];
        }
    }
    if(count<=M){
        ans=mid;
        e=mid-1;
    }
    else{
        s=mid+1;
    }
}
cout<<ans;

2.Painter Partition [GFG]
s=max,e=sum of all elements
"Same"

3.Ship Packages [1011.]
"Same"
*/