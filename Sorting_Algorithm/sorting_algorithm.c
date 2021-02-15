#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void cabecalho(void);
FILE * num_file (char file[]);
void file_menu(void);
void sort_menu(void);
void swap(int *fst, int *snd);
void insertion(int array[],int len);
void selection(int array[],int len);
void bubble(int arr[], int len);
void mergeSort(int arr[], int l, int r);
void merge(int arr[], int l, int h, int r);
void quick(int arr[], int smaller, int bigger);
int partition (int arr[], int smaller, int bigger);
void heap(int arr[], int len);
int print(int arr[], int len);

void cabecalho(void) {
   printf("************************\n");
   printf("*       Welcome!       *\n");
   printf("************************\n");
   return;
}

int main(void) {
    
    FILE* fp;
    
    cabecalho();

    char file[12];
    int usr_file;
    int usr_sort;
    int len;

    file_menu();
    printf(">>> ");
    scanf("%d", &usr_file);

    switch (usr_file) {

        case 1:
            strcpy(file, "1000.txt");
            len = 999;
            break;

        case 2:
            strcpy(file, "5000.txt");
            len = 4999;
            break;

        case 3:
            strcpy(file, "10000.txt");
            len = 9999;
            break;

        case 4: 
            strcpy(file, "20000.txt");
            len = 19999;
            break;

        case 5:
            strcpy(file, "50000.txt");
            len = 49999;
            break;

        case 6:
            strcpy(file, "75000.txt");
            len = 74999;
            break;

        case 7:
            strcpy(file, "100000.txt");
            len = 99999;
            break;

        default:
            puts ("wrong answer");
            break;

    }

    fp = num_file(file);

    int arr[len];

    for (int i = 0; i < len+1; i++) {
        fscanf(fp, "%d", &arr[i]);
    }

    fclose(fp);

    int n = sizeof(arr)/sizeof(arr[0]);//quick

    sort_menu();
    printf(">>> ");
    scanf("%d", &usr_sort);
    clock_t inicio = clock();
    switch (usr_sort) {

        case 1:
            insertion(arr,len);
            len = len + 1;
            break;

        case 2:
            selection(arr, len);
            len = len + 2;          
            break;

        case 3:
            bubble(arr,len);
            break;
        
        case 4:
            quick(arr, 0, len - 1);
            break;
        
        case 5:
            mergeSort(arr, 0, len - 1);
            break;
        
        case 6:
            heap(arr,len);
            break;

        default:
            puts ("wrong answer");
            break;

    }
    clock_t final = clock();

    // return in order array
    print(arr, len);
	
    double tempo = (double)(final - inicio) / CLOCKS_PER_SEC;
	
    printf("time execute: %f ms", tempo);
    
    puts("\n");
 
    return 0;
}

void file_menu(void) {
    puts("choose the file to open:\n");
    puts("(1)   1000.txt\n(2)   5000.txt\n(3)  10000.txt\n(4)  20000.txt\n(5)  50000.txt\n(6)  75000.txt\n(7) 100000.txt");
}

void sort_menu(void) {

    puts("choose sort to run:\n");
    puts("(1) insertion\n(2) selection\n(3) bubble\n(4) merge\n(5) quick\n(6) heap");
}

void insertion(int array[],int len) {
    
    int j,i, tempo;

    for(i = 0; i < len;i++) {
        tempo = array[i + 1];
        for(j = i; j >= 0 && array[j] > tempo ;j--) {
            array[j + 1] = array[j];
        }
        array[j + 1] = tempo;
    }
}

void selection(int array[],int len) {

    int min;
 
    for(int i=0; i<len-1; i++) {
        min = array[i];
        for(int j=i+1; j<len; j++) {
            if (array[j]< array[min]) {
                min = j;
            }
        }
        swap(&array[i],&array[min]);
    }
}

void bubble(int arr[], int len) {

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void mergeSort(int arr[], int l, int r) {

    if (l < r) {  
        int h = l+(r-l)/2; 

        mergeSort(arr, l, h); 
        mergeSort(arr, h + 1, r); 
  
        merge(arr, l, h, r); 
    } 
}

void merge(int arr[], int l, int h, int r) {

    int i, j, k; 
    int x = h - l + 1, y = r - h; 
    int left[x], right[y]; 

    for (i = 0; i < x; i++) {
        left[i] = arr[l + i]; 
    }
    for (j = 0; j < y; j++) {
        right[j] = arr[h + 1 + j]; 
    }
    i = 0;
    j = 0;  
    k = l; 
    while (i < x && j < y) { 
        if (left[i] <= right[j]) { 
            arr[k] = left[i]; 
            i++; 
        }
        else{ 
            arr[k] = right[j]; 
            j++; 
        } 
        k++; 
    } 
    while (i < x) 
    { 
        arr[k] = left[i]; 
        i++; 
        k++; 
    } 
    while (j < y) 
    { 
        arr[k] = right[j]; 
        j++; 
        k++; 
    } 
} 

void quick(int arr[], int smaller, int bigger) { 
    
    if (smaller < bigger) { 
        
        int p = partition(arr, smaller, bigger); 
        
        quick(arr, smaller, p - 1); 
        quick(arr, p + 1, bigger); 
    } 
}

int partition (int arr[], int smaller, int bigger) { 
    int pivo = arr[bigger];
    int i = (smaller - 1);
  
    for (int j = smaller; j <= bigger- 1; j++) {  
        if (arr[j] <= pivo) { 
            i++; 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[bigger]); 
    return (i + 1); 
} 
  
FILE * num_file (char file[]) {

    FILE *fp;

    fp = fopen(file, "r");

    if (fp == NULL) {
        puts("Opening Error!");

    } 
    return fp;
}

void heap(int arr[], int len) { 
    
    int init, parent, child, x;
    
    init = len/2;
    
    while(1) {

        if (init > 0) {
            init--;
            x = arr[init];
        }
        else {
            
            len--;
            if (len <= 0) {  
                return;
            }
            x = arr[len];
            arr[len] = arr[0];
        }
        
        child = (init * 2) + 1;
        
        parent = init;
        
        while (child < len) {
            if ((child + 1 < len) && (arr[child+1] > arr[child])){
                child++;
            }
            if (arr[child] > x) {
                arr[parent] = arr[child];
                parent = child;
                child = parent * 2 + 1;
            } 
            else {
                break;
            }
        }
        arr[parent] = x;
    }
}

void swap(int *fst, int *snd) {
    
    int aux;
    aux = *fst;
    *fst = *snd;
    *snd = aux;
}

int print(int arr[], int len) {

    for (int i = 0; i < len; i++) {
        printf("%d\n",arr[i]);
    }
}