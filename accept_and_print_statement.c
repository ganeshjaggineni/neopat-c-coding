/*
Write a program that accepts a sentence as input and prints the same.

Input format :
The input consists of a sentence.

Output format :
The output prints the given sentence.

Sample test cases :
Input 1 :
Make life ridiculously amazing
Output 1 :
Make life ridiculously amazing
Input 2 :
Welcome to the programming world
Output 2 :
Welcome to the programming world
*/
//coding

#include<stdio.h>
int main()
{
    char sent[50];
    scanf("%[^\n]s",sent);
    printf("%s",sent);
    return 0;
}