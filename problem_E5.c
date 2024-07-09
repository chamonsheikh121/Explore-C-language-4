#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i= 0; i<n;i++)
    {
        scanf("%d", &array[i]);
    }
    int min = array[0];
    
    for(int i=0; i<n; i++)
    {
        if(array[i]< min)
        {
            min=array[i];
            
        }
    }
    int position = 0;
    for(int i=0; i<n;i++)
    {
        if(array[i]== min)
        {
            position = 1 +i;
            break;
        }
    }
    printf("%d %d", min , position);
    return 0;
}