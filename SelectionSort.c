#include <stdio.h>
void selectionsort(int a[],int n){
    int i,j,min_idx;
    for(i=0;i<n-1;i++){
        min_idx=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min_idx])
                min_idx=j;
        }
        swap(&a[min_idx],&a[i]);
    }
}
void swap(int *x,int *y){
    int tmp=*x;
    *x=*y;
    *y=tmp;
}
void printArray(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
void inputArray(int a[],int n){
    int i;
    printf("Enter array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
int main()
{
    int a[100],n;
    printf("Enter size of size of array\n");
    scanf("%d",&n);
    inputArray(a,n);
    selectionsort(a,n);
    printArray(a,n);
    

    return 0;
}
