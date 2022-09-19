#include<stdio.h>
void main(){   
    int random[40];
    int odd[40];
    int even[40];
    int values;
    int j=0;
    int k=0;
    int i;
    printf("PLEASE ENTER YOUR NUMBER OF ELEMENTS");
    scanf("%d",&values);
    printf("PLEASE ENTER ELEMENTS");
    for(i=0;i<values;i++){
        scanf("%d",&random[i]);
    }
    for(i=0;i<values;i++){
        if(random[i]%2==0){
            even[j]=random[i];
            j++;
            
        }
        else{
            odd[k]=random[i];
            k++;
        }
    }
    printf("\nThe Even elements are : \n");
    for(i=0;i<j;i++)
    {
	printf("%d ",even[i]);
    }

    printf("\nThe Odd elements are :\n");
    for(i=0;i<k;i++)
    {
	printf("%d ", odd[i]);
    }
    printf("\n\n");	
    return;
    
}