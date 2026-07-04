#include <string.h>
int romanToInt(char* s) {
    int c = 0;
    int i = 0;
    while(s[i]) {
        if(s[i]=='I' && s[i+1]=='V') {
            c += 4; i += 2;
        }
        else if(s[i]=='I' && s[i+1]=='X') {
            c += 9; i += 2;
        }
        else if(s[i]=='X' && s[i+1]=='L') {
            c += 40; i += 2;
        }
        else if(s[i]=='X' && s[i+1]=='C') {
            c += 90; i += 2;
        }
        else if(s[i]=='C' && s[i+1]=='D') {
            c += 400; i += 2;
        }
        else if(s[i]=='C' && s[i+1]=='M') {
            c += 900; i += 2;
        }
        else {
            if(s[i]=='I') c += 1;
            else if(s[i]=='V') c += 5;
            else if(s[i]=='X') c += 10;
            else if(s[i]=='L') c += 50;
            else if(s[i]=='C') c += 100;
            else if(s[i]=='D') c += 500;
            else if(s[i]=='M') c += 1000;
            i++;
        }
    }
    return c;
}
