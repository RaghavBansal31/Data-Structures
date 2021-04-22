#include<stdio.h>

int linearSearch(int arr[], int size, int element)
{
  int i;
  for(i=0;i<size;i++)
  {
    if(arr[i]==element)
    {
      //printf("The number is found at location %d and the number is: %d\n",i+1,arr[i]);
      return i;
    }

    }
      return -1;

}

int main()
{
  int arr[100]={1,2,3,4,5,6,67,8,10,9,75,78};
  int size = 12;      //sizeof(arr)/sizeof(int)   :This could also be used to find size.
  int element = 67;
  int found = linearSearch(arr,size,element);
  printf("The Number found at location %d is: %d",found,element);
}
