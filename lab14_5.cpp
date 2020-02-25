#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() using pointer here 
void shuffle(int *x,int *y, int *z, int *k){

	int a[4]={*x,*y,*z,*k};
	int q,w,e,r;

	q = rand()%4;
	*x = a[q];
	while(true){
		w = rand()%4;
		if(w!=q){
			*y = a[w];
			break;
		}
		
	}
	while(true){
		e = rand()%4;
		if(e!=q && e!=w){
			*z = a[e];
			break;
		}
		
	}
	while(true){
		r = rand()%4;
		if(r!=q && r!=w && r!=e){
			*k = a[r];
			break;
		}
		
	}






}