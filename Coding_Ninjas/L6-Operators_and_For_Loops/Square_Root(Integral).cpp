/*Given a number N, find its square root. You need to find and print only the integral part of square root of N.
For eg. if number given is 18, answer is 4.

Input format :
Integer N

Output Format :
Square root of N (integer part only)

Constraints :
0 <= N <= 10^8

Sample Input 1 :
10
Sample Output 1 :
3
*/

//--Code--//

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n,i=1;
    cin>>n;
    bool found=false;
    while(!found){
        if(i*i == n){
            cout<<i;
            found=true;
        }
        else if(i*i>n){
            cout<<i-1;
        	found=true;
        }
        i++;
    }
}
