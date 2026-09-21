#include <stdio.h>

int arr[5], top = -1;
void push(int x) {
    arr[++top] = x;
}

void pop() {
    top--;
}

void display() {
    int i;
    for (i = top; i >= 0; i--)
        printf("%d ", arr[i]);
}

int main() {
    push(10);
    push(20);
    push(30);
    pop();

    printf("\nAfter pop:");
    display();
    return 0;
}

