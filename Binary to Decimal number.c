#include<stdio.h>
#include<string.h>
#include<math.h>
void main()
{
    int a[20],b[20];
    int i,j,k,cntint,cntfra,flag,rem;
    float rem1;
    char s[20];
    cntint=cntfra=flag=rem=0;
    rem1=0.0;
    printf("Enter the binary no : ");
    scanf("%s",s);
    for(i=0,j=0,k=0;i<strlen(s);i++)
    {
        if(s[i]=='.')
        {
            flag=1;
        }
        else if(flag==0)
        {
            a[j++]=s[i]-48;
        }
        else if(flag==1)
        {
            b[k++]=s[i]-48;
        }
    }
    cntint=j;
    cntfra=k;
    for(j=0,i=cntint-1;j<cntint;j++,i--)
    {
        rem = rem + (a[j] * pow(2,i));
    }
    for(k=0,i=1;k<cntfra;k++,i++)
    {
        rem1 = rem1 + (b[k] / pow(2,i));
    }
    rem1 = rem + rem1;
    printf("\nThe decimal value of the given binary is : %f",rem1);
}
