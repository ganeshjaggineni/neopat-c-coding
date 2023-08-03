/*
Write a program to compute the water tax using the ternary operator.



The water tax slab is as follows:

If units are <100, then the cost is Rs.1 per unit.
If 100>=units<=500, then the cost is Rs.1.5 per unit
If units are> 500, then the cost is Rs.3 per unit.
Input format :
The input consists of the volume of water consumed.

Output format :
The output is the water tax for the volume of water consumed.

Round off to 2 decimal places.



Refer to the sample output for formatting specifications.

Sample test cases :
Input 1 :
100
Output 1 :
150.00
Input 2 :
501
Output 2 :
1503.00
Input 3 :
31.74
Output 3 :
31.74
Whitelist
Set 1:
?
:
Blacklist
if
else

*/
//CODING

#include<stdio.h>
int main()
{
    float units,cost;
    float amt;
    scanf("%f",&units);
    //convert untis into abslute using fabsf(units);

    (units<100)?(cost=1):((units>=100&&units<=500)?(cost=1.5):(cost=3));
   amt=cost*units;
   
   printf("%.2f",amt);
    
    return 0;
}