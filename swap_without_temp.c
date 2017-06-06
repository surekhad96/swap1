# include<stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
printf("Before swapping\na=%d\nb=%d");
a^=b;
b^=a;
a^=b;
printf("After swapping\na=%d\nb=%d");
return 0;
}
