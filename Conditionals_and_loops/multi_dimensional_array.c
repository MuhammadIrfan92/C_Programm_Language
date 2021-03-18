#include<stdio.h>

int main(){
	/*Multi-dimensional Arrays*/
	/*An array can have more than two dimensions. For example, 
	a[5][3][4] is an array that has 5 elements that each store 3 elements that each store 4 elements.*/
	/*a[5][3][4]. all the elements are zero. i.e {{ {0,0,0,0} {0,0,0,0} {0,0,0,0}, } 
													{ {0,0,0,0} {0,0,0,0} {0,0,0,0}, } 
													{ {0,0,0,0} {0,0,0,0} {0,0,0,0}, } 
													{ {0,0,0,0} {0,0,0,0} {0,0,0,0}, } 
													{ {0,0,0,0} {0,0,0,0} {0,0,0,0} }}*/
	
	int array[2][3] = {{1,2,3},
					   {4,5,6}};
					   
	
	int array_1[5][3][4] ={
						   {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}},
						   {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}},
						   {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}},
						   {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}},
						   {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}}};
						  
	
	
	int i,j;
	
	for (i=0;i<2;i++){
		for (j=0;j<3;j++){
			printf("%d ",array[i][j]);
			if(j==2){
				printf("\n");
			}
		}
	}
	
	int k,l,m;
	for (k=0;k<5;k++){
		for(l=0;l<3;l++){
			for(m=0;m<4;m++){
				printf("%d ",array_1[k][l][m]);
				
				}
			if(l==2){
				printf("\n");
			}
		}
	}
	
	
	
	
	
	return 0;
}
