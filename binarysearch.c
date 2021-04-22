#include<stdio.h>

int binarySearch(int arr[], int size, int element)
{
  int low,mid,high;
   low =0;
   high = size-1;

  while(low<=high)
  {
    mid =(low + high)/2;
    if(arr[mid]==element)
    {
      return mid;

    }
    if(arr[mid]<element)
    {
      low = mid+1;

    }
    else
    {
      high = mid-1;
    }

  }
  return -1;
}


int main()
{
  int arr[] ={1,2,3,4,5,6,7,56,67,78,89};
  int size = sizeof(arr)/sizeof(int);
  int element = 7;
  int found = binarySearch(arr,size,element);
  printf("The result found at location %d is: %d",found,element);
}
