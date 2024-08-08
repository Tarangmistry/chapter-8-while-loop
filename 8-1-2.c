#include <stdio.h>

int main() {
    int i = 1; // Start at 1
    int N; // End with N
    printf("enter te value: ");
    scanf("%d",&N);
    
    while (i<= N) {
        printf("%d\n", i); // Print the value of num followed by a newline
        i++; // Increment N
    }
}
