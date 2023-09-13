//Break statements;

# include <stdio.h>
int main()
{
    int i;
    for(i=1; i<=10; i++)
    
    {
        if(i==5)
        {
            break;
        }
        printf("n%d",i);
        
    }
        }


#include <stdio.h>
 
int main () {

   /* local variable definition */
   int a = 10;

   /* while loop execution */
   while( a < 20 ) {
   
      printf("value of a: %d\n", a);
      a++;
		
      if( a > 15) {
         /* terminate the loop using break statement */
         break;
      }
   }
 
   return 0;
}


#include <stdio.h>
 
int main () {

   /* local variable definition */
   int a = 10;

   /* while loop execution */
   while( a < 20 ) {
   
      printf("value of a: %d\n", a);
      a++;
		
      if( a > 15) {
         /* terminate the loop using break statement */
         break;
      }
   }
 
   return 0;
}

#include <stdio.h>
int main() {
   char c;
   for(;;) {
      printf_s( "\nPress any key, Q to quit: " );

      // Convert to character value
      scanf_s("%c", &c);
      if (c == 'Q')
          break;
   }
   
 //continue statements:

#include <stdio.h>
 
int main () {

   /* local variable definition */
   int a = 10;

   /* do loop execution */
   do {
   
      if( a == 15) {
         /* skip the iteration */
         a = a + 1;
         continue;
      }
		
      printf("value of a: %d\n", a);
      a++;
   
   } while( a < 20 );
 
   return 0;
}



 #include <stdio.h>
int main()
{
   for (int j=0; j<=8; j++)
   {
      if (j==4)
      {
	    /* The continue statement is encountered when
	     * the value of j is equal to 4.
	     */
	    continue;
       }

       /* This print statement would not execute for the
	* loop iteration where j ==4  because in that case
	* this statement would be skipped.
	*/
       printf("%d ", j);
   }
   return 0;
}

#include <stdio.h>
int main()
{
    int counter=10;
    while (counter >=0)
    {
	 if (counter==7)
	 {
	      counter--;
	      continue;
	 }
	 printf("%d  ", counter);
	 counter--;
    }
    return 0;
}


#include <stdio.h>
int main()
{
   int j=0;
   do
   {
      if (j==7)
      {
         j++;
         continue;
      }
      printf("%d ", j);
      j++;
   }while(j<10);
   return 0;
}
