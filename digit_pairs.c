/*
Digit pairs



Given N three-digit numbers, your task is to find the bit score of all N numbers and then print the number of pairs possible based on these calculated bit scores.

1.Rule for calculating the bit score of a three-digit number:

From the 3-digit number, extract the largest digit and multiply by 11, then extract the smallest digit and multiply by 7, then add both the results for get bit pairs.

Note: The bit score should be two digits, if the above results in a three-digit bit score, simply ignore the most significant digit.



Consider the following examples:

Say, the number is 286

The largest digit is 8 and the smallest digit is 2

So, 8*11+2*7 = 102. So, ignore the most significant bit, so bit score = 02.

Say, Number is 123

The largest digit is 3 and the smallest digit is 1.

So, 3*11+7*1 = 40, so the bit score is 40.

2. Rules for making pairs from the above-calculated bit score

Condition for making pairs are

Both bit scores should be in either the odd or even position to be eligible to form a pair.

- Pairs can be only made if the most significant digits are the same and at most two pairs can be made for a given significant digit



Example

Input

8

234 567 321 345 123 110 767 111

Output

3

Explanation

After getting the most and least significant digits of the numbers and applying the formula given in Rule 1 we get the bit scores of the numbers as

 58 12 40 76 40 11 19 18

No. of pair possible are 3

40 appears twice, at odd indices 3 and 5, respectively. Hence, this is one pair.

12, 11, and 18 are at even indices. Hence, two pairs are possible from these three-bit scores.

Hence, the total number of pairs possible is 3.

Input format :
The first line contains an integer N, denoting the count of numbers.

Second-line contains N 3-digit integers delimited by space

Output format :
The one integer value denoting the number of bit pairs



Refer to the sample input and output for format specifications.

Code constraints :
N<=500

Sample test cases :
Input 1 :
8
234 567 321 345 123 110 767 111
Output 1 :
3
*/
//CODING
#include<stdio.h>
int main()
{
    int n;
    int num[100],bitpairarr[100],firstdigit[100];
    int numb;
    int pair1,paircount=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&num[i]);
    } 
    for(int j=1;j<=n;j++)
    {
        numb=num[j];
    int rem,lar=0,small=9999,bitpairs=0,temp,bit2p,len=0;
        
        while(numb>0)
        {
            rem = numb%10;
            if(rem>lar)
                lar=rem;
            if(rem<small)
                small=rem;
            numb=numb/10;
        }
        bitpairs=lar*11+small*7;
        temp=bitpairs;
        bit2p=bitpairs;
        len=0;
        // printf("hai");
        while(temp>0)
        {
            len++;
            temp=temp/10;
        }
        // printf("\n%d",len);
        if(len>=3)
        {
         bitpairs = bitpairs%100;  
        }
        bitpairarr[j]=bitpairs;
        firstdigit[j]=bitpairs/10;
        
    }
    
    // for(int i=1;i<=n;i++)
    // {
    //     printf("%d ",bitpairarr[i]);
    // } 
    // for(int i=1;i<=n;i++)
    // {
    //     printf("%d ",firstdigit[i]);
    // }
    for(int i=1;i<=n;i++)
    {
        pair1=firstdigit[i];
        for(int j=i+1;j<=n;j++)
        {
            if(pair1==firstdigit[j] && firstdigit[j]!=0 &&(i%2==j%2))
            {
                paircount++;
                // printf("\npair1=%d and firstdigit=%d and paircount=%d and ipos=%d and jpos=%d",pair1,firstdigit[j],paircount,i,j);
                firstdigit[j]=0;
            }
        }
    }
    printf("%d",paircount);
    
    return 0;
}