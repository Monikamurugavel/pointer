#include <stdio.h>
int main()
 {
  int arr[10][10];
  int i,j,n,sum=0;
  int * ptr = arr[i][j];
  float determinant=0;

     printf("Input the size of the cube matrix : ");
     scanf("%d", &n); 
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",ptr);
            }
        }  
	 printf("The matrix is :\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	     printf("% 4d",ptr);
	    printf("\n");
	 }
       printf("\n\n");
       for(n= 0; n < i; n++)
  	{
   		sum = sum +arr[n][n];
  	}
 
 	printf("\n The Sum of Diagonal Elements of a Matrix =  %d", sum );

 	return 0;
}

