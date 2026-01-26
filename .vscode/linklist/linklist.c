
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} __attribute__((packed)) node_s;

node_s *__head = NULL;

int init(int data){
    printf("Init\n");

    if(!__head){
        node_s *new = malloc(sizeof(node_s));
        if(!new) {
            printf("Error: Failed to allocate memory at init.\n");
            return -1;
        }
        new->data = data;
        new->next = NULL;
        
        __head = new;

        return 0;
    }

    return -1;
}

int add(int data) {
    node_s *new = malloc(sizeof(node_s));
        if(!new) {
            printf("Error: Failed to allocate memory at init.\n");
            return -1;
        }
        new->data = data;
        new->next =__head;

    __head = new;
    return 0;
}

int add_to_the_end(int data) {
    node_s *new = malloc(sizeof(node_s));
        if(!new) {
            printf("Error: Failed to allocate memory at init.\n");
            return -1;
        }
        new->data = data;
        new->next = NULL;

    node_s *tmp = __head;
    while(tmp->next){
        tmp = tmp->next;
    }
    tmp->next = new;
    return 0;
}

void traversal() {
    node_s *tmp = __head;

    while(tmp) {
        printf("%d --> ",tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
}

int exists(int data)  {
    node_s *tmp = __head;

    while(tmp){
        if(tmp->data == data)
            return 1;
        
        tmp = tmp->next;
    }
    return -1;
}

int insert(int key, int data){
    node_s *tmp = __head;

    while(tmp){
        if(tmp->data == key){
            
            node_s *new = malloc(sizeof(node_s));
            if(!new) {
                printf("Error: Failed to allocate memory at init.\n");
                return -1;
            }
            new->data = data;
            new->next = tmp->next;
            tmp->next = new;
            
            return 1;
        }  
        tmp = tmp->next;      
    }
    printf("Error: Key is not present in list. Failed to insert node.\n");
    return -1;
}

int delete(int data){

    node_s *tmp = __head;
    node_s *prv = NULL;

    while(tmp){
        if(tmp->data == data){
            if(!prv){
                __head = tmp->next;
                
            }
            else{
                prv->next = tmp->next;
            }
            free(tmp);
            return 1;
        }  
        prv = tmp;
        tmp = tmp->next;      
    }
    printf("Error: Key is not present in list. Failed to insert node.\n");
    return -1;
}