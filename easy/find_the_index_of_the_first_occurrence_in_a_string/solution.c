int strStr(char* s1, char* s2) {
    char* n = strstr(s1,s2);
    if(n==NULL) return -1;
    return n-s1;
}