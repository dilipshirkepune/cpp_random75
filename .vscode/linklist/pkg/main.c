#include <stdio.h>
#include "linklist.h"

int main() {

    init(0);
    traversal();

    add(1);
    add(2);
    add(3);
    traversal();

    if(exists(0) != -1){
        printf("Data present in list.\n");
    }
    else
    {
        printf("Data NOT present in list.\n");
    }  

    if(exists(10) != -1){
        printf("Data present in list.\n");
    }
    else
    {
        printf("Data NOT present in list.\n");
    }    

    insert(2, 8);
    traversal();

    delete(1);
    traversal();
    printf("Done!\n");
    return 0;
}