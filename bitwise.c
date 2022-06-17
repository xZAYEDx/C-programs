/* using bitwise operators */
 #include <stdio.h>
 #include <conio.h>

 void main()
 {

 /* declaring variables */
 int x,y;

 /* storing the valuse */
 x = 10;
 y = 12;

 //clrscr();
 /* performing the bitwise operation */
 printf("\n ~x = %d", (~x));
 printf("\n x&y = %d", (x&y));
 printf("\n x|y = %d", (x|y));
 printf("\n x^y = %d", (x^y));
 printf("\n x<<2 = %d", (x<<2));
 printf("\n x>>2 = %d", (x>>2));
 getch();
 }