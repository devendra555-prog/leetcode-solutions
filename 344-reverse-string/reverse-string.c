void reverseString(char* s, int sSize) {
    int i=0;
    while(i<sSize) {
        char temp=s[i];
        s[i]=s[sSize-1];
        s[sSize-1]=temp;
        i++;
        sSize--;
    }
    
}