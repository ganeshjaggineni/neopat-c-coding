
/*
Abinesh has two integers A and B, and he was to print all the terms of the series up to B-terms of the A-bonacci Numbers.



For example, when A = 2, the sequence becomes Fibonacci, when A = 3, the sequence becomes Tribonacci.



Input:

A = 3, B = 8

Output:

0, 0, 1, 1, 2, 4, 7, 13

We need to print the first B terms.

The first three terms are 0, 0, and 1.

Fourth term is 0 + 0 + 1 = 1

Fifth term is 0 + 1 + 1 = 2

Sixth terms is 1 + 1 + 2 = 4

Seventh term is 7 (1 + 2 + 4) and eighth

term is 13 (7 + 4 + 2).



Note

If A=3, the series start with 0,0,1

If A=5, the series starts with 0,0,0,0,1

If A=6, the series starts with 0,0,0,0,0,1

Input format :
The first line of input consists of an integer, representing the A.

The second line of input consists of an integer, representing the B.

Output format :
The output displays the sequence which was obtained with the help of A and B.

Code constraints :
0 < A < 100

0 < B < 100

(Only positive integers are allowed)

Sample test cases :
Input 1 :
3
8
Output 1 :
0 0 1 1 2 4 7 13 
Input 2 :
5
12
Output 2 :
0 0 0 0 1 1 2 4 8 16 31 61 

*/

//CODING
import java.util.Scanner;
class ABonacciNum
{
    static void findAbonacci(int A, int B)
    {
        int temp = 1;
        int count = 1,arrval=0,sum=0;
        int fib[] = new int[100];
        while(temp++ != A)
        {
            System.out.print("0"+" ");
            count++;
           
            fib[arrval++]=0;
        }
        fib[arrval]=1;
        System.out.print(fib[arrval]+" ");
        while(count++ != B)
        {
            int fixval = A;
            // System.out.println("arrval = "+fib[arrval]);
            
            int just = arrval;
            sum = 0;
            while(fixval-- != 0)
            {
                //  System.out.println("fixval = "+fixval);
                // System.out.println("fib[arr] = "+fib[arrval]);
                 sum = sum+fib[arrval--];
                
            }
                System.out.print(sum+" ");
                
            arrval = just+1;
                fib[arrval]=sum;
        // for(int i=0;i<arrval;i++)
        // System.out.print(fib[i]);
        }
        
       
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        // System.out.println(A);
        findAbonacci(A, B);
    }
}

