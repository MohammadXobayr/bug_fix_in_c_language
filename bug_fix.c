#include <stdio.h>

int main()
{
    int n;
    int i;
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    
        if (i % 3 == 0 && i % 5 == 0 )
        {
            printf("%d ThreeFive\n",i);
            
        }
        else if(i % 5 == 0)
        {
            printf("%d Five\n",i);
        }
        else if (i % 3 == 0)
        {
            printf("%d Three\n",i);
        }
        
        
        else
        {
            printf("%d\n",i);

        }

    return 0;
}
