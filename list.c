#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head,*newnode,*nextnode,*preptr,*temp;
void create(){
    head=NULL;
    int ch=1,data;
    while(ch){
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    
    if(head==NULL){
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
        newnode->next=NULL;
    }
    printf("do u want to continue(0/1)");
    scanf("%d",&ch);
}
}
void display(){
    temp=head;
    printf("list is: ");
    while(temp!=NULL){
        printf("%d  ",temp->data);
        temp=temp->next;
        
    }
}
int len(){
    int l=0;
    temp=head;
    while(temp!=NULL){
    l++;
    temp=temp->next;
    }
    return l;
}
void deletion(){
    int pos,i=1;
    int y=len();
    temp=head;
    printf("\nenter position to delete");
    scanf("%d",&pos);
    if(pos>y)
    printf("invalid position");
    else{
        if(pos==1){
            temp=head;
            head=head->next;
            free(temp);
        }
        else{
            while(i<pos-1){
                temp=temp->next;
                i++;
            }
            nextnode=temp->next;
            temp->next=nextnode->next;
            free(nextnode);
        }
    }
}
void insertion(){
    int i=1,pos;
   int  x=len();
    temp=head;
    printf("\nenter position to insert");
    scanf("%d",&pos);
    if(pos>x)
    printf("invalid position");
    else{
        while(i<pos){
            preptr=temp;
            temp=temp->next;
            i++;
        }
    }
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter data to insert ");
    scanf("%d",&newnode->data);
    newnode->next=temp;
    preptr->next=newnode;
}
void main(){
    create();
    display();
    deletion();
    printf("after deletion");
    display();
    insertion();
    printf("after inserion");
    display();
}
    

