/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int marks;
    
    char grade;
    
    printf("enter your marks\n");
    
    scanf("%d", &marks);
    
    if(marks>=80){
       grade='A+';
       printf("congrs hala tou A+ paisos\n", marks);
     
        
    }
    
   else if (marks>=40){
        
        grade='kono rokom pass';
        
        printf("your grade is 'kono rokom pass'\n");
      
        
    }
    
    else if (marks>=39){
        grade='F';
        printf("toi fail marsos\n");
  
    }
    
    
    
    return 0;
}



