/*
Write a program that accepts a char, int, and float as input and prints the same.

Input format :
The input consists of a char, int, and float separated by a space.

Output format :
The output prints the value of char, int, and float (rounded off to 2 decimals) separated by a space.



Refer to the sample output for formatting specifications.

Sample test cases :
Input 1 :
a 10 15.2
Output 1 :
a 10 15.20
Input 2 :
b 25 85.258
Output 2 :
b 25 85.26
*/

//CODING

#include<stdio.h>
int main()
{
    char char_letter;
    int int_num;
    float float_num;
    scanf("%c",&char_letter);
    scanf("%d",&int_num);
    scanf("%f",&float_num);
    
    printf("%c %d %.2f",char_letter,int_num,float_num);
    return 0;
}