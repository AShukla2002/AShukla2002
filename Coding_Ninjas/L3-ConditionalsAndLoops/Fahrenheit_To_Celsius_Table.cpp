/*Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.

Input Format 
3 integers - S, E and W respectively 

Output Format 
Fahrenheit to Celsius conversion table. One line for every Fahrenheit and corresponding Celsius value. On Fahrenheit value and its corresponding Celsius value should be separate by tab ("\t")

Constraints 
0 <= S <= 80
S <= E <=  900
0 <= W <= 40 

Sample Input 1
0 
100 
20
Sample Output 1
0   -17
20  -6
40  4
60  15
80  26
100 37
*/  
//--Code--//

#include<iostream>
using namespace std;
int main(){
    int s,e,w;
    cin>>s>>e>>w;
    while(s<=e){
        int c = ((s-32)/1.8);
        cout<<s<<" "<<c<<endl;
        s = s+w;
    }
    return 0;
}
