#include <stdio.h>

int main() {
    int n;
    int limit;
    int list[10000] = {0};
    scanf("%d %d", &n, &limit);
    
    for(int i = 0; i < n; i++) {
        scanf("%d ", &list[i]);
        if(list[i] < limit){
            printf("%d ", list[i]);
        }
    }
    return 0;
}