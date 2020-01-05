#include<iostream>
using namespace std;
typedef int Item;
#define key(A) (A)
#define less(A,B) (key(A)<key(B))
#define exch(A,B) {Item t=A,A=B;B=t}
#define compexch(A,B) if(less(B,A)) exch(A,B)
int main() {
	cout << 111 << endl;
	cout << "hello world" << endl;
	cout << "23333" << endl;
	
}
