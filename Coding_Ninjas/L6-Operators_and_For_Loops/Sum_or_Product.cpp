/*Write a program that asks the user for a number N and a choice C. And then give them the possibility to choose between computing the sum and computing the product of all integers in the range 1 to N (both inclusive).
If C is equal to -
1, then print the sum
2, then print the product
Any other number, then print '-1' (without the quotes)

Input format :
Line 1 : Integer N
Line 2 : Choice C

Output Format :
Sum or product according to user's choice

Constraints :
1 <= N <= 12

Sample Input 1 :
10
1
Sample Output 1 :
55
*/

//--Code--//

#include<iostream>
using namespace std;

int fact(int n){
    if(n==1)
        return 1;
    return n*fact(n-1);
}

int main() {
    int n,c;
    cin>>n;
    cin>>c;
    if(c == 1)
        cout<<(n*(n+1)/2);
    else if(c==2)
        cout<<fact(n);
    else
        cout<<-1;
}
