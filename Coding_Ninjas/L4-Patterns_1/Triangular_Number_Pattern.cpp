/*Print the following pattern for the given N number of rows.
Pattern for N = 4
1
22
333
4444

Input format :
Integer N (Total no. of rows)

Output format :
Pattern in N lines

Constraints
0 <= N <= 50

Sample Input 1:
5
Sample Output 1:
1
22
333
4444
55555
*/,

//--Code--//

#include<iostream>
using namespace std;
int main(){
	int n;
    cin>>n;
    for(int i=0;i<n+1;i++){
        for(int j=0;j<i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}
