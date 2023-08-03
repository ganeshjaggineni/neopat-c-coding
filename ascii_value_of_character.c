/*
Write a program to print the ASCII value of a character

Input format :
The input consists of a character.

Output format :
The output prints the ASCII value of the character.

Sample test cases :
Input 1 :
a
Output 1 :
97
Input 2 :
1
Output 2 :
49
*/
//CODING

// You are using GCC
#include<stdio.h>
int main()
{
    char character;
    scanf("%c",&character);
    printf("%d",character);
    return 0;
}