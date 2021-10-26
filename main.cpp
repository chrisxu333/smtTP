#include <iostream>
#include "SmartTP.h"

using namespace std;

void multiply(const int& i, const int& j){
	this_thread::sleep_for(chrono::milliseconds(2000));
	const int res = i * j;
	cout << i << "*" << j << " = " << res << endl;
}

int multiply_return(){
	int tmp = 3 * 4;
	cout << tmp << endl;
	return tmp;
}

int main(int argc, char* argv[]){
	SmartTP pool(2,4);

	pool.init();
	for(int i = 0; i < 10; ++i){
		pool.submit(multiply,i,2);
	}

	pool.close();
	return 0;	
}
