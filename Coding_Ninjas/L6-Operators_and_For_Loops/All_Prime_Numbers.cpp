/*Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
Print the prime numbers in different lines.

Input Format :
Integer N

Output Format :
Prime numbers in different lines

Constraints :
1 <= N <= 100

Sample Input 1:
9
Sample Output 1:
2
3
5
7
*/

//--Code--//

#include <iostream>
using namespace std;

int Prime(int n){
    int fl;
    for(int i=1;i<=n;i++){
        if(i==1||i==0)
            continue;
        fl=1;
        for(int j=2;j<=i/2;++j){
            if(i%j == 0){
                fl=0;
                break;
            }
        }
        if(fl == 1)
            cout<<i<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    Prime(n);
    return 0;
}
