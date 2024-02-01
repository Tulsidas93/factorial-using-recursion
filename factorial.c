 //code for  factorial of n number using recursion

#include<stdio.h>           // decleration of header files

int factorial (int num);    // decleration of function

 int main()
{
int num;           // veriabel decleration
printf("enter a number:");   //print "statement"
scanf("%d",&num);            // read input from keypad
printf("factorial is: %d",factorial(num)); // call to factorial function & print the factorial.
return 0;
}

 int factorial (int num){      //defination of factorial function

if (num==0)                    //if value is 0 return 1 i.e. num^0=1
{
    return 1;
}
     int factnum1= factorial(num-1);  // number -1 
     int factn= factnum1 * num;            // result * number
    return factn;                        //return result
}

