//Implement linear search to find key k in an array. Count and display the number of comparisons performed.
#include <stdio.h>

int main() {
    int n, k, c = 0;
    int a[100];
    int f = -1;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    
    for (int i = 0; i < n; i++) {
        c++;
        if (a[i] == k) {
            f= i;
            break;
        }
    }
    
    if (f!= -1) {
        printf("Found at index %d\n", f);
    } else {
        printf("Not Found\n");
    }
    printf("Comparisons = %d\n", c);
    
    return 0;
}