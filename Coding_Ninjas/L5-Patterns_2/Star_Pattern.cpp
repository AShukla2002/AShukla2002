/*Print the following pattern
Pattern for N = 4
    *
   ***
  *****
 *******
Input Format :
N (Total no. of rows)

Output Format :
Pattern in N lines

Constraints :
0 <= N <= 50

Sample Input 1 :
3
Sample Output 1 :
   *
  *** 
 *****
*/

//--Code--//

#include<iostream>
using namespace std;

int main(){
	int j,n;
    cin>>n;
    for(int i=1,k=0;i<=n;++i,k=0){
        for(j=1;j<=n-i;++j)
        	cout<<" ";
        while(k!=2*i-1){
            cout<<"*";
            ++k;
        }
        cout<<endl;
    }
	return 0;
}
