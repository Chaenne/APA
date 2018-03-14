#include <stdio.h>

void SelectionSort(int a[], int n ){

 int i, j, min ,aux;

 	for (i=0;i<=n-1;i++){//percorre o array e guarda o lugar onde o minimo deve estar
 		min = i;
 		for (j = i+1; j<= n-1;j++){
 			if (a[j] < a[min]) //  acha o menor elemento e coloca no indice indicado por min
 			{ 
 				min = j;
 				
 			} 
 			if (a[i] != a[min]) //  faz o swap entre os valores 
 			{
 				aux = a[i];
 				a[i] = a[min];
 				a[min] = aux;
 			}
 			
 		}


 	}  

}
int main(){ 
	// lê o arquivo a ser ordenado 
	int n;
	FILE* f = fopen("teste","r");
	fscanf(f,"%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++){
		fscanf(f,"%d", &arr[i]);
	}
	SelectionSort(arr,n);
	//InsertionSort(arr,n);
	for(int i = 0; i < n; i++){
		printf("%d\n",arr[i] );
	}
}

