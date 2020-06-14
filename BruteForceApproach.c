#include<stdio.h>
#include<stdlib.h>
// upside down glasses problem
int n,i,j,k,count=0; //n is the number of glasses and count is the number of moves
int glass[10000];
int bruteforce(int n);
int main()
{
    printf("\n Enter number of glasses: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        glass[i]=1;  //1 represents glass is upside down
    }
    printf("\n Consider glass turned upside down as 1 and glass faced upward as 0:");
    printf("\n Solution:\n");
    for(k=0;k<n;k++)
    {
        printf("%d",glass[k]);
    }
    printf("\n");
    int res;
    res=bruteforce(n);
    printf("\n minimum number of moves=%d",res);
    return 0;                       //0 represents glass is faced upwards
}
int bruteforce(int n)
{
    if(n%2==1)
    {   for(i=0;i<n;i++)
    {
       for(j=n-1;j>=0;j--)
       {
           if(j!=i)
           {
               if(glass[j]==1)
               {
                      glass[j]=0;
               }
               else
               {
                   glass[j]=1;
               }
           }
       }
       for(k=0;k<n;k++)
       {
           printf("%d",glass[k]);
       }
       printf("\n");
    }
        printf("\n NOT POSSIBLE DUE TO ODD PARITY OF GLASSES!!");
        return 0;
    }
    else
    {for(i=0;i<n;i++)
    {
       for(j=n-1;j>=0;j--)
       {
           if(j!=i)
           {
               if(glass[j]==1)
               {
                      glass[j]=0;
               }
               else
               {
                   glass[j]=1;
               }
           }
       }
       for(k=0;k<n;k++)
       {
           printf("%d",glass[k]);
       }
       printf("\n");
       count++;
    }
    return count;
    }
}
