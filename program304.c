////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :     program304.c
//  Description :     Data structures
//                  
//  Input       :         
//  Output      :        
//  Author      :      Rutuja Bharat varal
//  Date        :      4/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#pragma pack(1)
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