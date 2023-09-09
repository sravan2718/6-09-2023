// if statements:
#include <stdio.h>
 
int main () {

   /* local variable definition */
   int a = 10;
 
   /* check the boolean condition using if statement */
	
   if( a < 20 ) {
      /* if condition is true then print the following */
      printf("a is less than 20\n" );
   }
   
   printf("value of a is : %d\n", a);
 
   return 0;
}


# example;

#include <stdio.h>
int main()
{
    int x = 20;
    int y = 22;
    if (x<y)
    {
        printf("Variable x is less than y");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int x, y;
    printf("enter the value of x:");
    scanf("%d", &x);
    printf("enter the value of y:");
    scanf("%d", &y);
    if (x>y)
    {
	printf("x is greater than y\n");
    }
    if (x<y)
    {
	printf("x is less than y\n");
    }
    if (x==y)
    {
	printf("x is equal to y\n");
    }
    printf("End of Program");
    return 0;
}

//IF ELSE STATEMENTS:

// Check whether an integer is odd or even

#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // True if the remainder is 0
    if  (number%2 == 0) {
        printf("%d is an even integer.",number);
    }
    else {
        printf("%d is an odd integer.",number);
    }

    return 0;
}

// Program to relate two integers using =, > or < symbol

#include <stdio.h>
int main() {
    int number1, number2;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    //checks if the two integers are equal.
    if(number1 == number2) {
        printf("Result: %d = %d",number1,number2);
    }

    //checks if number1 is greater than number2.
    else if (number1 > number2) {
        printf("Result: %d > %d", number1, number2);
    }

    //checks if both test expressions are false
    else {
        printf("Result: %d < %d",number1, number2);
    }

    return 0;
}

#include <stdio.h>
int main() {
    int number1, number2;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    if (number1 >= number2) {
      if (number1 == number2) {
        printf("Result: %d = %d",number1,number2);
      }
      else {
        printf("Result: %d > %d", number1, number2);
      }
    }
    else {
        printf("Result: %d < %d",number1, number2);
    }

    return 0;
}

// C Program to demonstrate the use of if-else statement
#include <stdio.h>
 
int main()
{
 
    // if block with condition at the start
    if (5 < 10) {
 
        // will be executed if the condition is true
        printf("5 is less than 10.");
    }
 
    // else block after the if block
    else {
 
        // will be executed if the condition is false
        printf("5 is greater that 10.");
    }
 
    return 0;
}


/ C Program to Demonstrate the working of if-else statement
#include <stdio.h>
 
int main()
{
 
    // Some random number
    int num = 9911234;
 
    // checking the condition at the start of if block
    if (num % 2 == 0) {
        // executed when the number is even
        printf("Number is even");
    }
    // else block
    else {
        // executed when the number is odd
        printf("Number is Odd");
    }
 
    return 0;
}

// C Program to check whether the person is eligible to vote
// or not
#include <stdio.h>
 int main(){

    // declaring age of two person
    int p1_age = 15;
    int p2_age = 25;
 
    // checking eligibility of person 1
    if (p1_age < 18)
        printf("Person 1 is not eligible to vote.\n");
    else
        printf("Person 1 is eligible to vote.\n");
 
    // checking eligiblity of person 2
    if (p2_age < 18)
        printf("Person 2 is not eligible to vote.\n");
    else
        printf("Person 2 is eligible to vote.");
 
    return 0;
}

#include <stdio.h>
 
int main () {

   /* local variable definition */
   int a = 100;
 
   /* check the boolean condition */
   if( a < 20 ) {
      /* if condition is true then print the following */
      printf("a is less than 20\n" );
   } else {
      /* if condition is false then print the following */
      printf("a is not less than 20\n" );
   }
   
   printf("value of a is : %d\n", a);
 
   return 0;
}
