# include<stdio.h>
int main()
{   int a[5]={1,2,3,4,5};              //SELECTION SORT
    int n=sizeof(a)/sizeof(int);
    int temp;
    for(int i=0;i<n-1;i++){
         int min=i;
         for(int j=i+1;j<n;j++){
              if(a[j]<a[min]){
                   min=j;
              }
         }
         if(min!=0){
              temp=a[min];
              a[min]=a[i];
              a[i]=temp;
         }
    }
    for(int i=0;i<5;i++){
         printf("%d ",a[i]);
    }
    

    return 0;
}
