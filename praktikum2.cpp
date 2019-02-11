#include <iostream>

using namespace std;
int main (){
	int nilai, hasil;

	cout << "masukan nilai : " ;
	cin >> nilai;
	hasil=nilai%2;
	if (hasil==0)
		cout << "genap";
	else
		cout << "ganjil";

return 0;
}
