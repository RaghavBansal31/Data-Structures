#include<stdio.h>
#include<stdlib.h>

struct queue{
  int size;
  int f;
  int r;
  int* arr;
};

int isfull(struct queue* ptr)
{
  if(ptr->r==ptr->size-1)
  return 1;
  else
  return 0;
}

int isempty(struct queue* ptr)
{
  if(ptr->r==ptr->f)
  return 1;
  else
  return 0;
}

void enqueue(struct queue* ptr, int data)
{
  if(isfull(ptr))
  {
    printf("Queue is Full\n");
  }
  else
  {
    ptr->r++;
    ptr->arr[ptr->r] = data;

  }
}

int dequeue(struct queue* ptr)
{
  if(isempty(ptr))
  {
    printf("Queue is Empty\n");
  }
  else
  {

    // int data = ptr->arr[ptr->f];
    // ptr->f++;

    //OR

    ptr->f++;
    int data = ptr->arr[ptr->f];


    return data;

  }
}
int main()
{
  // struct queue* ptr =(struct queue*)malloc(sizeof(struct queue));
  // ptr->r =-1;
  // ptr->f = -1;
  // ptr->arr = (int*)malloc(ptr->size * sizeof(int));
  // ptr->size = 5;
  //
  // printf("Before enqueing the queue is Empty: %d\n",isempty(ptr));
  // printf("Before enqueing the queue is Full: %d\n",isfull(ptr));
  // enqueue(ptr,5);
  // enqueue(ptr,6);
  // enqueue(ptr,7);
  // enqueue(ptr,8);
  // enqueue(ptr,9);
  // printf("After enqueing the queue is Empty: %d\n",isempty(ptr));
  // printf("After enqueing the queue is Full: %d\n",isfull(ptr));
  // printf("The element dequeued from the queue is: %d\n",dequeue(ptr));
  // printf("The element dequeued from the queue is: %d\n",dequeue(ptr));


// OR

  struct queue p;
  p.r = p.f = -1;
  p.size = 10;
  p.arr = (int*)malloc(p.size * sizeof(int));

  printf("Before enqueuing, Queue Empty: %d\n",isempty(&p));
  printf("Before enqueuing, Queue Full: %d\n",isfull(&p));

  enqueue(&p,10);
  enqueue(&p,20);
  enqueue(&p,30);
  enqueue(&p,40);

  printf("After enqueuing, Queue Empty: %d\n",isempty(&p));
  printf("After enqueuing, Queue Full: %d\n",isfull(&p));




  printf("The dequeued element is: %d\n",dequeue(&p));
  printf("The dequeued element is: %d\n",dequeue(&p));




}
