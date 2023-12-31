#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int a;
	cin >> a;
	for (int i=2; i<a; i++)
	for (int j=2; j*j<=i; j++)
	{
	 if (i % j == 0)
	 break;
	 else if (j+1 > sqrt (i)) {
	 	cout << i << "  ";
	 }
	}
}
