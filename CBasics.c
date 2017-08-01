#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/*This is how to comment out a particular section */
//This is how to comment out a whole line

int main()
{
/*Introduce puts(). Sends or (puts) a string to standard output*/
/*puts() does not require a new line opperator (\n) */
    puts("I am Michael");
    puts("Hello world!");


/*Introduce printf(). Sends a string of characters to standard output */
/*printf() is more powerful than puts() */
    printf("I am Michael");
    printf("Hello world!");

/*Notice that both strings print on the same line */
/*To make them print on separate lines, include the newline opperator at the end of each string (\n) */
/*Add \n at the beginning of the first string to start on a new line from the last string */
    printf("\nI am Michael\n");
    printf("Hello world!\n");

/*Introduce Escape Characters. Allows you to use unusable characters in strings *?
/*Main Unusable Characters include: newline (\n); tab (\t); escaped single quote (\'); display backspace char (\\)*/
    printf("Hello\nMy name is \"Blorf.\"\n");


/*Introducing Values and Placeholders. Values are typically numeric. */
    printf("Here is a value:  27\n");

/*Placeholders are symbols that represent some value or string*/
/*To represent a value, insert %d in place of the value.
then outside the "" add a comma (,). After this add the value*/
/*The printf() function now has two arguments. The first is the formatting string, the second is the value following it*/
    printf("Here is a value: %d\n",27);
/*The value that %d represents is local, it only represents the value that immediately follows the comma (,)*/
    printf("Here is a value: %d\n",29);
/*Multiple instances of %d can be used in one string, only if there are a matching number of values*/
/*Multiple arguemnt values are separated by commas (,)*/
    printf("And here are the values: %d, %d, and %d\n",51,52,53 );

/*Introducing math using placeholders and values*/
/*Instead of using a value as an argument, use a mathematical problem*/
    printf("Everyone knows that 2+2=%d\n",2+2 );

/*Introducing square root and power function along with how to get a random number*/
/*All C library math functions require the math.h header file*/
/*Floating point value numbers must have a decimal followed by some number*/
/*To find the square root of a number type 'sqrt(some number here)'*/
    float r;

    r = sqrt(2.0);
    printf("The square root of 2 is %f\n",r);
/*To find the power of a number use 'pow(base number, exponent)'*/
    float p;

    p = pow(2,8);
    printf("2 to the 8th power is %f\n",p);
/*To generate pseudo-random numbers use 'rand()'*/
/*Only pseudo because the numbers can be predicted*/
/*Requires 'stdib.h' header file*/
    int ra;

    ra = rand();
    printf("%d is a random number.\n",ra);
/*rand() generates a random number, but will consistently produce the same random number*/
/*For best random results, seed random number generator with 'srand(positive integer value)'*/
    int ra1;

    srand(66);
    ra1 = rand();

    printf("%d is a random number.\n",ra1);
/*Will still consistently print a new random number.*/

/*Several ways to fix problem. 1) ask user for random number at the begining of program. 2) use current tick-tock value from computers internal clock using 'srand((unsigned)time(NULL))'*/
    int ra2;

  //  srand((unsigned)time(NULL));
    ra2 = rand();

    printf("%d is a random number.\n",ra2);

/*Comparison Operators:
'=='' Is equal to
'<' Less than
'>' Greater than
'<=' Less than or equal to
'>=' Greater than or equal to
'!=' Does not equal*/


/*Making a decision with If*/
/*If statement is made using 'if(condition(s))'*/
/*If there is only one executed statement NO CURLY BRACKETS ARE NEEDED. The If statement can be split between two lines. With the If and conditions on one line, and the executed statement on the following line(s) followed by a ';' */
/*If statements with a single executed statement MAY BE WRITTEN ON A SINGLE LINE. However this is uncommon*/
/*if(condition(s))
    perform some action;*/
    int a;

    printf("Type an Integer: ");
    scanf("%d",&a);
    printf("You typed %d.\n",a);
    if( a > 10)
      printf("%d is greater than 10.\n",a);

/*It is more common to enclose the executed statements in curly brackets. This is required if there is more than one statement executed based on the if statement*/
    if( a < 10 )
    {
      printf("%d is less than 10.\n",a);
      printf("%d is better than 10",a);
    }

/*If Else */
/*By adding else, a condition is created that states 'if the condition for If is not met, execute the statement in else'*/

    if ( a >= 10)
    {
      printf("%d is greater than or equal to 10.\n",a);
    }
    else
    {
      printf("%d is less than 10",a);
    }

/*Else if*/
/*An if statement that is skipped if the primary if statement is true*/
/*If the else if is true then any following else if or else statements are skipped*/

    if( a == 10)
    {
      printf("%d is equal to 10.\n",a);
    }
    else if ( a == 12)
    {
      printf("%d is equal to 12.\n",a);
    }
    else
    {
      printf("%d is not equal to 10 or 12",a);
    }

/*Making multiple decisions with Switch-Case*/
/**/
    char b;

    printf("Your choice (1,2,3): ");
    scanf("%c",&b);

    switch(b)
    {
      case '1':
        puts("Excellent choice!\n");
        break;
      case '2':
        puts("This is the most common choice.\n");
        break;
      case '3':
        puts("I question your judgement.\n");
       break;
      default:
        puts("That's not a valid choice.\n");
    }

/*Switch-Case can be used as a menu*/
    puts("Vacation options:");
    puts("A - Airfare");
    puts("B - Hotel");
    puts("C - Rental Car");
    scanf("%c",&b);

    switch(b)
    {
      case 'A':
      case 'a':
        puts("You have selected the airfare");
       break;
      case 'B':
      case 'b':
        puts("You have selected the hotel");
       break;
      case 'C':
      case 'c':
        puts("You have selected the rental car");
       break;
     default:
      puts("That's not a valid choice");
    }

/*Looping with a While*/
/*One or more statements are repeated until a condition is met*/

    int x;

    x = 1;
    while( x < 10 )
    {
      printf("%d\n",x);
      x++;
    }

/*Looping with Do while*/
/*This is used when a statement needs to be executed at least once*/

    char ch;

    ch = 'A';

    do {
      putchar(ch);
      ch++;
    } while( ch != 'Z' + 1);

    putchar('\n');

/*For loop*/
/*like while loop, set up on single line*/

    int y;

    for(y = 0; y < 10; y++)
      printf("%d\n",y);
    for(y = 1; y < 20; y++)
      printf("%d",y);
    for(y = 2; y < 20; y = y +2)
      printf("%d",y);
    for(y = 10; y < 0; y--)
      printf("%d",y);

/*Arrays*/
/*collection of more than one of the same type of variable*/

/*Non array version*/
    float temp1,temp2,temp3,temp4;

    temp1 = 84.9;
    temp2 = 83.7;
    temp3 = 85.8;
    temp4 = 88.2;

    printf("Local temperatures:\n");
    printf("Station 1: %.1f\n",temp1);
    printf("Station 2: %.1f\n",temp2);
    printf("Station 3: %.1f\n",temp3);
    printf("Station 4: %.1f\n",temp4);

/*Array Version*/
    float temps[4] = {84.9, 83.7, 85.8, 88.2};
    int q;

    printf("Local Temperatures:\n");
    for (size_t q = 0; q < 4; q++) {
      printf("Station %d: %.1f\n",q,temps[q]);
    }

/*Character Array*/
/**/
    char text[] = {
      'I',' ','a','m',' ','a',' ','s','t','r','i','n','g','!','\0'
    };

    puts(text);

/*Nested loops numbers*/
    int column,s;

    srand((unsigned)time(NULL));

    for(column = 0;column < 10; column++){
      s = rand();
      printf("%2d\t",s % 100);
    }
    putchar('\n');

/*Nested loops Letters and numbers*/
    int alpa
return(0);
}

