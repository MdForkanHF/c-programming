// video 6-3
#include<stdio.h>
int main()
{
    int n;  // koita value dibo 
    scanf("%d",&n);
    int a;
    int even=0, odd=0, pos=0, neg=0;
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            even++;
            // printf("%d\n",a);  // test korte eta kaje ashe
        }
        else if(a%2==1 || a%2==-1 )
        {
            odd++;
            // printf("%d\n",a);

        }

        if(a>0)
        {
            pos++;
            // printf("%d\n",a);

        }
        else if(a<0)
        {
            neg++;
            // printf("%d\n",a);

        }
        else
        {
            //zero // but eta likhe kono kaj nai, tai kichu likhbona
        }
    }
    printf(" Even: %d\n Odd: %d\n Positive: %d\n Negative: %d", even, odd, pos, neg);

    return 0;
}