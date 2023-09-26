// call and definition
#include <stdio.h>
 
// Function that takes two parameters
// a and b as inputs and returns
// their sum
int sum(int a, int b)
{
  return a + b;
}
 
// Driver code
int main()
{
  // Calling sum function and
  // storing its value in add variable
  int add = sum(10, 30);
   
  printf("Sum is: %d", add);
  return 0;
}

//another examples;

// C program to implement
// the above approach
#include <math.h>
#include <stdio.h>
 
// Driver code
int main()
{
  double Number;
  Number = 49;
 
  // Computing the square root with
  // the help of predefined C
  // library function
  double squareRoot = sqrt(Number);
   
  printf("The Square root of %.2lf = %.2lf",
          Number, squareRoot);
  return 0;
}



// user-defined functions
#include <stdio.h>
 
int sum(int a, int b)
{
  return a + b;
}
 
// Driver code
int main()
{
  int a = 30, b = 40;
  
  // function call
  int res = sum(a, b);
 
  printf("Sum is: %d", res);
  return 0;
}

// C program to show use
// of call by value
#include <stdio.h>
 
void swap(int var1, int var2)
{
  int temp = var1;
  var1 = var2;
  var2 = temp;
}
 
// Driver code
int main()
{
  int var1 = 3, var2 = 2;
  printf("Before swap Value of var1 and var2 is: %d, %d\n",
          var1, var2);
  swap(var1, var2);
  printf("After swap Value of var1 and var2 is: %d, %d",
          var1, var2);
  return 0;
}


// C program to show use of
// call by Reference
#include <stdio.h>
 
void swap(int *var1, int *var2)
{
  int temp = *var1;
  *var1 = *var2;
  *var2 = temp;
}
 
// Driver code
int main()
{
  int var1 = 3, var2 = 2;
  printf("Before swap Value of var1 and var2 is: %d, %d\n",
          var1, var2);
  swap(&var1, &var2);
  printf("After swap Value of var1 and var2 is: %d, %d",
          var1, var2);
  return 0;
}


// C program to illustrate
// call by value
#include <stdio.h>
 
void func(int a, int b)
{
    a += b;
    printf("In func, a = %d b = %d\n", a, b);
}
int main(void)
{
    int x = 5, y = 7;
 
    // Passing parameters
    func(x, y);
    printf("In main, x = %d y = %d\n", x, y);
    return 0;
}

// concept of Nested function.
#include <stdio.h>
int main(void)
{
    printf("Main");
    int fun()
    {
        printf("fun");
  
        // defining view() function inside fun() function.
        int view()
        {
            printf("view");
        }
        return 1;
    }
    view();
}


// C program to demonstrate __func__
#include <stdio.h>
 
// %s is used to read strings
void foo(void) { printf("%s", __func__); }
void bar(void) { printf("%s", __func__); }
 
int main()
{
    foo();
    bar();
    return 0;
}