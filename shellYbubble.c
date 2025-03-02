#include<stdio.h>
#include <stdlib.h>
#include <time.h>



void shellSort(int [], int );
void BubbleSort (int [], int );
void imprimeArreglo (int, int []);

int main (){

}

void shellSort(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
        printf("Después de gap = %d: \n", gap);
        imprimeArreglo(n, arr);
    }
}

void BubbleSort (int a[], int n){ /*CIclos anidados*/
    int i,j,t;
    for (j=0; j<n-1; j++)
        for (i=n-1; i>j; i--)
          if (a[i]<=a[i-1]){
                t=a[i];
                a[i]=a[i-1];
                a[i-1]=t;
        }
}

void imprimeArreglo (int n, int arr []){
        for (int i=0; i<n; i++){
        printf("%d\t",arr [i]);
    }
    printf("\n");
}