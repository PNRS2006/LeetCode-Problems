char * defangIPaddr(char * a){
    int len = strlen(a);
    int dot_count = 0;
    
    for(int i = 0; i < len; i++) {
        if(a[i] == '.') dot_count++;
    }
    char * b = (char*)malloc((len + dot_count * 2 + 1) * sizeof(char)); 

    int j = 0;
    for(int i = 0; i < len; i++) {
        if(a[i] == '.') {
            b[j++] = '[';
            b[j++] = '.';
            b[j++] = ']';
        } else {
            b[j++] = a[i];
        }
    }

    b[j] = '\0';
    return b;
}
