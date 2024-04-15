/*
Selection Sort
(swap minimum element of unsorted array with 1st element of unsorted
array)

for(int i=0;i<n-1;i++){
    int ansIndex=i;
    for(int j=i+1;j<n;j++){
        if(a[j]<a[ansIndex]){
            ansIndex=j;
        }
    }
    swap(a[i],a[ansIndex]);
}
Time:          Space:
O(N^2)         O(1)

*/