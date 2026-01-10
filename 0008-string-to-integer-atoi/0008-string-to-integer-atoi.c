
bool isDigit(char c){
    if(c>='0' &&c<='9' ) return true;
    return false;
}



int myAtoi(char* s) {
    long  x=0;
    int opCont=0;
    int i=0;

    while(s[i]==' '){
        i++;
    }

    if(s[i]=='-'){
        opCont=1;
        i++;
    }else if(s[i]=='+') i++;

    while(s[i]!='\0'){
        if(isDigit(s[i])){
            x=10*x+(s[i]-'0');
            if(opCont==1 && -x<-2147483648) return -2147483648;
            if(opCont==0 && x>2147483647) return 2147483647;
            i++;
       }
       else break;
    }
    if(opCont==1) return (int)(x*(-1));
    return (int)x;
}