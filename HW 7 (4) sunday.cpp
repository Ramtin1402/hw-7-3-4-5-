#include<iostream>

using namespace std;

int main(){
	int a,b, result;
	cin >> a >> b;
	
	if (b>a){
		int c = b;
		b = a;
		a = c;
	}
	
	for (int i=1; i <= b; i++){
		if (a % i == 0 && b % i ==0){
			result = i;
		}
		
		
	}
	cout << result;
}

