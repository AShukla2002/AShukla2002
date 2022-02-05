/*Print the following pattern
Pattern for N = 4
    1
   23
  345
 4567

Input Format :
N (Total no. of rows)

Output Format :

Pattern in N lines

Sample Input :
5
Sample Output :
    1
   23
  345
 4567
56789
*/
//--Code--//

#include<iostream>
using namespace std;

int main(){
    int i,j,k,n;
  	cin>>n;
    for(i=1;i<=n;i++){
        k=i;
        for(j=i;j<n;j++)
            cout<<" ";
        for(j=1;j<=i;j++,k++){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}
