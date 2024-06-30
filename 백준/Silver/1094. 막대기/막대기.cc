#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);
    
    int stick_length = 64;
    int total_length = 0;
    int num_sticks = 0;
    
    while (total_length < X) {
        if (stick_length > (X - total_length)) {
            stick_length /= 2;
        } else {
            total_length += stick_length;
            num_sticks++;
        }
    }
    
    printf("%d\n", num_sticks);
    return 0;
}