#include<stdio.h>
#include<stdlib.h>
#define MAX_QSIZE 5
typedef struct SqQueue
{
    int *base;
    int front;
    int rear;
}SqQueue;

SqQueue* init()
{
    SqQueue *q = (SqQueue*)malloc(sizeof(SqQueue));
    q->base = (int*)malloc(MAX_QSIZE * sizeof(int));
    q->front = q->rear = 0;
    return q;
}
void destroyQueue(SqQueue*q)
{
    if(q == NULL) return;
    if(!q->base) free(q->base);
    q->front = q->rear = 0;
    free(q);
}

void clearQueue(SqQueue*q)
{
    q->front = q->rear = 0;
}
bool isEmpty(SqQueue*q)
{
    if(q->front == q->rear) return true;
    return false;
}
bool enQueue(SqQueue*q,int e)
{
    if(q == NULL) false;
    if((q->rear + 1) % MAX_QSIZE == q->front) return false;
    q->base[q->rear] = e;
    q->rear = (q->rear+1)%MAX_QSIZE;
    return true;
}
int main()
{
    printf("hello world");
    printf("sdf");
    return 0;
}