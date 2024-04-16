/*
Insertion Sort

for(int i=0;i<n-1;i++){
    int copy=a[i+1],j=i;
    while(j>=0 && a[j]>copy){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=copy;
}
Time:       Space:
O(N^2)      O(1)
*/