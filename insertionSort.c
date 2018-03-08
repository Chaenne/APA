#include <stdio.h>


void insertionSort(int v[], int n) {

      int i, j, min, aux;

      for (i = 0; i < n - 1; i++) {

            min = i;

            for (j = i + 1; j < n; j++)

                  if (v[j] < v[min])

                        min = j;

            if (min != i) {

                  aux = v[i];

                  v[i] = v[min];

                  v[min] = aux;

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
	//SelectionSort(arr,n);
	insertionSort(arr,n);
	for(int i = 0; i < n; i++){
		printf("%d\n",arr[i] );
	}

}

