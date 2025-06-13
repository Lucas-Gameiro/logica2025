#include <stdio.h>


int main() {
    int a;
    float b;
    char c;
    char d[51];
    scanf("%i",&a);
    scanf("%f",&b);
    scanf("%c",&c);
    scanf(" %[^\n]s",d);
    printf("%i",a);
    printf("%.6f",b);
    printf("%c",c);
    printf("%s\n",d);
    printf("%i\t%.6f\t%c\t%s\n",a,b,c,d);
    printf("%-10i%-10.6f%-10c%-10s\n",a,b,c,d);
    
    return 0;
}
