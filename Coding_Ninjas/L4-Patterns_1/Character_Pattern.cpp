/*Print the following pattern for the given N number of rows.
Pattern for N = 4
A
BC
CDE
DEFG

Input format :
Integer N (Total no. of rows)

Output format :
Pattern in N lines

Constraints
0 <= N <= 13

Sample Input 1:
5
Sample Output 1:
A
BC
CDE
DEFG
EFGHI
*/

//--Code--//

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<n+1;i++){
        int k=i;
        for(int j=1;j<i+1;j++,k++)
            cout<<(char)('A'+k-1);
        cout<<endl;
    }
    return 0;
}
