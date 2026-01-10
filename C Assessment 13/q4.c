#include <stdio.h>
#include <stdlib.h>

struct student {
    struct student *prev;
    int id;
    struct student *next;
};

struct student *head = NULL;

void insertEnd(int id) {
    struct student *n = malloc(sizeof(struct student));
    n->id = id; n->next = n->prev = NULL;
    if (!head) { head = n; return; }
    struct student *t = head;
    while (t->next) t = t->next;
    t->next = n; n->prev = t;
}

void insertAfter(int key, int id) {
    struct student *t = head;
    while (t && t->id != key) t = t->next;
    if (!t) return;
    struct student *n = malloc(sizeof(struct student));
    n->id = id;
    n->next = t->next; n->prev = t;
    if (t->next) t->next->prev = n;
    t->next = n;
}

void insertBefore(int key, int id) {
    struct student *t = head;
    while (t && t->id != key) t = t->next;
    if (!t) return;
    struct student *n = malloc(sizeof(struct student));
    n->id = id;
    n->next = t; n->prev = t->prev;
    if (t->prev) t->prev->next = n;
    else head = n;
    t->prev = n;
}

void deleteNode(int key) {
    struct student *t = head;
    while (t && t->id != key) t = t->next;
    if (!t) return;
    if (t->prev) t->prev->next = t->next;
    else head = t->next;
    if (t->next) t->next->prev = t->prev;
    free(t);
}

void display() {
    struct student *t = head;
    while (t) { printf("%d ", t->id); t = t->next; }
    printf("\n");
}

int main() {
    int ch,id,key;

    insertEnd(1); insertEnd(2); insertEnd(3); insertEnd(4); insertEnd(5);

    do {
        printf("\n1.Insert  2.Delete  3.Display  4.Exit\n");
        scanf("%d",&ch);
        if(ch==1){
            printf("Enter key id: "); scanf("%d",&key);
            printf("1.Before 2.After: "); scanf("%d",&ch);
            printf("Enter new id: "); scanf("%d",&id);
            if(ch==1) insertBefore(key,id);
            else insertAfter(key,id);
        }
        else if(ch==2){
            printf("Enter id to delete: "); scanf("%d",&id);
            deleteNode(id);
        }
        else if(ch==3){
            display();
        }
    } while(ch!=4);

    return 0;
}
