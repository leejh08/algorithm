#include <stdio.h>

int main()
{
    
    
    int a;
    scanf("%d",&a);
    int arr[a];
    
    for(int i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int c;
    scanf("%d",&c);
    
    int cnt=0;
    for(int i=0; i<a; i++)
    {
        if(arr[i]==c) cnt++;
    }
    
    printf("%d",cnt);
    return 0;
}
