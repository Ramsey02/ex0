
#include <stdio.h>
#include <stdbool>

#define two 2
#define NotInterger -1
// check crl+v 



int IsPowerOfTwo (int num);

int main()
{
    int size=0;
    printf("Enter size of input:");
    if(!scanf("%d",&size) || size<=0)
    {
         printf("Invalid size"); return 0;
    }

    printf("Enter numbers:\n");
    int i=0,cur_power, cur_num, sum_power=0;
    for(;i<size;i++)
    {
        if(!scanf("%d",&cur_num)) 
        {  printf("Invalid size"); return 0; }

        cur_power=IsPowerOfTwo(cur_num);
        if(cur_power!=NotInterger) // if its a power of 2 
        {
            printf("The number %d is a power of 2: %d=2^%d\n",cur_num,cur_num,cur_power);
            sum_power+=cur_power;
        }   
    }
    printf("Total exponent sum is %d",sum_power);
    return 0;
}

int IsPowerOfTwo (int num)
{
    int tmp=1,power=0;
    while(tmp<=num)
    {
        if(tmp==num) return power;
        tmp*=two; power++;
    }
    return NotInterger;
}