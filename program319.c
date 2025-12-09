////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :     program319.c
//  Description :     Data structures[Count]
//                  
//  Input       :         
//  Output      :        
//  Author      :      Rutuja Bharat varal
//  Date        :      5/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node
   {
      int data;
      struct node *next;
      
   };

typedef struct  node NODE; 
typedef struct  node * PNODE; 
typedef struct  node ** PPNODE; 

 void InsertFirst(PPNODE first,int no)
 {
   PNODE newn=NULL;

   newn = (PNODE)malloc(sizeof(NODE));
   newn ->data=no;
   newn->next=NULL;
    
   if(*first == NULL)       //LL IS EMPTY
   {
      *first = newn;
   }
   else                    //LL CONTAINS AT LEAST  1 NODE
   {
       newn->next=(*first);
       (*first) = newn;
   }
}  

   void InsertLast(PPNODE first,int no)
 {
   PNODE newn=NULL;

   newn = (PNODE)malloc(sizeof(NODE));
   newn ->data=no;
   newn->next=NULL;
    
   if(*first == NULL)       //LL IS EMPTY
   {
      (*first) = newn;
   }
   else                    //LL CONTAINS AT LEAST  1 NODE
   { 
   

       
   }
 }  
 void Display(PNODE first)
 {
    while (first != NULL)
    {
        printf(" | %d |->", first-> data);  
        first= first -> next;
    }
    printf("NULL\n");
}
 int Count (PNODE first)
 {
    int iCount=0;

    while (first != NULL)
    {
        iCount ++;
        first = first -> next;
    }
    return iCount;
 }   
    
 

int main()
{
   
  PNODE head = NULL;
  int iRet=0;

  InsertFirst (&head,75);
  InsertFirst (&head,51);
  InsertFirst(&head,21);
  InsertFirst(&head,11);

  Display(head);
  iRet= Count(head);

  printf("number of nodes are:%d\n",iRet);

  return 0;

}