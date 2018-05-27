#include <stdio.h>
void quickSort(int a[],int l,int h){
    if(l<h){
        int pi=partition(a,l,h);
        if(l<pi-1)
            quickSort(a,l,pi-1);
        if(pi<h)
            quickSort(a,pi,h);
    }
}
int partition(int a[],int l,int h){
    
    int i=l,j=h,pivot=a[(l+h)/2],tmp;
    while(i<=j){
        while(a[i]<pivot)
            i++;
        while(a[j]>pivot)
            j--;
        if(i<=j){
            tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
            i++;
            j--;
        }
    }
    return i;
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

