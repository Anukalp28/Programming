// Implementation of Queue in C:
// 1. Implement a queue using arrays. Include operations such as enqueue (inserting an element),
// dequeue (removing the front element.

// #include<stdio.h>
// #define size 5
// int queue[size];
// int front = -1;
// int rear = -1;

// int isFull(){
//     if(rear == size-1) return 1;
//     return 0;
// }

// int isEmpty(){
//     if(front == -1 || front>rear) return 1;
//     return 0;
// }

// void enqueue(int value){
//     if(isFull()){
//         printf("Queue Overflow! cannot enqueue %d \n",value);
//     }
//     else{
//         if(front == -1){
//             front =0;
//         }
//         rear++;
//         queue[rear]=value;
//         printf("Enqueued:%d\n",value);
//     }
// }
// int dequeue(){
//     if(isEmpty()){
//         printf("Queue Underflow!\n");
//     }
//     else{
//         int element = queue[front];
//         front++;
//         return element;
//     }
// }

// void display(){
//     if(isEmpty()){
//         printf("Queue is empty.\n");
//     }
//     else{
//         printf("Queue element:");
//         for(int i=front;i<=rear;i++){
//             printf("%d ",queue[i]);
//         }
//         printf("\n");
//     }
// }

// int main(){
//     enqueue(10);
//     enqueue(20);
//     enqueue(30);
    
//     display();
//     printf("Dequeued elemnet:%d\n",dequeue());
//     display();
    
//     enqueue(40);
//     enqueue(50);
//     enqueue(60);
    
//     display();

//     return 0;
// }
// output
// Enqueued:10
// Enqueued:20
// Enqueued:30
// Queue element:10 20 30 
// Dequeued elemnet:10
// Queue element:20 30 
// Enqueued:40
// Enqueued:50
// Queue Overflow! cannot enqueue 60 
// Queue element:20 30 40 50


// 2. Implement a circular queue using arrays to efficiently manage space and support dynamic
// addition and removal of elements.
// #include<stdio.h>
// #include<stdlib.h>
// #define size 5
// int queue[size];
// int front = -1;
// int rear = -1;
// void enqueue(int value);
// void dequeue();
// void display();
// int isFull();
// int isEmpty();

// int main(){
//     int choice,value;
//     while(1){
//         printf("\n*** Circular Queue menu ***\n");
//         printf("1.Enqueu(insert)\n");
//         printf("2.Dequeu(Delete)\n");
//         printf("3.Display\n");
//         printf("4.Exit\n");
//         printf("Enter your choice:");scanf("%d",&choice);

//         switch(choice){
//             case 1:
//                 printf("Enter value to insert:");
//                 scanf("%d",&value);
//                 enqueue(value);
//                 break;
//             case 2:
//                 dequeue();
//                 break;
//             case 3:
//                 display();
//                 break;
//             case 4:
//                 printf("Exeting program.\n");
//                 exit(0);
//             default:
//                 printf("Invalid chouice! please try again.\n");
            
//         }
//     }
//     return 0;
// } 

// int isFull(){
//     if((rear+1)%size==front) return 1;
//     return 0;
// }

// int isEmpty(){
//     if(front==-1) return 1;
//     return 0;
// }

// void enqueue(int value){
//     if(isFull()){
//         printf("Queue Overflow! cannot enqueue %d \n",value);
//         return;
//     }
//     if(front==-1){
//         front = 0;
//     }
//     rear = (rear+1)%size;
//     queue[rear]=value;
//     printf("Successfully inserted %d\n",value);
// }

// void dequeue(){
//     if(isEmpty()){
//         printf("Queue Underflow! No elements to delete\n");
//         return;
//     }
//     printf("Deleted element: %d\n",queue[front]);
//     if(front==rear){
//         front = -1;
//         rear = -1;
//     }
//     else{
//         front = (front+1)%size;
//     }
// }

// void display(){
//     if(isEmpty()){
//         printf("Queue is empty.\n");
//         return ;
//     }
//     printf("Queue elements are:");
//     int i=front;
//     while(1){
//         printf("%d ",queue[i]);
//         if(i==rear) break;
//         i=(i+1)%size;
//     } 
//     printf("\n");
// }

// output 
// *** Circular Queue menu ***
// 1.Enqueu(insert)
// 2.Dequeu(Delete)
// 3.Display
// 4.Exit
// Enter your choice:1
// Enter value to insert:2
// Successfully inserted 2

// *** Circular Queue menu ***
// 1.Enqueu(insert)
// 2.Dequeu(Delete)
// 3.Display
// 4.Exit
// Enter your choice:3
// Queue elements are:2

//--------------------

// 3. Create a menu-driven program that allows the user to perform various operations on
// queues (enqueue, dequeue, peek, display).
#include<stdio.h>
#define size 5
int queue[size];
int front = -1;
int rear = -1;

int isFull(){
    if(rear == size-1) return 1;
    return 0;
}

int isEmpty(){
    if(front == -1 || front>rear) return 1;
    return 0;
}

void enqueue(int value){
    if(isFull()){
        printf("Queue Overflow! cannot enqueue %d \n",value);
    }
    else{
        if(front == -1){
            front =0;
        }
        rear++;
        queue[rear]=value;
        printf("Enqueued:%d\n",value);
    }
}
int dequeue(){
    if(isEmpty()){
        printf("Queue Underflow!\n");
    }
    else{
        int element = queue[front];
        front++;
        return element;
    }
}

void display(){
    if(isEmpty()){
        printf("Queue is empty.\n");
    }
    else{
        printf("Queue element:");
        for(int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}
void Peek(){
    if(isEmpty()) printf("Queue is empty.\n");
    else{
        printf("First element: %d",queue[0]);
    } 
}

int main(){
    int choice,val;
    while(1){
        // enqueue, dequeue, peek, display
        printf("1.Enqueue\n");
        printf("2.Display\n");
        printf("3.Dequeue\n");
        printf("4.Peek\n");
        printf("5.Exit\n");
        printf("Enter choice:");scanf("%d",&choice);
        switch (choice){
            case 1: 
                printf("Enter value:");
                scanf("%d",&val);
                enqueue(val);
                break;
            case 2:display();break;
            case 3:dequeue();break;
            case 4:Peek();break;
            case 5:
                printf("Exiting program.\n");
                exit(0);    
                // break;
            default:printf("Wrong choice");
        }
    }
    return 0;
}


// 4. Implement a double end queue using arrays to efficiently manage space and support
// dynamic addition and removal of elements.



