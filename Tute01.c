/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

int sub1 , sub2 ;
float avg ;

//input subjects marks
printf ( "Enter the subject 1 marks : " ) ;
scanf ( "%d" , &sub1 ) ;

printf ( "Enter the subject 2 marks : " ) ;
scanf ( "%d" , &sub2 ) ;

//calculate the average
avg = ( sub1 + sub2 )/2.0 ;

//print the average
printf ( "Average is : %.2f " , avg ) ;

return 0;
}

