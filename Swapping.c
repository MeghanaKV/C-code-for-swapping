#include<stdio.h>
main()
{ 
int a,b;
//initialising variables of integer data type
printf("enter the values of a and b\n");
//asking to enter the two numbers a and b
scanf("%d%d",&a,&b);
//taking the input numbers a and b
printf("berfore swapping:a=%d,b=%d\n",a,b);
//printing the values of a and b before swapping
a=a+b;
b=a-b;
a=a-b;
//expressions to perform swaping operation
printf("after swapping :a=%d,b=%d\n",a,b);
//getting output after swapping operation
return(0);
}
