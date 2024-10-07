#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *p,*head, *old, *n,*s;

int create() {
    head = (struct node *)malloc(sizeof(struct node));
    scanf("%d",&head->data);
    head->next=NULL;
    old = head;

    n=(struct node *)malloc(sizeof(struct node));
    n->next=NULL;
    old->next=n;
    old=old->next;
}

int display(){
    p=head;
    printf("LIST is\n");
    while(p!=NULL){
        printf("%d -> ", p->data);
        p=p->next;
    }
}

int insert_at_begin(){
    int ele, pos;
    printf("enter element");
    scanf("%d",&ele);
    n=(struct node *)malloc(sizeof (struct node));
    n->data = ele;
    n->next = head;
    head = n;
    display();// just for checking purpose
    return 0;
}

int insert_at_end(){
    int ele;
    printf("enter the element");
    scanf("%d", &ele);
    n=(struct node *)malloc(sizeof(struct node));
    n->data=ele;
    p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next = n;
    n->next = NULL;
    display();// just for checking purpose
    return 0;
}

int insert_at_middle(){
    int ele, pos;
    printf("enter the number to be inserted and the position :");
    scanf("%d %d",&ele, &pos);
    old = p = head;
    n=(struct node *)malloc(sizeof(struct node));
    n->data = ele;
    for(int i=0; i<pos; i++){
        old = p;
        p=p->next;
    }
    old = p;
    n ->next = p;
    display();
    return 0;
}

int delete_at_begin(){
    p = head;
    head = head->next;
    free(p);
    display();
    return 0;
}

int delete_at_middle(){
    int pos;
    printf("enter the position for delete");
    scanf("%d", &pos);
    p=head;
    old=head;
    for(int i=0; i<pos; i++){
        old=p;
        p=p->next;
    }
    s=p->next;
    old->next = s;
    free(p);
    display();
    return 0;
}

int delete_at_end(){
    int ele;
    printf("enter the element");
    scanf("%d", &ele);
    p = old = head;
    while(p->next!=NULL){
        old = p;
        p = p->next;
    }
    return 0;
}


int main(){
    create();
    display();
    insert_at_begin();
    insert_at_end();
    insert_at_middle();
    delete_at_begin();
    delete_at_end();
    delete_at_middle();
    return 0;
}
