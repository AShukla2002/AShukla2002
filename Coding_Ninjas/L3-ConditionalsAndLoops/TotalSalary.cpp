/*Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
  totalSalary = basic + hra + da + allow – pf
  where :
hra   = 20% of basic
da    = 50% of basic
allow = 1700 if grade = ‘A’
allow = 1500 if grade = ‘B’
allow = 1300 if grade = ‘C' or any other character
pf    = 11% of basic.
Round off the total salary and then print the integral part only.

Note: Try finding out a function on the internet to do so

Input format :
Basic salary & Grade (separated by space)

Output Format :
Total Salary

Constraints :
0 <= Basic Salary <= 7,500,000

Sample Input 1 :
10000 A
Sample Output 1 :
17600
*/

//--Code--//

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	  double hra,da,pf,sal;
    int basic,allow;
    char grade;
    cin>>basic>>grade;
    
    hra = 0.20*basic;
    da = 0.50*basic;
    pf = 0.11*basic;
    if(grade == 'A'){
        allow = 1700;
    }
    else if(grade == 'B'){
        allow = 1500;
    }
    else{
        allow = 1300;
    }
    sal = basic+hra+da+allow-pf;
    cout<<(long)(round(sal));
}
