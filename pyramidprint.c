// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j;
    for(i =1; i<= 4; i++) {
       
    //printing spaces
        
    for(j =1; j<=4 - i ; j++) {
    printf(" ");
    }
          //   printing stars
          for(j =1; j <=i; j++) {
         printf(" *");
}
          printf("\n");
          
    }
         return 0 ;
            
    }
