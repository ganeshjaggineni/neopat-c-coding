/*
Write a program that accepts a username and password as input and prints the same.

Input format :
The input consists of the user name and password separated by a space.

Output format :
The output prints the username and password separated by a tab space.

Sample test cases :
Input 1 :
alice alice01
Output 1 :
alice	alice01
*/
//CODING

// You are using GCC
#include<stdio.h>
int main()
{
    char username[20],pwd[20];
    scanf("%s%s",username,pwd);
    
    printf("%s\t%s",username,pwd);
    return 0;
}