#include <stdio.h>
#include <stdlib.h>
#include "list.h"

//in this code if we use scanf, a non integer value this goes in a infinite loop.
//how to stop that?
int i;
int found;
int n;
int search(int a){
    for( n=0;n<10000;n++){
        if(list[n]==a){

            break;

        }

    }

    return n;
}

void main()
{

while(1){
    scanf("%d",&i);


    if(search(i)==10000){
            printf("Number is not to be found in array\n");

    }
        else{
            printf("The index of the number found:%d\n",n);
        }
    }

}
