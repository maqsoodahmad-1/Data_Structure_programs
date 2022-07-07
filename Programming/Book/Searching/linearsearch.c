/*program to insert an elements in an array and finding the location of any element inserted by a user  */

#include<stdio.h>
#define size 1000
void main()
{
 int i,a[size],search,loc=0,n;
printf("enter the size of an array :");
scanf("%d",&n);
printf("\nenter %d elements in an array \n",n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);

}
printf("\nelements of an array are \n");
for(i=0;i<n;i++)
{
 printf("%d\t",a[i]);
}
printf("\nenter element you want to search :");
scanf("%d",&search);
for(i=0;i<n;i++)
{
  if(a[i]==search)
  {
   loc=i+1;  
   break; 
  }
}
if(loc==0)
{
    printf("\nelement is not present at any location \n");
}
else{
    printf("\nelement is present at location %d \n",loc);
}
}
