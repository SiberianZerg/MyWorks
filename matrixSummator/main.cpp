#include <iostream>

using namespace std;

int main(){
	cout << "===================================================" << endl;
	int m, n;
	cout << "Введите размерность для двух матриц:" << endl;
	cin >> m >> n;
	cout << "===================================================" << endl;
	
	int **A = new int* [m];
	for(int i = 0; i < m; i++){
		*(A + i) = new int[n];
	}
	
	int **B = new int* [m];
	for(int i = 0; i < m; i++){
		*(B + i) = new int[n];
	}
	
	int **C = new int* [m];
	for(int i = 0; i < m; i++){
		*(C + i) = new int [n];
	}
	
	cout << "Заполните первую матрицу(M x N):" << endl;
	for(int i = 0; i < m; i++){
		for(int j = 0; j< n; j++){
			cin >> A[i][j];
		}
	}
	cout << "===================================================" << endl;
	
	cout << "Заполните вторую матрицу(M x N):" << endl;
	for(int i = 0; i < m; i++){
		for(int j = 0; j< n; j++){
			cin >> B[i][j];
		}
	}
	cout << "===================================================" << endl;
	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	
	
	cout << "Сумма двух матриц:" << endl;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout.width(4);
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
	cout << "===================================================" << endl;
	
	for(int i = 0; i < m; i++){
		delete[] *(C + i);
	}
	delete[] C;
	
	for(int i = 0; i < m; i++){
		delete[] *(B + i);
	}
	delete[] B;
	
	for(int i = 0; i < m; i++){
		delete[] *(A + i);
	}
	delete[] A;
	
	
}
