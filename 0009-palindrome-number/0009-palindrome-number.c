bool isPalindrome(int x) {
    char str[200];
    sprintf(str, "%d", x);
    int j=strlen(str)-1;
    int i=0;
    while(i<j){    
        if(str[i]!=str[j]) return false;
        i++;
        j--;
    }
    return true;
   
}