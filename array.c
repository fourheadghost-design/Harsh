#include <stdio.h>

int main() {
    int a[] = {10,20,30,40,50,};
    int n = 5, key;
    int low = 0, high = n - 1, mid;

    printf("Enter element:");
    scanf("%d", &key);

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == key) {
            printf("Element found");
            return 0;
}
        else if (key > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
}
    printf("Elment not found");
    return 0;
     
}


