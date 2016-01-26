/* 
 * File:   armstrong.c
 * Author: Joseph
 *
 * This program finds out if the number inputed is a armstrong number
 */

#include <stdio.h>

int main() {
    int number; 
    //we have a int called number
    
    int sum = 0; 
    //we have something set for the sum
    
    int temp; 
    //we have a temp int
    
    int remainder; 
    //we have a int to hold the remainder

    printf("Enter an integer\n"); 
    //we prompt the user to enter a integer 
    
    scanf("%d", &number); 
    //next we scan in that integer and place it in number
    
    temp = number; 
    //we set our temp variable to be equal to the number

    while (temp != 0) 
        //while the temp variable is not zero
    {
        remainder = temp % 10; 
        //we set our remainder of the number to equal the temp number / 10
        
        sum = sum + remainder * remainder*remainder; 
        //we set the sum to equal the sum plus the remainder times itself 3 times
        
        temp = temp / 10; 
        //we set our temp to equal itself divided by 10
    }

    if (number == sum) 
        //if our number is equal to the sum when temp reaches 0
        
        printf("Entered number is an armstrong number.\n"); 
    //we tell the user that there is armstrong number
    
    else
        printf("Entered number is not an armstrong number.\n"); 
    //we tell the user that this is not a armstrong number
    

    return 0;
}
