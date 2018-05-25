#include <stdio.h>
void insertionsort(int a[],int n){
    int i,j,key;
    for(i=1;i<n;i++){
        key=a[i];//storing the compaing value
        j=i-1;//running loop till i-1
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];//shifting elements by one position
            j=j-1;
    }
    a[j+1]=key;//putting the comparing value in required position
}
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
    printf("Enter the elements pf array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    insertionsort(a,n);
    printArray(a,n);

    return 0;
}
