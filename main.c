#include <stdio.h>

int main () 
 { 
     
int x, y, swap;
    printf ("Enter value of x: ");
    scanf ("%d", &x);
  
    printf ("Enter value of y: ");
    scanf ("%d", &y);
  
 
    printf ("\nBefore swapping: x = %d, y = %d\n", x, y);
  
 
    swap = x;
        x = y;
        y = swap;
    
    printf ("After swapping: x = %d, y = %d\n", x, y);
    
return 0;

}


 
 
