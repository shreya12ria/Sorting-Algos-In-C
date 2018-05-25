
#include<bits/stdc++.h>
using namespace std;
void bubblesort(int a[],int n){
    int i;
    if(n==1)
        return;
    for(i=0;i<n-1;i++){
        if(a[i]>a[i+1])
            swap(a[i],a[i+1]);
    bubblesort(a,n-1);
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
int main()
{
    int a[100];int i,n;
    printf("enter size of array\n");
    scanf("%d",&n);
    printf("Enter elements into array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    bubblesort(a,n);
    printArray(a,n);
    return 0;
}
