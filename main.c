//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int c=5;
    struct node a,b,d,*head ;

    a.value = c;
    b.next=&d;
    a.next=&b;
    head=&a;
    
    
    b.value=head->value+3;
    d.value=head->next->value+3;
    d.next=NULL;

    struct node begin;
    begin.next=&a;
    head=&begin;
    begin.value=2;

    printf("%d\n", head ->value ); //what value for 2
    printf("%d\n", head ->next->value ); //what value for 5
    printf("%d\n", head ->next->next->value ); //what value for 8
    printf("%d\n", head ->next->next->next->value ); //what value for 11

/* Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL 
    pass
*/
 
    
/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        pass
        
*/ 
    typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate
        
    int i,n=4;
        for(i=0;i<n;i++){
            printf("%3d", tmp->value);
            tmp=tmp->next; }
    printf("\n");

/*  Exercise III Use loop to print everything
        int i,n=5;
        for(i=0;i<n;i++){
            printf("%3d", tmp->value);
          // What is missing???
        }
        pass
*/

    tmp=head;
    while(tmp != NULL){
            printf("%3d", tmp->value); 
            tmp=tmp->next;
    }
    printf("\n");

/*  Exercise IV change to while loop!! (you can use NULL to help)
    

         while(){
            printf("%3d", tmp->value);
           // What is missing???
        }
        pass
*/

    
    
    typedef struct node* NodePtr;
    typedef struct node NODE;
    
    head = (NodePtr)malloc(sizeof(NODE));
    tmp=head;
    for(i=0;i<3;i++)
    {
        tmp->value=i+3;
        tmp->next = (NodePtr)malloc(sizeof(NODE));
        tmp = tmp->next;  
    }
    
    tmp->value=i+3;
    tmp->next=NULL;
    

    tmp=head;
    while(tmp != NULL){
            printf("%3d ", tmp->value); 
            tmp=tmp->next;
    }
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
          
 */

/*  Exercise VI Free all node !!
         //use a loop to help
          
 */
    
    printf("\n");

    for(tmp=head; tmp != NULL; tmp=head)
    {
        head=head->next;
        printf("Free %d\n",tmp->value);
        free(tmp);
    }
    return 0;
}
