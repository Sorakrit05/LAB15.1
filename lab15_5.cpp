#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line

void shuffle(int *a, int *b, int *c, int *d) {
    int A[] = {*a, *b, *c, *d};
    for (int i = 0; i < 4; ++i) {
        int randomA = rand() % 4;
        swap(A[i], A[randomA]);
    }
    *a = A[0];
    *b = A[1];
    *c = A[2];
    *d = A[3];
} 
