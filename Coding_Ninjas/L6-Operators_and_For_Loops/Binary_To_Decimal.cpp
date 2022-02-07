/*Given a binary number as an integer N, convert it into decimal and print.

Input format :
An integer N in the Binary Format

Output format :
Corresponding Decimal number (as integer)

Constraints :
0 <= N <= 10^9

Sample Input 1 :
1100
Sample Output 1 :
12
*/

//--Code--//

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n,dec=0,ct=0;
    cin>>n;
    while(n!=0){
        int d = n%10;
        dec = dec+d*pow(2,ct);
        n=n/10;
        ct++;
    }
    cout<<dec;
    return 0;
}
