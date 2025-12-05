////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :     program303.c
//  Description :     Data structures
//                  
//  Input       :         
//  Output      :        
//  Author      :      Rutuja Bharat varal
//  Date        :      4/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

struct node
   {
      int data;
      struct node *next;
      
   };
   
int main()
{
   
    struct node obj;

    printf("%ld\n",sizeof (obj));
    return 0;

}