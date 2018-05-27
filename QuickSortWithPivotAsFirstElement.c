#include <stdio.h>
void quickSort(int a[],int l,int h){
    if(l<h){
        int pi=partition(a,l,h);
        quickSort(a,l,pi-1);
        quickSort(a,pi+1,h);
    }
}
int partition(int a[],int l,int h){
    int i=l,j,pivot=a[l];
    for(j=l+1;j<=h;j++){
        if(a[j]<=pivot){
            swap(&a[i],&a[j]);
            i++;
            pivot=a[i];
        }
    }
    return i;
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
