#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int num;
    char name[20];
    int score;
    struct node *next;
};
struct node* create();
struct node* insert(struct node *head,struct node *stud);
struct node* deletedoc(struct node *head,int num);
void print(struct node *head);
int main()
{
    struct node *head,*p;
    int choice,num,score;
    char name[20];
    int size = sizeof(struct node );
    do {
        printf("1:create 2:Insert 3:Delete 4:print 0:Exit \n");
        scanf("%d",&choice);
        switch(choice) {
            case 1:
            head = create();
            break;
            case 2:
            printf("input num,name and score:\n");
            scanf("%d%s%d",&num,name,&score);
            p = (struct node *)malloc(size);
            p->num=num;
            strcpy(p->name,name);
            p->score = score;
            head=insert(head,p);
            break;
            /*
            case 3:
            printf("Input num: \n");
            scanf("%d",&num);
            head=deletedoc(head,num);
            break;
            */
            case 4:
            print(head);
            break;
            case 0:
            break;
        }
    }while (choice != 0);

    return 0;
}
struct node* create()
{
    struct node *head,*p;
    int num,score;
    char name[20];
    int size = sizeof(struct node);
    head=NULL;
    printf("Input num,name and score :\n");
    scanf("%d%s%d",&num,name,&score);
    while(num!=0) 
    {
        p=(struct node*)malloc(size);
        p->num=num;
        strcpy(p->name,name);
        p->score=score;
        head=insert(head,p);
        scanf("%d%s%d",&num,name,&score);
    }
    return head;
}

struct node* insert(struct node *head,struct node *p)
{
    struct node * ptr,*ptr1,*ptr2;
    ptr2=head;
    ptr=p;
    if(head == NULL) {
        head=ptr;
        head ->next = NULL;
    }
    else
    {
        while((ptr->num>ptr2->num)&&(ptr2->next != NULL)) {
            ptr1=ptr2;
            ptr2=ptr2->next;
        }
        if(ptr->num<=ptr2->num) {
            if(head == ptr2)
            head =ptr;
            else
            ptr1->next=ptr;
            ptr->next=ptr2;
        }
        else {
            ptr2->next=ptr;
            ptr->next =NULL;
        }
    }
    return head;
}

struct node* deletedoc(struct node *head,int num)
{
    struct node *ptr1,*ptr2;
    while(head != NULL&&head->num == num) {
        ptr2=head;
        head=head->next;
        free(ptr2);
    }
    if(head == NULL)
    return NULL;
    ptr1 = head;
    ptr2 = head->next;
    while(ptr2 != NULL) {
        if(ptr2->num == num) {
            ptr1->next=ptr2->next;
            free(ptr2);
        }
        else 
        ptr1=ptr2;
        ptr2=ptr1->next;
    }
    return head;
}



void print(struct node *head)
{
    struct node *ptr;
    if(head == NULL) {
        printf("\nNO Records\n");
        return ;
    }
    printf("\nThe students' records are :\n");
    printf("num\tname\tscore\n");
    for(ptr=head;ptr!=NULL;ptr=ptr->next)
    printf("%d\t%s\t%d\n",ptr->num,ptr->name,ptr->score);
}
