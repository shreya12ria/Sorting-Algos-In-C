#include <stdio.h>
void insertionSort(int a[],int n){
    if(n<=1)
        return;
    insertionSort(a,n-1);
    int last=a[n-1];
    int j=n-2;
    while(j>=0 && a[j]>last){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=last;
}
void printArray(int a[],int n){
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
int main()
{
    int a[100],n,i;
    printf("Enter size of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    insertionSort(a,n);
    printArray(a,n);

    return 0;
}
