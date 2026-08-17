#include <stdio.h>

int main() {
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'a'};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("First repeated character: %c\n", arr[i]);
                return 0;
            }
        }
    }

    printf("No repeated character found.\n");

    return 0;
}
