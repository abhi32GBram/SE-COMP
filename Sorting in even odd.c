#include<stdio.h>
int main()
{
    int a[10]; //random array
    int e[10]; //even array
    int o[10]; //odd array
    int n; //array size declaring
    int i;//counter forall
    int j=0;//even counter
    int k=0;//odd counter
    printf("Please enter the size of array \n");
    scanf("%d",&n);
    printf("enter %d elements for random array  ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("your random array is \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            e[j]=a[i];
            j++;
        }
        else{
            o[k]=a[i];
            k++;
        }
    }
    printf("The Even Elements of the array are:  \n");
    for(i=0;i<j;i++)
    {
        printf("%d",e[i]);
    }
    printf("The odd elements of the array are:  \n");
    for(i=0;i<k;i++){
        printf("%d",o[i]);
    }

}

    
   

