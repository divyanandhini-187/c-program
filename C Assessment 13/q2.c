#include <stdio.h>
#include <stdlib.h>
struct student{
    int id, Maths, Science;
    struct student *next;
};
struct student *head=NULL;
void create(){
    int i;
    struct student *t,*n;
    for(i=1;i<=5;i++){
        n=(struct student*)malloc(sizeof(struct student));
        n->id=i;
        n->Maths=50+i;
        n->Science=60+i;
        n->next=NULL;

        if(head==NULL) head=n;
        else{
            t=head;
            while(t->next) t=t->next;
            t->next=n;
        }
    }
}
void display()
{
    struct student *t=head;
    while(t){
        printf("ID:%d Maths:%d Science:%d\n",
               t->id,t->Maths,t->Science);
        t=t->next;
    }
}
void insert()
{
    int gid,pos;
    struct student *t=head,*n;
    n=(struct student*)malloc(sizeof(struct student));

    printf("Enter new ID Maths Science: ");
    scanf("%d%d%d",&n->id,&n->Maths,&n->Science);

    printf("1.Before ID  2.After ID: ");
    scanf("%d",&pos);

    printf("Enter given ID: ");
    scanf("%d",&gid);

    if(pos==1 && head->id==gid){
        n->next=head;
        head=n;
        return;
    }

    while(t->next && t->next->id!=gid)
        t=t->next;

    if(pos==1){
        n->next=t->next;
        t->next=n;
    }
    else{
        n->next=t->next->next;
        t->next->next=n;
    }
}
int main()
{
    int ch;
    create();
    while(1)
    {
        printf("\n1.Insert Entry\n2.Display List\n3.Exit\n");
        scanf("%d",&ch);

        if(ch==1) insert();
        else if(ch==2) display();
        else break;
    }
    return 0;
}