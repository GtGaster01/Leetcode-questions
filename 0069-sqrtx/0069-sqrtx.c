int mySqrt(int x) {
    if(x<2) return x;
    int i=1, j=x/2;
    int result =0;
    while(i<=j){
        long mid =i+((j-i)/2);
        long sqr=mid*mid;
        if(sqr==x) return mid;
        else if(sqr<x){
            result =mid;
            i=(int)mid+1;
        }else j=(int)mid-1;

    }
    return result;
}