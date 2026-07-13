int strStr(char* haystack, char* needle) {
    int h=strlen(haystack);
    int p=strlen(needle);
    for(int i=0;i<=h-p;i++) {
        int j=0;
        while (j < p && haystack[i + j] == needle[j]) {
             j++;
        }

        if (j == p) {
            return i;
        }
    }
    return -1;

    
}