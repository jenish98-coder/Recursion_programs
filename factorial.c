// program to find the factorial of input number

#include <stdio.h> 
int Factorial(int); 
int main() { 
    int num, val;

     printf("\n Enter the number: ");
      scanf("%d", &num); 

      val = Factorial(num); 
      printf("\n Factorial of Xd Xd", num, val);
       return 0; 
       } 

       int Factorial(int n) {

       if(n==0) // Base case return 1; else //Recursive case return (n Factorial(n-1));
       return 1;

       else if(n==1)
       return 1;

       else
       return (n*Factorial(n-1));

       }