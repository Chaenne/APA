/*insertionSort 
@Chaenne

*/ 
#include <stdio.h>


void selectionSort(int v[], int n) {

      int i, j, min, aux;

      for (i = 0; i < n - 1; i++) {//enquanto o i não chegar no último elemento do vetor esse laço continuará se repetindo (while i<n do)

            min = i; // guarda o indice  do array na variavel min;

            for (j = i + 1; j < n; j++)// aponta sempre para o posterior de i

                  if (v[j] < v[min]) // compara os elementos do array e procura pelo menor 

                        min = j; // caso o elemento de indice j seja o menor ele é atribuido a min

            if (min != i) {// caso i não seja o minimo

                  aux = v[i];// a variavel auxiliar vai receber o valor de v[i] 

                  v[i] = v[min];// v[i](que é o menor INDICE) recebe o menor elemento

                  v[min] = aux;// colocamor o valor antigo do elemento v[i] nserá posto no v[min] para ser compardo com o proximo

            }

      }

}
int main(){
	int n;
	FILE* f = fopen("teste","r");
	fscanf(f,"%d", &n);  
	int arr[n];
	for(int i = 0; i < n; i++){
		fscanf(f,"%d", &arr[i]); 
	}
	SelectionSort(arr,n);
	//insertionSort(arr,n);
	for(int i = 0; i < n; i++){
		printf("%d\t",arr[i] );
	}

}

