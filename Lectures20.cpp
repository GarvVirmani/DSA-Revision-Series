/*
Bubble Sort
(Compares two adjacent elements)

for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
}
Time:              Space:
O(N^2)             O(1)

Optimized Bubble Sort

for(int i=0;i<n-1;i++){
    bool swapped=0;
    for(int j=0;j<n-1-i;j++){
        if(a[j]>a[j+1]){
            swapped=1;
            swap(a[j],a[j+1]);
        }
    }
    if(swapped==0) 
        break;
}
*/