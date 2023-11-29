#include <bits/stdc++.h>
int main() {
    int a[10];
    int i=0, ans=1, num, j;

    scanf("%d", &num);
    while (num > 0) {
        a[i] = num % 10;
        num /= 10;
        ans *= a[i];
        i++;
    }
    
    for (j=i-1; j>=0; j--) {
        printf("%d", a[j]);
        if (j == 0) {
            printf("=");
        } else {
            printf("*");
        }
    }
    printf("%d\n", ans);
}