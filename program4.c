/*
    step 1: Understand the problem statement
    step 2: Write the the algorithm
    step 3: Decide the programing language
    step 4: Write the program
    step 5: Test the program
*/
//////////////////////////////////////////////////////////
//
//  step 1: Understand the problem statement
//          user is going to enter any 2 integeres 
//          And we have to perform addition
//
//////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////
//  step 2: Write the the algorithm
/*
    Start
        Accept first number as No1
        Accept second number as No2
        create the variable as Ans to store the result
        perform the addition and store into Ans
        Display the result from Ans
    End
*/
//////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////
//
//  step 3: Decide the programing language
//          We select the c programming
//
//////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////
//
//   step 4: Write the program
//
//////////////////////////////////////////////////////////
#include<stdio.h>

int main()
{
    int iValue1, iValue2, iResult;

    printf("Enter first number: \n");
    scanf("%d",&iValue1);
    
    printf("Enter second number: \n");
    scanf("%d",&iValue2);    

    iResult = iValue1 + iValue2;  //Business Logic

    printf("%d\n",iResult);

    return 0;
}