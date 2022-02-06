/*Print the following pattern for the given number of rows.
Pattern for N = 4
     1
    232
   34543
  4567654
Input format :
Integer N (Total no. of rows)

Output format :
Pattern in N lines

Constraints :
0 <= N <= 50

Sample Input 1:
5
Sample Output 1:
       1
      232
     34543
    4567654
   567898765
*/

//--Code--//

#include <iostream>
using namespace std;

int main() {
    int n,ct=0,ct1=0,k=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
            ct++;
        }
        while(k!=2*i-1){
            if(ct<=n-1){
                cout<<i+k;
                ct++;
            }
            else{
                ct1++;
                cout<<i+k-2*ct1;
            }
            k++;
        }
        ct1=ct=k=0;
        cout<<endl;
    }
    return 0;
}
