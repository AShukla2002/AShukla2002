/*Print the following pattern for the given number of rows.
Pattern for N = 5
E
DE
CDE
BCDE
ABCDE

Input format :
N (Total no. of rows)

Output format :
Pattern in N lines

Constraints
0 <= N <= 26

Sample Input 1:
8
Sample Output 1:
H
GH
FGH
EFGH
DEFGH
CDEFGH
BCDEFGH
ABCDEFGH
*/

//--Code--//

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=i;j<=n;j++)
            cout<<(char)('A'+j-1);
        cout<<endl;
    }
    return 0;
}*/
