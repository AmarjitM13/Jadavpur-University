#include<stdio.h>
void getArmstrong(int num)
{
    int r, sum=0,temp;
    temp=num;
    while(num>0)
        {
            r=num%10;
            sum=sum+(r*r*r);
            num=num/10;
        }
    if(temp==sum)
    printf("armstrong  number ");
    else
    printf("not armstrong number");
}

int main()
{
    int n,r,sum=0,temp;
    printf("enter the number=");
    scanf("%d",&n);

    getArmstrong(n);

return 0;
}
