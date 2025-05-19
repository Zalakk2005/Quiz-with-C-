#include<stdio.h>

int main()
{
    int score=0;
    int ans;

    printf("\nQUIZ\n");

    printf("\n****Choose correct option from the following****\n");

    printf("\n1. What is the Capital City of Gujarat?\n");
    printf("\n1)Gandhinagar\n2)Ahmedabad\n3)Rajkot\n4)Anand\n");
    printf("\nEnter your correct answer from the options given above:");
    scanf("%d",&ans);
    if(ans==1 ) score++;

    printf("\n2. What is an object in C++?\n");
    printf("\n1)Function of class\n2)Datatype of class\n3)Instance of class\n4)None of the above\n");
    printf("\nEnter your correct answer from the options given above:");
    scanf("%d",&ans);
    if(ans==3) score++;
    

    printf("\n3. Which of the above is the logical AND operator?\n");
    printf("\n1)!\n2)&\n3)&&\n4)||\n");
    printf("\nEnter your correct answer from the options given above:");
    scanf("%d",&ans);
    if(ans==3 ) score++;
   

    printf("\n4. What are the total number of types of constructors in C++?\n");
    printf("\n1)2\n2)1\n3)3\n4)4\n");
    printf("\nEnter your correct answer from the options given above:");
    scanf("%d",&ans);
    if(ans==3 ) score++;
    

    printf("\n5. Which of the following is the scope resolution operator?\n");
    printf("\n1)::\n2);\n3):\n4)?\n");
    printf("\nEnter your correct answer from the options given above:");
    scanf("%d",&ans);
    if(ans==1 ) score++;
    

    printf("\n6. Which datatype is used to store the integer values?\n");
    printf("\n1)char\n2)float\n3)long\n4)int\n");
    printf("\nEnter your correct answer from the options given above:");
    scanf("%d",&ans);
    if(ans==4 ) score++;
    
   printf("\nCONGRULATIONS!!!");
    printf("\nYour score is : %d\n",score);
   return 0;
}    


