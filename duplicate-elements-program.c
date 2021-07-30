#include <stdio.h>
void main()
{
    int i,a[100],n,j;
    printf("Enter the size of array ");
    scanf("%d",&n);
    printf("Enter the array elements ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Duplicate elements are ");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                printf("%d ", a[j]);
            }
        }
    }
    j=0;
    for(i=0;i<n;i++){
        int l=1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                l++;
            }
        }
        if(l>1)
          printf("\nThe number %d is repeated %d times",a[i],l);
    }
}