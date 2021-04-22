#include<stdio.h>
#include<stdlib.h>

struct queue{
  int r;
  int q;
  int size;
  int* arr;
};

int isFull(struct queue * p)
{
  if(p->r == p->size-1)
  {
    return 1;

  }
  else
  {
    return 0;
  }
}

int isEmpty(struct queue * p)
{
  if(p->r && p->q == -1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void enqueue(struct queue* p, int data)
{
  if(isFull(p))
  {
    printf("Queue Overflow");
  }
  else
  {
    p->q++;
    p->arr[p->q]=data;

  }
}

int dequeue(struct queue* p)
{
  if(isEmpty(p))
  {
    printf("Queue Underflow");
    return -1;

  }
  else
  {
    p->r++;
    int a = p->arr[p->r];
    return a;
  }
}

int main()
{
  struct queue p;
  p.r = p.q = -1;
  p.size = 10;
  p.arr = (int*)malloc(p.size * sizeof(int));

  printf("Before enqueuing, Queue Empty: %d\n",isEmpty(&p));
  printf("Before enqueuing, Queue Full: %d\n",isFull(&p));

  enqueue(&p,10);
  enqueue(&p,20);
  enqueue(&p,30);
  enqueue(&p,40);

  printf("After enqueuing, Queue Empty: %d\n",isEmpty(&p));
  printf("After enqueuing, Queue Full: %d\n",isFull(&p));




  printf("The dequeued element is: %d\n",dequeue(&p));
  printf("The dequeued element is: %d\n",dequeue(&p));





}
