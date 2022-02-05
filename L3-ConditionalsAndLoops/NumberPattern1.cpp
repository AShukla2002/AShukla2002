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

Sample Input 1 :
3
Sample Output 1 :
1
23
345
*/
//--Code--//

#include<iostream>
using namespace std;

int main(){
    int i,j,k=0,n;
  	cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;++j)
            cout<<k+j;
        ++k;
        cout<<endl;
    }
    return 0;
}
