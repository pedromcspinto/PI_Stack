/*
 * Pedro Pinto
 * a22000888
 * Desafio_Aula
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"
#define MAXSIZE 5

int main()
{
    STACK *s = malloc(5*sizeof(STACK));
    initStack(s);
    initStack(s+1);
    STACK *ptr=NULL;
    int op, choice;

     do
    {
    menu();
    printf("Choose a stack: ");
    scanf("%d", &op);

    if(op==1)
        ptr=s;
    if(op==2)
        ptr=s+1;
    if(op==0)
    {
        printf("Closing...\n");
        exit(1);
    }
    system("CLS");
    }while(ptr==NULL);

    do
    {
        menu2();
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push(ptr);
            break;
        case 2:
            pop(ptr);
            break;
        case 3:
            top(ptr);
            break;
        case 4:
            Swap(ptr);
            break;
        case 5:
            noc(ptr);
            break;
        case 6:
            popn(ptr);
            break;
        case 7:
            clear(ptr);
            break;
        case 8:
            showStack(ptr);
            break;
        case 9:
            do
            {
                ptr=NULL;
                system("CLS");
                menu();
                printf("Choose a stack: ");
                scanf("%d", &op);

                if(op==1)
                    ptr=s;
                if(op==2)
                    ptr=s+1;
                if(op==0)
                {
                    printf("Closing...\n");
                    exit(1);
                }
            }
            while(ptr==NULL);

            break;
        case 10:
            overlap(s, s+1);
            break;
        case 11:
            subStack(s, s+1);
            break;
        case 0:
            free(ptr);
            printf("Closing...\n");
            exit(1);
        }
        system("CLS");

    }while(choice!=0);

    return 0;
}


