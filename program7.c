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

//////////////////////////////////////////////////////////
//
//  Function Name: Addition
//  Input        : Integer,Integer
//  Output       : Integer
//  Description  : Performs addition
//  Date         : 04/10/2026
//  Author       : Vishal Shriram Bhusare
//
//////////////////////////////////////////////////////////
int Addition(int iNo1, int iNo2)
{
    int iAns = 0;
    iAns = iNo1 + iNo2;     //Business Logic
    return iAns;
}

//////////////////////////////////////////////////////////
//
//  Entry point of the application
//
//////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first number: \n");
    scanf("%d",&iValue1);
    
    printf("Enter second number: \n");
    scanf("%d",&iValue2);    

    iResult = Addition(iValue1,iValue2);

    printf("Addition is : %d\n",iResult);

    return 0;
}