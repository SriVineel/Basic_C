//DoublePyramid.c
#include<stdio.h>
void main()
{
    int n;

    printf("Enter the value of n:");
    scanf("%d",&n);

    for(int i = 1 ; i <= n ; i++){

        // Upper Traingle
        for(int j = 1 ; j <= (n-i) ; j++){
            printf("  ") ;
        }
        for(int j = i ; j<= (2*i-1) ; j++){
            printf(" %d",j);
        }
        for(int j = 2*(i-1) ; j>= i ; j-- ){
            printf(" %d",j);
        }

        printf("\n") ;

    }

    for(int i = n-1 ; i >=1 ; i--){
        
        int no_of_spaces = (n-i) ;
        while(no_of_spaces > 0){
            printf("  ") ;
            no_of_spaces-- ;
        }
        
        int start_value = i ;
        int no_of_times = i ;
        
        while(no_of_times >0){
            printf(" %d",start_value);
            start_value++ ;
            no_of_times-- ;
        }
        
        start_value = start_value-2 ;
        no_of_times = i-1;
        while(no_of_times >0){
            printf(" %d",start_value);
            start_value-- ;
            no_of_times-- ;
        }

        printf("\n") ;
   
    }

    return ;
}