#include <stdio.h>
#include <stdlib.h>
struct student
{
    int id, Maths, Science;
    struct student *next;
};

int main()
{
    struct student *head=NULL,*t,*n;
    int id;

    while(1)
    {
        printf("Enter ID (-1 to stop): ");
        scanf("%d",&id);
        if(id==-1) break;
        n=(struct student*)malloc(sizeof(struct student));
        n->id=id;
        printf("Enter Maths and Science marks: ");
        scanf("%d%d",&n->Maths,&n->Science);
        n->next=NULL;
        if(head==NULL) head=n;
        else{
            t=head;
            while(t->next) t=t->next;
            t->next=n;
        }
    }
    printf("\nStudent Details:\n");
    for(t=head;t;t=t->next)
    {
        printf("ID:%d Maths:%d Science:%d\n",
        t->id,t->Maths,t->Science);
    }
               return 0;
}
