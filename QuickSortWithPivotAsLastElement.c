#include <stdio.h>
void quickSort(int a[],int l,int h){
    if(l<h){
        int pi=partition(a,l,h);
        quickSort(a,l,pi-1);
        quickSort(a,pi+1,h);
    }
}
int partition(int a[],int l,int h){
    int i=l-1,j,pivot=a[h];
    for(j=l;j<=h-1;j++){
        if(a[j]<=pivot){
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[h]);
    return i+1;
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
int main()
{
    int n,i,a[100];
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    quickSort(a,0,n-1);
    printArray(a,n);

    return 0;
}
