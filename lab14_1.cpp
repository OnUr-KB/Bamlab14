#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	for(int x = 1;x < N; x++){
		for(int y = x; y > 0; y--){
			if(d[y] > d[y-1]){
				T temp = d[y];
				d[y] = d[y-1];
				d[y-1] = temp; 
			}
		}
		cout << "Pass " << x <<":";
		for(int z = 0; z < 10; z++) cout << d[z] << " ";
		cout << "\n";
	}

}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
