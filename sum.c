#include <stdio.h>

int main ()
{
int elements, i;
printf("Enter number of elements in the Array");
 scanf("%d", &elements);
 
 int array[elements];
  printf("Enter elements to be stored in the array");
  for(i=0; i<elements; i++)
 {
   scanf("%d", &array[i]);
}
 printf("No of elements in reverse order");
  for(i = i-1; i>=0; i--)
{
	printf("%d ", array[i]);
}
  return 0;
  

}
