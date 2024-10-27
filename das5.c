#include <stdio.h>
#include <stdlib.h>
#define size 5  
int deque[size];    
int f = -1, r = -1;    

// Insert from the front
void insert_front(int x)    
{    
    if((f == 0 && r == size - 1) || (f == r + 1))    
    {    
        printf("Overflow\n");    
    }    
    else if(f == -1 && r == -1)    
    {    
        f = r = 0;    
        deque[f] = x;    
    }    
    else if(f == 0)    
    {    
        f = size - 1;    
        deque[f] = x;    
    }    
    else    
    {    
        f = f - 1;    
        deque[f] = x;    
    }    
}    
    
// Insert from the rear
void insert_rear(int x)    
{    
    if((f == 0 && r == size - 1) || (f == r + 1))    
    {    
        printf("Overflow\n");    
    }    
    else if(f == -1 && r == -1)    
    {    
        f = r = 0;    
        deque[r] = x;    
    }    
    else if(r == size - 1)    
    {    
        r = 0;    
        deque[r] = x;    
    }    
    else    
    {    
        r++;    
        deque[r] = x;    
    }    
}    
    
// Display deque elements
void display()    
{    
    if(f == -1)    
    {    
        printf("Deque is empty\n");    
        return;    
    }    
    int i = f;    
    printf("Elements in deque are: ");    
    while(i != r)    
    {    
        printf("%d ", deque[i]);    
        i = (i + 1) % size;    
    }    
    printf("%d\n", deque[r]);    
}    
    
// Get the front element
void getfront()    
{    
    if(f == -1)    
    {    
        printf("Deque is empty\n");    
    }    
    else    
    {    
        printf("Front element: %d\n", deque[f]);    
    }    
}    
    
// Get the rear element
void getrear()    
{    
    if(f == -1)    
    {    
        printf("Deque is empty\n");    
    }    
    else    
    {    
        printf("Rear element: %d\n", deque[r]);    
    }    
}    
    
// Delete from the front
void delete_front()    
{    
    if(f == -1)    
    {    
        printf("Deque is empty\n");    
    }    
    else if(f == r)    
    {    
        printf("Deleted element: %d\n", deque[f]);    
        f = r = -1;    
    }    
    else if(f == size - 1)    
    {    
        printf("Deleted element: %d\n", deque[f]);    
        f = 0;    
    }    
    else    
    {    
        printf("Deleted element: %d\n", deque[f]);    
        f = f + 1;    
    }    
}    
    
// Delete from the rear
void delete_rear()    
{    
    if(f == -1)    
    {    
        printf("Deque is empty\n");    
    }    
    else if(f == r)    
    {    
        printf("Deleted element: %d\n", deque[r]);    
        f = r = -1;    
    }    
    else if(r == 0)    
    {    
        printf("Deleted element: %d\n", deque[r]);    
        r = size - 1;    
    }    
    else    
    {    
        printf("Deleted element: %d\n", deque[r]);    
        r = r - 1;    
    }    
}    
    
int main()    
{  
    int choice, data;
    while(1)
    {
        printf("\nMENU\n");
        printf("1. Insert front\n2. Insert rear\n3. Delete front\n4. Delete rear\n5. Display\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: 
                printf("Enter the value to be inserted in front: ");
                scanf("%d", &data);
                insert_front(data);
                break;
            case 2: 
                printf("Enter the value to be inserted in rear: ");
                scanf("%d", &data);
                insert_rear(data);
                break;
            case 3: 
                delete_front();
                break;
            case 4: 
                delete_rear();
                break;
            case 5: 
                display();
                break;
            case 6: 
                exit(0);
            default: 
                printf("Invalid choice\n");
        }
    } 
    return 0;
}

