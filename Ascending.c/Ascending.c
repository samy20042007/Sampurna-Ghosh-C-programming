 Question: Write a C program to calculate the sum of numbers from 1 to n using a while loop. 
	 #include <stdio.h> 
	 int main()
	 {    
	 int n, i, sum = 0;     printf("Enter n : ");  
	 scanf("%d", &n);   
	 i = 1;   
	 while (i <= n) 
	 {        
		 sum += i;         ++i;  
	 }      
	 printf("Sum = %d\n", sum);      return 0;
 }
