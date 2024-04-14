/*
Functions in C++
Syntax:

return_type func_name(Paramteres){
    //code
    return value;
}

//Prime
bool prime(int n){
    if(n<2) return 0;
    for(int i=2;i<n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}

//Factorial
int fact(int n){
    int ans=1;
    for(int i=2;i<=n;i++){
        ans*=i;
    }
    return ans;
}

//Pass By Value
void incr(int n){
    n++;
}

//Pass By Reference
void incr(int &n){
    n++;
}
*/