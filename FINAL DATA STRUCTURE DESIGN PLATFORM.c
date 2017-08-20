#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<malloc.h>
#define F 0
#define T 1
#define MAX 50

void QUEUE_ARRAY();
void STACK_ARRAY();
void BINARY_TREE();
void QUEUE_LL();
void STACK_LL();
void AVL_TREE();
void SORT();

int array[100],pivot,j,i,tmp,size,x[20];

void main()
{
	

	int chi;
	
	system("COLOR FC");
    printf("\n\n\n\n************************************WELCOME TO INTERACTIVE DATA STRUCTURE DESIGN APPLICATION*******************************************\n");
    getch();
    system("COLOR FA");
    getch();
	printf("\n\t\t\t\t\t*****INTERACTIVE DATA STRUCTURES DESIGN*****\n\n");
	system("COLOR F9");
    getch();
	printf("\n\t\t\t\t>>Insertion,Deletion,Traversal through:\n\t\t\t\t\t1.1 Stack Using Array\n\t\t\t\t\t1.2 Stack Using Linked List\n\t\t\t\t\t1.3 Queue Using Array\n\t\t\t\t\t1.4 Queue Using Linked List\n\t\t\t\t>>Tree Traversal Techniques:\n\t\t\t\t\t2.1 Binary Search Tree\n\t\t\t\t\t2.2 AVL Tree\n\n\t\t\t\t>>Sorting Implementation:\n\t\t\t\t\t3.1 Quick Sort\n\t\t\t\t\t(Time Taken)\n\t\t\t\t\t3.2 Selection Sort\n\t\t\t\t\t(TimeTaken)\n\t\t\t\t\t3.3 Searching After Sorting\n\t\t\t\t\t(Time Taken)\n\n");
	
	do
	{   
	    system("COLOR 10");
        getch();
		printf("\n\t\tCHOOSE FROM\n");
		printf("\n\t\t1)Insertion,Deletion,Traversal through:\n ");
		printf("\n\t\t2)Tree Traversal through:\n ");
		printf("\n\t\t3)Sorting Implementation using:\n ");
		printf("\n\t\t4)Exit from Interactive Data Structure Platform\n");
		printf("\n\t\tENTER YOUR  CHOICE:");
	  	scanf("%d",&chi); 
	  	
	switch(chi)
		{
		case 1:	fun1();    //For Insertion,Deletion,Traversal
	        	break;
	    case 2: fun2();  //For Tree Traversal Techniques
		         break;
		case 3: SORT();   //For Sorting concepts
		 		break; 	
		case 4: exit(0);
				break;
		
		}
    }while(chi!=4);
}

int fun1()
{
     	int ch_m;
     	system("COLOR F9");
    	getch();
    printf("\n 1.1 - STACK Using Array");
    printf("\n 1.2 - STACK Using Linked List");
	printf("\n 1.3 - QUEUE Using Array");	
    printf("\n 1.4 - QUEUE Using Linked List");
    printf("\n 1.5 - Exit from current function(Insertion,Deletion,traversal)\n");
    
	do
	{
		system("COLOR 2C");
    	getch();
        printf("\n*************************ENTER YOUR CHOICE*****************************\n\t\t\n\t1)Stack Using Array\n\t2)Stack Using Linked List\n\t3)Queue Using Array\n\t4)Queue Using Linked List\n\t5)Exit from current function(Insertion,Deletion,traversal)\n\t:");
        scanf("%d", &ch_m);
        switch (ch_m)
        {
        case 1:printf("\n\n\tImplementation of STACK using array!\n\n");
        	   STACK_ARRAY();
        	    break;
                
        case 2:	printf("\n\n\tImplementation of STACK using linked list!\n\n");
            	STACK_LL(); 
                break;

        case 3: printf("\n\n\tImplimentation of QUEUE using array!\n\n");
        	    QUEUE_ARRAY();
                break;
                
        case 4:printf("\n\n\tImplementation of QUEUE using linked list!\n\n");
             	QUEUE_LL();
             	break;
             	
        default:printf("\n\n\t\tPLEASE ENTER A VALID CHOICE\n\n");
                break;
        }
    } while(ch_m!=5);
}

int fun2()     //Tree Traversal
{   
	system("COLOR 10");
    getch();
	
    int ch_m2; 
	printf("\n 1 - BINARY TREE");
    printf("\n 2 - AVL TREE");
    printf("\n3-Exit from current function(Tree Traversal)\n");
    
    do
    {
    	printf("\n*************************ENTER YOUR CHOICE*****************************\n\t\t1)Binary Tree\n\t\t2)AVL Tree\n\t\t3)Exit from Tree Traversal Operation\n\t\t:");
        scanf("%d", &ch_m2);
    	
    	switch(ch_m2)
    	{
    	case 1:printf("\n\n\tImplementation of BINARY TREE!\n\n");
        	   BINARY_TREE();
               break; 
        
        case 2:printf("\n\n\tImplementation of AVL TREE!\n\n");
        	   AVL_TREE();
               break; 
    		
		}
	}while(ch_m2!=3);
    
}

/*
*****************************************SORTING PROGRAM************************************************************
*/

 void quicksort(int x[10],int first,int last)
{
    if(first<last)
	 {
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 tmp=x[i];
                  x[i]=x[j];
                  x[j]=tmp;
             }
         }

         tmp=x[pivot];
         x[pivot]=x[j];
         x[j]=tmp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
    
}

void insertion_sort(int * x)
{
    int tmp, i, j;
 
    for (i = 1;i < size;i++)
    {
        tmp = x[i];
        j = i - 1;
        while (tmp < x[j] && j >= 0)
        {
            x[j + 1] = x[j];
            j = j - 1;
        }
        x[j + 1] = tmp;
    }
}

void SAS()      // Searching after sorting 
{
    int array[100];
    int i, j, num, tmp, keynum;
    int low, mid, high;
	
	printf("\n\tEnter the number of elements :\n\t");
    scanf("%d", &num);
    printf("\n\tEnter the elements one by one \n");
    for (i = 0; i < num; i++)
    {
    	printf("\t:");
        scanf("%d", &array[i]);
    }
	  
	 /*  Bubble sorting begins */
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < (num - i - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
    printf("\n\tSorted array is...\n");
    for (i = 0; i < num; i++)
    {
        printf("\t:%d\n", array[i]);
    }
    printf("\tEnter the element to be searched \n\t");
    scanf("%d", &keynum);
    /*  Binary searching begins */
    low = 1;
    high = num;
    do
    {
        mid = (low + high) / 2;
        if (keynum < array[mid])
            high = mid - 1;
        else if (keynum > array[mid])
            low = mid + 1;
    } while (keynum != array[mid] && low <= high);
    
    if (keynum == array[mid])
    {
		printf("\n\tSEARCH SUCCESSFUL \n");
		printf("\nNumber of elements is:%d\n",num);
	}
    else
    {
        printf("\n\tSEARCH FAILED \n");
    }
}

void SORT()
{   
	
	
    clock_t begin, end;
	double time_spent;

	begin = clock();
	
	system("COLOR 2C");
    getch();
	int sr;
	printf("Choose an option:\n1)Quick Sort\n2)Insertion Sort\n3) Searching after Bubble Sorting\n4)Exit for this function(Sorting)\n");
	
	
	do
	{
	  printf("\n**********Enter Your Choice************\n\t\t\n1)Quick Sort\n2)Insertion Sort\n3) Searching after Bubble Sorting\n4)Exit for this function(Sorting)\n\t\t: ");
	  scanf("%d",&sr);
	  switch(sr)
	  {
		  	case 1: printf("\n\n\tEnter size of the array: ");
   					scanf("%d",&size);
    				printf("\n\tEnter %d elements\n",size);
  					for(i=0;i<size;i++)
					  {
					  	printf("\t:");
   	    				scanf("%d",&array[i]);
   					  }
					quicksort(array,0,size-1);
					
	    	     	printf("\nSorted list of elements via Quick Sort is as:\n ");
	 				for(i=0;i<size;i++)
	    			   printf("\n\t%d\n",array[i]);
	    			   
	    			   //run time calculation
	    			   end = clock();
					   time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
					   printf("\ntime_spent=%f\n",time_spent); //end of run time calculation
					   
					break;
					
			case 2:	
					printf("\n\n\tEnter size of the array: ");
	   				scanf("%d",&size);
	    			printf("\n\tEnter %d elements\n",size);
	  				for(i=0;i<size;i++)
	  				{
						printf("\t:");
	   	    			scanf("\n\t%d",&array[i]);
					}
        			insertion_sort(array);
        			
    				printf("Sorted elements:\n");
    				for (i = 0;i < size; i++)
   	 				{
        				printf("\t%d", array[i]);
    				}
					// time calculation by clock speed
						
        				end = clock();
						time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
						printf("\nTime_spent=%f\n",time_spent);
						
			         break;	
			         
			case 3:  	SAS();
						end = clock();
						time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
						printf("\nTime_spent=%f\n",time_spent);
					 break;
      }	
        
   	}while(sr!=4);
   }

/*
******************************************END OF SORTING PROGRAM*******************************************
*/

/*
QUEUE USING ARRAY
*/

int queue_array[MAX];
int rear = - 1;
int front = - 1;

void QUEUE_ARRAY()
{
    int choice;
    do
	{
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display_q_a();
            break;
        } /*End of switch*/
    }while(choice!=4);  /*End of while*/
} /*End of main()*/

insert()
{
    int add_item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        /*If queue is initially empty */
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
} /*End of insert()*/
 
delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }
} /*End of delete() */

display_q_a()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
} /*End of display() */

/*
********************************************************END OF FUNCTION QUEUE USING ARRAY**********************************************************
*/
/*
****************************************************************STACK USING ARRAY******************************************************************
*/
 
int stack[10];
int top=-1,size;
void push();
void pop();
void display();

void STACK_ARRAY()
{  
	int ch=0,i;
	printf("Enter the size of stack: ");
	scanf("%d",&size);
	do
	{
		printf("\n1)PUSH\n2)POP\n3)DISPLAY\n4)EXIT\n\n\t\tEnter your choice : ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: push();
			        break;
			 case 2:pop();
			        display();
                    break;
			case 3:display();
			       break;
				  		  			 
		}
	}	while(ch!=4);

}

void push()
{     int n;
     printf("Enter the elemnts to add: ");
     scanf("%d",&n);

	if(top<size-1)
	{
		
		top++;
		stack[top]=n;
		printf("top=%d size=%d",top,size);
		
	}
	else
	{
		printf("Stack is full");
		
    }
}

void pop()
{
	if(top==-1)
	   printf("Stack is empty");
	else
	{
		printf("\nPopped element is:%d\n",stack[top]);
		top--;
    }   
}

void display()
{
	int j;
	if(top==-1)
		printf("Stack is empty");
	else
	{
		for(j=top;j>=0;j--)
		{
			printf("%d\t",stack[j]);
		}

	}
}

/*
*************************************************************BINARY TREE****************************************************************************
*/
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct node
{
	int data;
	struct node *left,*right;
};
struct node *root;

void ins(struct node *n,int val,int opt)
{
	 struct node *t;
	t=(struct node *)malloc(sizeof(struct node));
	t->data=val;
	t->right=t->left=NULL;
	if (opt==1)
		 n->left=t;
	else
		n->right=t;
		printf("\n %d is inserted",val);
	if (opt==1)
	{
		printf("\tat the left\n");

   	}
	else
	{
	printf("\tat the right\n");
	 }
}

void inser(struct node *t,int x)
{
	if (t->data >x)
	if (t->left==NULL)
		ins(t,x,1);
	else
		inser(t->left,x);
	else if (t->data < x)
		if (t->right==NULL)
			ins(t,x,2);
		else
			inser(t->right,x);
		else
		 printf("\n Element is already present in the list\n");
}

void inorder(struct node *p)
{
  if (p!=NULL)
  {
	inorder(p->left);
  	printf("\n %5d",p->data);
  	inorder (p->right);
  }
}

void preorder(struct node *p)
{
	if (p!=NULL)
	{
		printf("\n %5d",p->data);
		preorder(p->left);
		preorder (p->right);

  	}
}

 void postorder(struct node *p)
{
  if (p!=NULL)
  {
  	preorder(p->left);
	preorder (p->right);
 	printf("\n %5d",p->data);
  }
}


void BINARY_TREE()
{
      
	int op,n;

	root=(struct node *)malloc(sizeof(struct node));

	root->data=30;

	root->right=root->left=NULL;


	do

	{
		system("COLOR 10");
   		getch();

    	printf("\n 1.Insertion");

    	printf("\n 2.Preorder");

    	printf("\n 3.Inorder");

    	printf("\n 4.Postorder");

    	printf("\n 5.Quit");

    	printf("\n Enter your choice\n");

    	scanf("%d",&op);

 

  		switch (op)
		{

    		case 1: printf("\n Enter the element to insert\n");
					scanf("%d",&n);
			  		inser(root,n);
			  		break;

    		case 2: printf("\n The preorder elements are\n");
                    preorder(root);
			  		break;

    		case 3: printf("\n The inorder elements are\n");
					inorder(root);
			  		break;

 

    		case 4: printf("\n The postorder elements are\n");
					postorder(root);
					break;

   		}
	}while(op<5);
}
 

/*
********************************************************END OF FUNCTION BINARY TREE*****************************************************************
*/

/*
********************************************************QUEUE USING LINKED LIST*********************************************************************
*/


struct node_Q_L
{
    int info;
    struct node_Q_L *ptr;
}*front_l,*rear_l,*temp,*front1;
 
int frontelement();
void enq(int data);
void deq();
void empty();
void display_q_l();
void create();
void queuesize();
 
int count = 0;
 
void QUEUE_LL()
{
    int no, ch, e;
    
    system("COLOR 10");
    getch();
 
    printf("\n 1) - Enque");
    printf("\n 2) - Deque");
    printf("\n 3) - Front element");
    printf("\n 4) - Empty");
    printf("\n 5) - Display");
    printf("\n 6) - Queue size");
    printf("\n 7) - Exit");
    create();
    do
    {
        printf("\n Enter Your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter data element : ");
            scanf("%d", &no);
            enq(no);
            break;
        case 2:
            deq();
            break;
        case 3:
            e = frontelement();
            if (e != 0)
                printf("Front element : %d", e);
            else
                printf("\n No front element in Queue as queue is empty");
            break;
        case 4:
            empty();
            break;
        
        case 5:
            display_q_l();
            break;
        case 6:
            queuesize();
            break;
        default:
            printf("\n\n\tPLEASE ENTER A VALID CHOICE");
            break;
        }
    } while(ch!=7);
}
 
/* Create an empty queue */
void create()
{
    front_l = rear_l = NULL;
}
 
/* Returns queue size */
void queuesize()
{
    printf("\n Queue size is: %d", count);
}
 
/* Enqueing the queue */
void enq(int data)
{
    if (rear_l == NULL)
    {
        rear_l = (struct node_Q_L *)malloc(1*sizeof(struct node_Q_L));
        rear_l->ptr = NULL;
        rear_l->info = data;
        front_l = rear_l;
    }
    else
    {
        temp=(struct node_Q_L *)malloc(1*sizeof(struct node_Q_L));
        rear_l->ptr = temp;
        temp->info = data;
        temp->ptr = NULL;
 
        rear_l = temp;
    }
    count++;
}
 
/* Displaying the queue elements */
void display_q_l()
{
    front1 = front_l;
 
    if ((front1 == NULL) && (rear_l == NULL))
    {
        printf("Queue is empty");
        return;
    }
    while (front1 != rear_l)
    {
        printf("%d ", front1->info);
        front1 = front1->ptr;
    }
    if (front1 == rear_l)
        printf("%d", front1->info);
}
 
/* Dequeing the queue */
void deq()
{
    front1 = front_l;
 
    if (front1 == NULL)
    {
        printf("\n Error: Trying to delete elements from empty queue");
        return;
    }
    else
        if (front1->ptr != NULL)
        {
            front1 = front1->ptr;
            printf("\n Dequed value is: %d", front_l->info);
            free(front_l);
            front_l = front1;
        }
        else
        {
            printf("\n Dequed value is: %d", front_l->info);
            free(front_l);
            front_l = NULL;
            rear_l = NULL;
        }
        count--;
}
 
/* Returns the front element of queue */
int frontelement()
{
    if ((front_l != NULL) && (rear_l != NULL))
        return(front_l->info);
    else
        return 0;
}
 
/* Display if queue is empty or not */
void empty()
{
     if ((front_l == NULL) && (rear_l == NULL))
        printf("\n Queue is empty");
    else
       printf("Queue is not empty");
}
/*
***************************************************END OF FUNCTION QUEUE USING LINKED LIST**********************************************************
*/

/*
*******************************************************STACK USING LINKED LIST**********************************************************************
*/
struct node_s_l
{
    int info;
    struct node_s_l *ptr;
}*top_l,*top1,*temp_s;
 
int topelement();
void push_l(int data);
void pop_l();
void empty_s_l();
void display_s_l();
void destroy();
void stack_count();
void create_s_l();
 
int count_s_l = 0;
 
void STACK_LL()
{
    int no, ch, e;
    
    system("COLOR 10");
    getch();
 
    printf("\n 1 - Push");
    printf("\n 2 - Pop");
    printf("\n 3 - Top");
    printf("\n 4 - Empty");
    printf("\n 5 - Display");
    printf("\n 6 - Stack Count");
    printf("\n 7 - Destroy stack ");
    printf("\n 8 - exit");
 
    create_s_l();
 
    do
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);
 
        switch (ch)
        {
       	case 1:
            printf("Enter data : ");
            scanf("%d", &no);
            push_l(no);
            break;
       	case 2:
            pop_l();
            break;
        case 3:
            if (top_l == NULL)
                printf("No elements in stack");
            else
            {
                e = topelement();
                printf("\n Top element : %d", e);
            }
            break;
        case 4:
            empty_s_l();
            break;
        //case 5:
          //  exit(0);
        case 5:
            display_s_l();
            break;
        case 6:
            stack_count();
            break;
        case 7:
            destroy();
            break;
        default :
            printf("\n\n\tPLAESE ENTER A VALID CHOICE");
            break;
        }  
    }while(ch!=8);
}

/* Create empty stack */
void create_s_l()
{
    top_l = NULL;
}
 
/* Count stack elements */
void stack_count()
{
    printf("\n Number of elements in stack is: %d", count);
}
 
/* Push data into stack */
void push_l(int data)
{
    if (top_l == NULL)
    {
        top_l =(struct node_s_l *)malloc(1*sizeof(struct node_s_l));
        top_l->ptr = NULL;
        top_l->info = data;
    }
    else
    {
        temp_s =(struct node_s_l *)malloc(1*sizeof(struct node_s_l));
        temp_s->ptr = top_l;
        temp_s->info = data;
        top_l = temp_s;
    }
    count++;
}
 
/* Display stack elements */
void display_s_l()
{
    top1 = top_l;
 
    if (top1 == NULL)
    {
        printf("Stack is empty");
        return;
    }
 
    while (top1 != NULL)
    {
        printf("%d ", top1->info);
        top1 = top1->ptr;
    }
 }
 
/* Pop Operation on stack */
void pop_l()
{
    top1 = top_l;
 
    if (top1 == NULL)
    {
        printf("\n Error : Trying to POP from empty stack");
        return;
    }
    else
        top1 = top1->ptr;
    printf("\n Popped value is: %d", top_l->info);
    free(top_l);
    top_l = top1;
    count--;
}
 
/* Return top element */
int topelement()
{
    return(top_l->info);
}
 
/* Check if stack is empty or not */
void empty_s_l()
{
    if (top_l == NULL)
        printf("\n Stack is empty");
    else
        printf("\n Stack is not empty with %d elements", count);
}
 
/* Destroy entire stack */
void destroy()
{
    top1 = top_l;
 
    while (top1 != NULL)
    {
        top1 = top_l->ptr;
        free(top_l);
        top_l = top1;
        top1 = top1->ptr;
    }
    free(top1);
    top_l = NULL;
 
    printf("\n All stack elements destroyed");
    count = 0;
}

/*
******************************************************END OF FUNCTION STACK USING LINKED LIST*******************************************************
*/

/*
*****************************************************************AVL TREE***************************************************************************
*/
struct NODE
{
	char Info;
	int Flag;
	struct  NODE *Left_Child;
	struct  NODE *Right_Child;
};

struct NODE *Binary_Tree (char , struct NODE *, int *);
void Output(struct NODE *, int );
struct  NODE *Balance_Right_Heavy(struct NODE *, int *);
struct NODE *Balance_Left_Heavy(struct NODE *, int *);
struct NODE *DELETE(struct NODE *, struct NODE *, int *);
struct NODE *Delete_Element(struct NODE *, char , int *);

/* Function to insert an element into tree */

struct NODE *  Binary_Tree (char Info, struct NODE *Parent, int *H)
{
	struct NODE *Node1;
	struct NODE *Node2;
	if(!Parent)
	{
		Parent = (struct NODE *) malloc(sizeof(struct NODE));
		Parent->Info = Info;
		Parent->Left_Child = NULL;
		Parent->Right_Child = NULL;
		Parent->Flag = 0;
		*H = T;
		return (Parent);
	}

	if(Info < Parent->Info)
	{
		Parent->Left_Child = Binary_Tree(Info, Parent->Left_Child, H);
		if(*H)
		/* Left branch has grown higher */
		{
			switch(Parent->Flag)
			{
			case 1: /* Right heavy */
				Parent->Flag = 0;
				*H = F;
				break;
			case 0: /* Balanced tree */
				Parent->Flag = -1;
				break;
			case -1: /* Left heavy */
				Node1 = Parent->Left_Child;
				if(Node1->Flag == -1)
				{
					printf("\n Left to Left Rotation\n");
					Parent->Left_Child= Node1->Right_Child;
					Node1->Right_Child = Parent;
					Parent->Flag = 0;
					Parent = Node1;
				}
				else
				{
					printf("\n Left to right rotation\n");
					Node2 = Node1->Right_Child;
					Node1->Right_Child = Node2->Left_Child;
					Node2->Left_Child = Node1;
					Parent->Left_Child = Node2->Right_Child;
					Node2->Right_Child = Parent;
					if(Node2->Flag == -1)
						Parent->Flag = 1;
					else
						Parent->Flag = 0;
					if(Node2->Flag == 1)
						Node1->Flag = -1;
					else
						Node1->Flag = 0;
					Parent = Node2;
				}

				Parent->Flag = 0;
				*H = F;
			}
		}
	}

	if(Info > Parent->Info)
	{
		Parent->Right_Child = Binary_Tree(Info, Parent->Right_Child, H);
		if(*H)
		/* Right branch has grown higher */
		{
			switch(Parent->Flag)
			{
			case -1: /* Left heavy */
				Parent->Flag = 0;
				*H = F;
				break;
			case 0: /* Balanced tree */
				Parent->Flag = 1;
				break;

			case 1: /* Right heavy */
				Node1 = Parent->Right_Child;
				if(Node1->Flag == 1)
				{
					printf("\n Right to Right Rotation\n");
					Parent->Right_Child= Node1->Left_Child;
					Node1->Left_Child = Parent;
					Parent->Flag = 0;
					Parent = Node1;
				}
				else
				{
					printf("\n Right to Left Rotation\n");
					Node2 = Node1->Left_Child;
					Node1->Left_Child = Node2->Right_Child;
					Node2->Right_Child = Node1;
					Parent->Right_Child = Node2->Left_Child;
					Node2->Left_Child = Parent;

					if(Node2->Flag == 1)
						Parent->Flag = -1;
					else
						Parent->Flag = 0;
					if(Node2->Flag == -1)
						Node1->Flag = 1;
					else
						Node1->Flag = 0;
					Parent = Node2;
				}

				Parent->Flag = 0;
				*H = F;
			}
		}
	}
	return(Parent);
}

/* Output function */

void Output(struct NODE *Tree,int Level)
{
	int i;
	if (Tree)
	{
		Output(Tree->Right_Child, Level+1);
		printf("\n");
		for (i = 0; i < Level; i++)
			printf("   ");
		printf("%c", Tree->Info);
		Output(Tree->Left_Child, Level+1);
	}
}

/* Balancing Right Heavy */

struct NODE * Balance_Right_Heavy(struct NODE *Parent, int *H)
{
	struct NODE *Node1, *Node2;

	switch(Parent->Flag)
	{
	case -1: 
		Parent->Flag = 0;
		break;

	case 0: 
		Parent->Flag = 1;
		*H= F;
		break;

	case 1: /* Rebalance */
		Node1 = Parent->Right_Child;
		if(Node1->Flag >= 0)
		{
			printf("\n Right to Right Rotation\n");
			Parent->Right_Child= Node1->Left_Child;
			Node1->Left_Child = Parent;
			if(Node1->Flag == 0)
			{
				Parent->Flag = 1;
				Node1->Flag = -1;
				*H = F;
			}
			else
			{
				Parent->Flag = Node1->Flag = 0;
			}
			Parent = Node1;
		}
		else
		{
			printf("\n Right to Left Rotation\n");
			Node2 = Node1->Left_Child;
			Node1->Left_Child = Node2->Right_Child;
			Node2->Right_Child = Node1;
			Parent->Right_Child = Node2->Left_Child;
			Node2->Left_Child = Parent;

			if(Node2->Flag == 1)
				Parent->Flag = -1;
			else
				Parent->Flag = 0;
			if(Node2->Flag == -1)
				Node1->Flag = 1;
			else
				Node1->Flag = 0;
			Parent = Node2;
			Node2->Flag = 0;
		}
	}
	return(Parent);
}

/* Balancing Left Heavy */

struct NODE * Balance_Left_Heavy(struct NODE *Parent, int *H)
{
	struct NODE *Node1, *Node2;

	switch(Parent->Flag)
	{
	case 1: 
		Parent->Flag = 0;
		break;

	case 0: 
		Parent->Flag = -1;
		*H= F;
		break;

	case -1: /*  Rebalance */
		Node1 = Parent->Left_Child;
		if(Node1->Flag <= 0)
		{
			printf("\n Left to Left Rotation\n");
			Parent->Left_Child= Node1->Right_Child;
			Node1->Right_Child = Parent;
			if(Node1->Flag == 0)
			{
				Parent->Flag = -1;
				Node1->Flag = 1;
				*H = F;
			}
			else
			{
				Parent->Flag = Node1->Flag = 0;
			}
			Parent = Node1;
		}
		else
		{
			printf("\n Left to Right Rotation\n");
			Node2 = Node1->Right_Child;
			Node1->Right_Child = Node2->Left_Child;
			Node2->Left_Child = Node1;
			Parent->Left_Child = Node2->Right_Child;
			Node2->Right_Child = Parent;

			if(Node2->Flag == -1)
				Parent->Flag = 1;
			else
				Parent->Flag = 0;

			if(Node2->Flag == 1)
				Node1->Flag = -1;
			else
				Node1->Flag = 0;
			Parent = Node2;
			Node2->Flag = 0;
		}
	}
	return(Parent);
}

/* Replace the node at which key is found with last right key of a left child */

struct NODE * DELETE(struct NODE *R, struct NODE *Temp, int *H)
{
	struct NODE *Dnode = R;
	if( R->Right_Child != NULL)
	{
		R->Right_Child = DELETE(R->Right_Child, Temp, H);
		if(*H)
			R = Balance_Left_Heavy(R, H);
	}
	else
	{
		Dnode = R;
		Temp->Info = R->Info;
		R = R->Left_Child;
		free(Dnode);
		*H = T;
	}
	return(R);
}
/* Delete the key element from the tree */

struct NODE * Delete_Element(struct NODE *Parent, char Info, int *H)
{
	struct NODE *Temp;
	if(!Parent)
	{
		printf("\n Information does not exist");
		return(Parent);
	}
	else
	{
		if (Info < Parent->Info )
		{
			Parent->Left_Child = Delete_Element(Parent->Left_Child, Info, H);
			if(*H)
				Parent = Balance_Right_Heavy(Parent, H);
		}
		else
			if(Info > Parent->Info)
			{
				Parent->Right_Child = Delete_Element(Parent->Right_Child, Info, H);
				if(*H)
					Parent = Balance_Left_Heavy(Parent, H);
			}
			else
			{
				Temp= Parent;
				if(Temp->Right_Child == NULL)
				{
					Parent = Temp->Left_Child;
					*H = T;
					free(Temp);
				}
				else
					if(Temp->Left_Child == NULL)
					{
						Parent = Temp->Right_Child;
						*H = T;
						free(Temp);
					}
					else
					{
						Temp->Left_Child = DELETE(Temp->Left_Child, Temp, H);
						if(*H)
							Parent = Balance_Right_Heavy(Parent, H);
					}
			}
	}
	return(Parent);
}

/* Function main */

void AVL_TREE()
{
	int H;
	char Info ;
	char choice;
	struct NODE *Tree = (struct NODE *)malloc(sizeof(struct NODE));
	Tree =  NULL;
	printf("\n Input choice 'b' to break:");
	choice = getchar();
	while(choice != 'b')
	{
		fflush(stdin);
		printf("\n Input information of the node: ");
		scanf("%c", &Info);
		Tree = Binary_Tree(Info, Tree, &H);
		printf("\n Tree is:\n");
		Output(Tree, 1);
		fflush(stdin);
		printf("\n Input choice 'b' to break:");
		choice = getchar();
	}
	fflush(stdin);
	while(1)
	{
		printf("\n Input choice 'b' to break:");
		printf("\n Input the key value want to deletedir:");
		scanf("%c", &Info);
		if (Info == 'b')
			break;
		Tree = Delete_Element(Tree, Info, &H);
		printf("\n Tree is:\n");
		Output(Tree, 1);
	}
}


/*
**********************************************************END OF FUNCTION AVL TREE******************************************************************
*/



