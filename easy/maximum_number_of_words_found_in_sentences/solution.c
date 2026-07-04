int mostWordsFound(char** a, int n) {
    int m = 0;
    for (int i = 0; i < n; i++) {
        int c = 1;
        for (int j = 0; a[i][j]; j++) {
            if (a[i][j] == ' ') {
                c++;
            }
        }
        if (c > m) {
            m = c;
        }
    }
    return m;
}
