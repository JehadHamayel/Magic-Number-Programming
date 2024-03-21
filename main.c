#include <stdio.h>
void magic_numbers(int,int,int);//function prototype

int main()
{
    int left,right,digit;//Putting variables
    printf("Enter Left bound:");//Enter and read three integers
    scanf("%d",&left);
    printf("Enter Right bound:");
    scanf("%d",&right);
    if (left < right) //Check the inputs if it is effective
    {
        printf("Enter digit to exclude it:");
        scanf("%d",&digit);
        printf("Magic Numbers in Range Left=%d, Right=%d with exclude digit m=%d  are:\n",left,right,digit);
        magic_numbers(left,right,digit);//call function
    }
    else
        printf("Please enter the correct value\n");
    return 0;//Exit program
}
void magic_numbers(int left,int right,int digit) //function definition
{
    int num ;
    for (num=left ; num <= right ;  num++)//Checking all numbers within the required field
    {
        int part1=0,part2=0,n=num,sum=0,isMagic=1;//Define values and assign a value to them
        while(n/10!=0)//checking if it is Magic Number
        {
            part1=n%10;//Find the first part from the left and place it in sum
            sum = sum + part1;
            part2=n/10%10;//Find the second part from the number
            if(!(part2>sum)|| (part1==digit) || (part2==digit)) //Check part 1 and part 2 if it equals digit to exclude it
                {                                               //and Compare the number with the sum to his right
                    isMagic=0;//Discover that the number is not magic
                    break;
                }
                n=n/10;
        }
        if (isMagic == 1 && num > 9)//Check if it's Magic
            {
            printf("%d ",num);//Print the values of Magic Numbers
            }
    }
}
