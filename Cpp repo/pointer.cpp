
#include <iostream>

int main() {
    
    int score=50;
    int *p; 
    p = &score;   
    
     printf("Value at ptr = %p \n",p);
      printf("Value at score = %d \n",score);
       printf("Value at *ptr = %d \n", *p);     
}

  
