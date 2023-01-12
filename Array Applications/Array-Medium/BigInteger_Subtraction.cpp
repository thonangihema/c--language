/*Given two non-negative integers, num1 and num2 represented as string, return the 
difference of num1 and num2 as a string. You must not use any built-in BigInteger 
library or convert the inputs to integer directly.
Input: num1 = "456", num2 = "77"
Output: "379”*/
#include<bits/stdc++.h>
using namespace std;
string bigIntegerSubtraction(string num1, string num2) {
	int n1len =num1.length();
	int n2len =num2.length();
	string res = "";
	int borrow = 0,r;
	size_t n = max(n1len,n2len);
	if(n1len>n2len)
	{
		int precision = n -min(n, num2.size());
        num2= string(precision, '0').append(num2);
		cout<<num1<<" "<<num2<<"\n";
	}
	else if(n1len<n2len)
	{
	int precision = n -min(n, num1.size());
        num1= string(precision, '0').append(num1);	
		cout<<num1<<" "<<num2<<"\n";
	} 
	 for (int i = n-1; i >= 0; --i) {
		int value1 =num1[i]-'0';
		int value2 =num2[i]-'0';
		if (value1 + borrow < value2) {
			r = value1 + borrow + 10 - value2;
			borrow = -1;
			res = (char) (r + '0') + res;
		} else {
			r = value1 + borrow - value2;
			borrow = 0;
			res = (char) (r + '0') + res;
		}
	}
	return res;
}

int main() {
	string num, den;
	cin>>num>>den;
	cout<<bigIntegerSubtraction(num,den);
}
