#include <stdio.h>
#include <stdlib.h>

void fillRandom(int* arr, int len, int border) { 
    for (int i = 0; i < len; ++i) {
        *(arr + i) = rand() % border;
    }
}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
/*
char** initArray(char** array, const int row, const int col) {
    array = (char**) calloc(sizeof(char*), row);
    for (int i = 0; i < row; ++i) {
        *(array + i) = (char*) calloc(sizeof(char), col);
    }
    return array;
}*/
void printArray(char** array, const int row, const int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("[%c]", *((*(array + i)) + j));
        }
        printf("\n");
    }
}

void BubleSortDouble(int* arr, int len) {
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len - 1; ++j) {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}

int main(const int argc, const char** argv) {
    const int SIZE = 100;
    int* arr[SIZE];
    fillRandom(arr, SIZE, 100);
    printArray(arr, SIZE, 3);
    // BubleSortDouble(arr, SIZE);
    // printArray(arr, SIZE, 3);

    return 0;
}









/*
int main(const int argc, const char** argv) {

int i,j;
const int n = 5;
const int m = 5;
int arr[n][m];

for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
        arr[i][j] = rand() % 25;
        printf ("%d\t", arr[i][j]);
    }
}

for (int k = 0; k < n; k++) {
    for (int l = 0; l < m; l++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i + 1 == n && j + 1 == m) {
                    continue;
                }
                else {
                    if (j + 1 == n && arr[i][j] > arr[i + 1][0]) {
                        int t = arr[i][j];
                        arr[i][j] = arr[i + 1][0];
                        arr[i + 1][0] = t;
                    }
                    else {
                        if (arr[i][j] > arr[i][j + 1]) {
                            int p = arr[i][j];
                            arr[i][j] = arr[i][j + 1];
                            arr[i][j + 1] = p;
                        }
                    }
                }
            }
        }
    }
}
printf("\n");
for (i = 0; i < n; ++i){
    for (j = 0; j < m; ++j) {
        printf("%d\t", arr[i][j]);
    }
}

double inputs[11], check = 400, result;
  int y;
 
  printf ("\nPlease enter 11 numbers :");
 
  for (y = 0; y < 11; y++)
    {
      scanf ("%lf", &inputs[y]);
    }
 
  printf ("\nEvaluating f(x) = |x|^0.5 + 5x^3 for the given inputs :");
 
  for (y = 10; y >= 0; y--)
    {
      result = sqrt (fabs (inputs[y])) + 5 * pow (inputs[y], 3);
 
      printf ("\nf(%lf) = ");
 
      if (result > check)
        {
          printf ("Overflow!");
        }
 
      else
        {
          printf ("%lf", result);
        }
    }

    return 0;
}*/