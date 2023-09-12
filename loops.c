//while loop in c;

#include <stdio.h>
int main()
{
    int i;
    i = 1;
    while (i<=5)
    {
        printf("/n %d", i);
        i++;
        
    }
        return 0;
        
}


//another example;

#include <stdio.h>
int main()
{
    int i;
    i = 5;
    while (i>=1)
    {
        printf("/n %d", i);
        i--;
        
    }
        return 0;
        
}

Do while loop;

// Program to add numbers until the user enters zero

#include <stdio.h>
int main() {
  double number, sum = 0;

  // the body of the loop is executed at least once
  do {
    printf("Enter a number: ");
    scanf("%lf", &number);
    sum += number;
  }
  while(number != 0.0);

  printf("Sum = %.2lf",sum);

  return 0;
}


// C Program to demonstrate the use of do...while loop
#include <stdio.h>
 
int main()
{
 
    // loop variable declaration and initialization
    int i = 0;
    // do while loop
    do {
        printf("Geeks\n");
        i++;
    } while (i < 3);
 
    return 0;
}

/ C Program to demonstrate the do...while loop behaviour
// when the condition is false from the start
#include <stdbool.h>
#include <stdio.h>
 
int main()
{
 
    // declaring a false variable
    bool condition = false;
 
    do {
        printf("This is loop body.");
    } while (condition); // false condition
 
    return 0;
}

# example:

#include <stdio.h>
 
int main () {

   /* local variable definition */
   int a = 10;

   /* do loop execution */
   do {
      printf("value of a: %d\n", a);
      a = a + 1;
   }while( a < 20 );
 
   return 0;
}

For loop;

int i, j;

// Outer loop
for (i = 1; i <= 2; ++i) {
  printf("Outer: %d\n", i);  // Executes 2 times

  // Inner loop
  for (j = 1; j <= 3; ++j) {
    printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
  }
}


#include <stdio.h>
 
int main()
{
 
    int i;
 
    // for loop without curly braces
    for (i = 1; i <= 10; i++)
        printf("%d ", i);
    printf("\nThis statement executes after for loop end!!!!"); // Statement print only once
 
    return 0;
}

// C program to demonstrate infinite Loop
#include <stdio.h>
 
int main()
{
    int gfg = 0;
    for (;;) // condition 1,2 and 3 are not entered
    {
        printf("GeeksforGeeks to Infinite");
    }
    // Return statement to tell that everything executed
    // safely
    return 0;
}

#include <stdio.h>
 
int main () {

   int a;
	
   /* for loop execution */
   for( a = 10; a < 20; a = a + 1 ){
      printf("value of a: %d\n", a);
   }
 
   return 0;
}

// example;

#include<stdio.h>  
int main(){  
int i=1,number=0;      
printf("Enter a number: ");    
scanf("%d",&number);    
for(i=1;i<=10;i++){      
printf("%d \n",(number*i));    
}    
return 0;  
} 

 #include <stdio.h>  
int main()  
{  
    int a,b,c;  
    for(a=0,b=12,c=23;a<2;a++)  
    {  
        printf("%d ",a+b+c);  
    }  
} 

example: 

#include <stdio.h>  
int main()  
{  
    int i,j,k;  
    for(i=0,j=0,k=0;i<4,k<8,j<10;i++)  
    {  
        printf("%d %d %d\n",i,j,k);  
        j+=2;  
        k+=3;  
    }  
}    


