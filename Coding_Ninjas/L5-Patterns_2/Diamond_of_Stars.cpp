/*Print the following pattern for the given number of rows.
Note: N is always odd.
Pattern for N = 5
  *
 ***
*****
 ***
  *

Input format :
N (Total no. of rows and can only be odd)

Output format :
Pattern in N lines

Constraints :
1 <= N <= 49

Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
*/

//--Code--//

#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n;
  //For upper triangle
    for(int i=1;i<=n;i=i+2){
        for(int j=1;j<=(n-i)/2;j++)
            cout<<" ";
        for(k=1;k<=i;k++)
            cout<<"*";
        cout<<endl;
    }
  //For lower triangle
    for(int i=(n/2+n/2-1);i>0;i=i-2){
        for(int j=1;j<=(n-i)/2;j++)
            cout<<" ";
        for(k=1;k<=i;k++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}
