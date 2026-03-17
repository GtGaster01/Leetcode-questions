

int reverse(int x){ 
    long result=0;
    int temp=x;
    while(temp!=0){
        result=(result*10)+(temp%10);
        if(result>INT_MAX ||result<INT_MIN) return 0;
        temp/=10;
    }
    return result;
}