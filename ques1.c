/*
Create a C program that reads an array of integers from the user, calculates the average of the integers, and prints
the result. Initialize a new Git repository for this project, commit the code, and upload it to your GitHub account.
Provide the URL of the repository.

*/

#include <stdio.h>

int main(void) {
  int n,i;
  float sum=0,average;
  printf("Enter the length of the array");
  scanf("%d",&n);
 
  
  int *ptr=(int *)malloc(n*sizeof(int));
  if(ptr==NULL){
    printf("Memory allocation failed\n");
    return 1;
  }

  printf("Enter %d integers: \n",n);
  for(i=0;i<n;i++){
    scanf("%d",&ptr[i]);
    sum+=ptr[i];
  }

  average=sum/n;
  printf("Average= %.2f\n",average);
  free(ptr);
  return 0;
}
