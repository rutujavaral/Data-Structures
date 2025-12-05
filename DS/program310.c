////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :     program310.c
//  Description :     Data structures
//                  
//  Input       :         
//  Output      :        
//  Author      :      Rutuja Bharat varal
//  Date        :      4/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

typedef struct  node
   {
      int data;
      struct node *next;
      
   }NODE,*PNODE,**PPNODE;



int main()
{
   
  PNODE ptr = NULL;

  ptr =(PNODE) malloc (sizeof(NODE));

  //USE THE NODE

  free(ptr);
  
  return 0;

}