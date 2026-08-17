#include <stdio.h>

int main() {
    char arr[] = {'a', 'b', 'c', 'b', 'd', 'a', 'e'};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = n - 1; i >= 0; i--) {
        for (int j = i - 1; j >= 0; j--) {
            if (arr[i] == arr[j]) {
                printf("Last repeated character: %c\n", arr[i]);
                return 0;
            }
        }
    }
    
    printf("no last repeated character:");
    
    return 0;
    }


