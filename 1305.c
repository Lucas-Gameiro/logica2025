#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(char *a, char *b) {
    int la = strlen(a);
    int lb = strlen(b);
    int max = (la > lb) ? la : lb;
    for (int i = 0; i < max; i++) {
        char ca = (i < la) ? a[i] : '0';
        char cb = (i < lb) ? b[i] : '0';
        if (ca > cb) return 1;
        if (ca < cb) return 0;
    }
    return 0;
}

int main() {
    char num[11], cutoff[11];
    while (scanf("%s %s", num, cutoff) == 2) {
        int r = 0;
        char f[11] = "";
        char *p = strchr(num, '.');
        if (p != NULL) {
            *p = '\0';
            r = atoi(num);
            strcpy(f, p + 1);
        } else {
            r = atoi(num);
            strcpy(f, "0");
        }
        char c[11];
        strcpy(c, cutoff + 2); // Pular "0."
        if (cmp(f, c)) {
            r++;
        }
        printf("%d\n", r);
    }
    return 0;
}
