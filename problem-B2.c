#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for(int i= 0;i<n; i++)
    {
        scanf("%d", &array[i]);
    }
    int anotherN;
    scanf("%d", &anotherN);
    for(int i= 0; i<n; i++)
    {
        if(array[i] == anotherN)
        {
            printf("%d", i);
            break; 
        }
        else if(i== n-1)
        {
            printf("-1");
        }
        
        
    }
    return 0;
}