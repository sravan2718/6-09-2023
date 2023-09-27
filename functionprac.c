//function with no argument and no return value

#include <stdio.h>

void printMessage() {
    printf("This is a function with no arguments and no return value.\n");
}

int main() {
    printMessage(); // Call the function
    return 0;
}

// example;
#include <stdio.h>

void greet() {
    printf("Hello, World!\n");
}

int main() {
    greet(); // Call the function
    return 0;
}

// function with no argments and return value;
#include <stdio.h>

int getRandomNumber() {
    return rand(); // Return a random number
}

int main() {
    int randomNumber;

    // Call the function and store the return value in randomNumber
    randomNumber = getRandomNumber();

    printf("Random number: %d\n", randomNumber);

    return 0;
}
In this example:
//function with arugument and without return value

# include <stdio.h>
void fun_name(int, int);
int main()
{
    int par1=10,par2=20;
    fun_name(par1, par2);
}
    
void fun_name(int a,int b)
{
    int result;
    result=a+b;
    printf("result =%d\n",result);
    printf("function with argument and without return value\n");
}

//function with argument and without return value
#include <stdio.h>

int add(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int num1 = 5;
    int num2 = 7;
    int result;

    // Call the function with arguments num1 and num2, and store the result
    result = add(num1, num2);

    printf("Sum of %d and %d is %d\n", num1, num2, result);

    return 0;
}
// function with no argument and no return value
include <stdio.h>
void fun_name();//function declaration
int main()
{
    fun_name();//function call

}
void fun_name()//function definition
{
    printf("function with no argument and no return value\n");

    
}

