'''#include <stdio.h>

int main() {
    int a = 10, b = 5;
    // Arithmetic operators
    printf("Following are the Arithmetic operators in C\n");
    printf("The value of a + b is %d\n", a + b);
    printf("The value of a - b is %d\n", a - b);
 
    printf("The value of a * b is %d\n", a * b);
    printf("The value of a / b is %d\n", a / b);
    printf("The value of a % b is %d\n", a % b);
    // First print (a) and then increment it
    // by 1
    printf("The value of a++ is %d\n", a++);
 
    // First print (a+1) and then decrease it
    // by 1
    printf("The value of a-- is %d\n", a--);
 
    // Increment (a) by (a+1) and then print
    printf("The value of ++a is %d\n", ++a);
 
    // Decrement (a+1) by (a) and then print
    printf("The value of --a is %d\n", --a);
 
    // Assignment Operators --> used to assign values to
    // variables int a =3, b=9; char d='d';
 
    // Comparison operators
    // Output of all these comparison operators will be (1)
    // if it is true and (0) if it is false
    printf(
        "\nFollowing are the comparison operators in C\n");
    printf("The value of a == b is %d\n", (a == b));
    printf("The value of a != b is %d\n", (a != b));
    printf("The value of a >= b is %d\n", (a >= b));
    printf("The value of a <= b is %d\n", (a <= b));
    printf("The value of a > b is %d\n", (a > b));
    printf("The value of a < b is %d\n", (a < b));
 
    // Logical operators
    printf("\nFollowing are the logical operators in C\n");
    printf("The value of this logical and operator ((a==b) "
           "&& (a<b)) is:%d\n",
           ((a == b) && (a < b)));
    printf("The value of this logical or operator ((a==b) "
           "|| (a<b)) is:%d\n",
           ((a == b) || (a < b)));
    printf("The value of this logical not operator "
           "(!(a==b)) is:%d\n",
           (!(a == b)));
 
    return 0;'''
}

// Working of increment and decrement operators
#include <stdio.h>
int main()
{
    int a = 10, b = 100;
    float c = 10.5, d = 100.5;

    printf("++a = %d \n", ++a);
    printf("--b = %d \n", --b);
    printf("++c = %f \n", ++c);
    printf("--d = %f \n", --d);

    return 0;
}

// Working of assignment operators
#include <stdio.h>
int main()
{
    int a = 5, c;

    c = a;      // c is 5
    printf("c = %d\n", c);
    c += a;     // c is 10 
    printf("c = %d\n", c);
    c -= a;     // c is 5
    printf("c = %d\n", c);
    c *= a;     // c is 25
    printf("c = %d\n", c);
    c /= a;     // c is 5
    printf("c = %d\n", c);
    c %= a;     // c = 0
    printf("c = %d\n", c);
    return 0;
}

// Working of relational operators
#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10;

    printf("%d == %d is %d \n", a, b, a == b);
    printf("%d == %d is %d \n", a, c, a == c);
    printf("%d > %d is %d \n", a, b, a > b);
    printf("%d > %d is %d \n", a, c, a > c);
    printf("%d < %d is %d \n", a, b, a < b);
    printf("%d < %d is %d \n", a, c, a < c);
    printf("%d != %d is %d \n", a, b, a != b);
    printf("%d != %d is %d \n", a, c, a != c);
    printf("%d >= %d is %d \n", a, b, a >= b);
    printf("%d >= %d is %d \n", a, c, a >= c);
    printf("%d <= %d is %d \n", a, b, a <= b);
    printf("%d <= %d is %d \n", a, c, a <= c);

    return 0;
}

// Working of logical operators

#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10, result;

    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);

    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);

    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);

    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);

    result = !(a != b);
    printf("!(a != b) is %d \n", result);

    result = !(a == b);
    printf("!(a == b) is %d \n", result);

    return 0;
}

//logical operators;

#include <stdio.h>
int main()
{
    int a;
    float b;
    double c;
    char d;
    printf("Size of int=%lu bytes\n",sizeof(a));
    printf("Size of float=%lu bytes\n",sizeof(b));
    printf("Size of double=%lu bytes\n",sizeof(c));
    printf("Size of char=%lu byte\n",sizeof(d));

    return 0;
}

//relational operators;

#include <stdio.h>

int main() {

   int a = 10, b = 20, result;

   // Equal
   result = (a==b);
   printf("(a == b) = %d \n",result);

   // less than
   result = (a<b);
   printf("(a < b) = %d \n",result);

   // greater than
   result = (a>b);
   printf("(a > b) = %d \n",result);

   // less than equal to
   result = (a<=b);
   printf("(a <= b) = %d \n",result);

   return 0;

}
//bitwise and right shift operators

#include <stdio.h>

int main() {

   int a = 1, b = 0, result;

   // And
   result = (a && b);
   printf("a && b = %d \n",result);

   // Or
   result = (a || b);
   printf("a || b = %d \n",result);

   // Not
   result = !a;
   printf("!a = %d \n",result);

   return 0;

}


#include <stdio.h>

int main() {

   int a = 0001000, b = 2, result;

   // <<
   result = a<<b;
   printf("a << b = %d \n",result);

   // >>
   result = a>>b;
   printf("a >> b = %d \n",result);

   return 0;

}
//assighnment operator;

#include <stdio.h>

int main() 

//using ternary operator;

#include <stdio.h>

int main() {

   int a = 20, b = 20, result;

   /* Using ternary operator
      - If a == b then store a+b in result
      - otherwise store a-b in result
   */
   result = (a==b)?(a+b):(a-b);

   printf("result = %d",result);

   return 0;

}

//special operators;

#include <stdio.h>

int main() {

   int a = 20;
   char b = 'B';
   double c = 17349494.249324;

   // sizeof operator
   printf("Size of a is: %d \n", sizeof(a));
   printf("Size of b is: %d \n", sizeof(b));
   printf("Size of c is: %d \n", sizeof(c));

   // & operator
   printf("Memory address of a: %d \n", &a);

   return 0;

}


