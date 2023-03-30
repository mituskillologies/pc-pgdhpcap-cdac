    #include<stdio.h>   
    #include<stdlib.h>  
    #define maxsize 10  
    void insert();  
    void delete();  
    void display();  
    int front = -1, rear = -1;  
    int queue[maxsize];  
    int main ()  
    {  
        int choice;   
        while(choice != 4)   
        {     
            printf("\n*** Menu ***\n");  
            printf("\n=================\n");  
            printf("\n1.Insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");  
            printf("\nEnter your choice: ");  
            scanf("%d",&choice);  
            switch(choice)  
            {  
                case 1:  
                	insert();  
                	break;  
                case 2:  
		            delete();  
		            break;  
                case 3:  
		            display();  
		            break;  
                case 4:  
                	exit(0);  
                default:   
                	printf("\nEnter valid choice!!\n");  
            }  
        }  
    }  
    void insert()  
    {  
        int item;  
        printf("\nEnter the element: ");  
        scanf("%d",&item);      
        if(rear == maxsize-1)  
        {  
            printf("\nOVERFLOW\n");  
            return;  
        }  
        if(front == -1 && rear == -1)  // First time
        {  
            front = 0;  
            rear = 0;  
        }  
        else    
            rear = rear+1;  
        queue[rear] = item;  
        printf("\nValue inserted\n");  
          
    }  
    void delete()  
    {  
        int item;   
        if (front == -1 || front > rear)  
        {  
            printf("\nUNDERFLOW\n");  
            return;                  
        }  
        else  
        {  
            item = queue[front];  
            if(front == rear)  
            {  
                front = -1;  
                rear = -1 ;  
            }  
            else   
                front = front + 1;  
            printf("\nValue deleted %d",item);  
        }        
    }           
    void display()  
    {  
        int i;  
        if(rear == -1)   
            printf("\nEmpty queue\n");   
        else  
        {   printf("\nprinting values .....\n");  
            for(i=front;i<=rear;i++)  
                printf("\n%d\n",queue[i]);    
        }  
    }  
