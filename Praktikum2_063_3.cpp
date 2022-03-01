#include<iostream>

using namespace std;

int main(int argc, char *argv[]){
	int matA[2] [2] = {4, 8, 2, 10};
	int i,j,k, jumlah = 0, hasil[10][10];
	
	cout<<"Matriks A\n";
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			cout<<matA[i][j]<<" ";
		}
		cout<<endl;
	}

	for(int i=0; i<2; i++){
		for(int j=0;j<2;j++){
			for (int k=0; k<2; k++){
			jumlah= matA[i][j] *5;
			}
			hasil[i][j] = jumlah;
			jumlah = 0;
		}
	}
	cout<<"Hasil perkalian matriks A dan eksponen 5 \n";
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			cout<<hasil[i][j] <<"\t";
		}
		cout<<"\n";
	}

	system("PAUSE");
	return 0;
}
