## Queue
It is a linear data structure which can perform operations. The rule/principle of operation of queue is : The element is inserted inside the queue will be the 1st element to be attended.
Queues are usually arrays or linked lists.

First in First Out (FIFO)
Last in Last Out (LILO)
Queue = Array + FIFO

There is no predefined library for queue or stacks in general. It is a programmers decision on how they want the array to work and specify the rules.

Double-ended Queue is dqueue in which FIFO rule is followed.
It is a data structure which has 2 ends - Rear Ends and a Front end. It is Open ended on both ends.
Data elements are inserted into the queue from the Rear end and deleted from the Front end.

The 2 major operations on a Queue are :
1) enqueue() - add (store) an item to the queue from the rear end
2) dequeue() - remove(access) an item from the queue from front end
Few other operations are:
1) peek() - gets the element at the front of the queue without removing it
2) isfull() - checks if the queue is full
3) isempty()- checks if the queue is empty or not

Example:
Simple queue implementation using arrays w/o any modification or upgrade to simple queue.
```c
#include<stdio.h>
#include<stdlib.h>
int f=-1,r=-1;
void insert(int n,int q[n])
{
	if(r!=n-1)
	{
		printf("enter element to be inserted\n");
		scanf("%d",&q[++r]);
	}
	else
		printf("queue overflow!! can't insert\n");
}

void delete(int n, int q[n])
{
	if(f<r && r>=0)
	{
		printf("element %d deleted\n",q[++f]);	
		
	}
	else if((f==r && r!=n-1) ||f==-1)
	{
		printf("queue empty!! deletion not possible\n");
	}
	else if(f==r && r==n-1)
	{
		printf("queue empty!! deletion not possible\n");f=-1,r=-1;
	}
}

void display(int n,int q[n])
{
	if(r==-1 ||f>r ||f==r)
	{
		printf("queue empty!! nothing to display!!\n");
	}
	for(int i=f+1;i<=r;i++)
	{
		printf("%d\t",q[i]);
	}

}	
int main()
{
	int n;
	printf("enter the queue size\n");
	scanf("%d",&n);
	int q[n];
	for(;;)
	{
		printf("\nenter your operation choice on queue\n");
		printf(" 1:insert\n 2:delete\n 3:display\n 4:exit\n");
		int ch;scanf("%d",&ch);	
		switch(ch)	
		{
			case 1:insert(n,q);break;
			case 2:delete(n,q);break;
			case 3:display(n,q);break;
			case 4:exit(0);break;
			default:printf("invalid choice\n");
		}
	}
	return 0;
}
```

## Types of Queue:

There are primarily four types of queues:
1) **Ordinary Queue** - Insertion takes place at the rear and deletion takes place at the front.
2) **Priority Queue** - special type of queue in which each element is associated with a priority and is served according to its priority occur, they are served according to their order in the queue.
3) **Circular Queue** - Last element points to the first element of the queue making circular link.
4) **Double ended queue** - insertion and removal of elements can be performed from either the front or rear
## Priority Queue
A data structure which is like a regular queue but where additionally each element has a "priority" associated with it.
This priority decides the dequeue operation. The enqueue operation stores the item and the priority information.

## Types of Priority Queue :
### Ascending priority queue 
The smallest number has the highest priority.

### Descending priority queue 
 The highest number gets the highest priority.
## Applications of Priority Queues:

1) Implementation of heap data structure/sort
2) Dijkstra's Shortest Path Algorithm
3) Prim's Algorithm
4) Data Compression
5) OS - Load  balance algorithm

### Priority Queue can be implemented in many ways :

⚫ Using an Unordered Array

⚫ Using an Ordered Array

⚫ Using an Unordered Linked list

⚫ Using an Ordered Linked list

⚫ Using Heap