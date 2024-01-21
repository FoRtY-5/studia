#include <stdio.h>

int main(int argc, char* argv[]){
    
    while (1) {
        int operationType;
        printf("Choose operation type (only first four are valid):\n\t1.AND\n\t2.OR\n\t3.NAND\n\t4.NOR\n\t5.XOR\n\t6.NOT\n");
        scanf("%d", &operationType);

        int firstBit, secondBit;

        printf("Provide first bit\n");
        scanf("%d", &firstBit);
        printf("Provide second bit\n");
        scanf("%d", &secondBit);
        int firstResult;
        if (operationType == 1) //AND
        {
            firstResult = firstBit && secondBit;
        } else if (operationType == 2) //OR
        {
            firstResult = firstBit || secondBit;
        } else if (operationType == 3) //NAND
        {
            firstResult = !(firstBit * secondBit);
        } else if (operationType == 4) //NOR
        {
            firstResult = !(firstBit || secondBit);
        } else {
            printf("Wrong operation type!\n");
            return -1;
        }
        printf("Result: %d\n", firstResult);
        

        printf("Choose operation type (only first four are valid):\n\t1.AND\n\t2.OR\n\t3.NAND\n\t4.NOR\n\t5.XOR\n\t6.NOT\n");
        scanf("%d", &operationType);

        int thirdBit;
        printf("Provide third bit\n");
        scanf("%d", &thirdBit);
        int secondResult;
        if (operationType == 1) //AND
        {
            secondResult = firstResult && thirdBit;
        } else if (operationType == 2) //OR
        {
            secondResult = firstResult || thirdBit;
        } else if (operationType == 3) //NAND
        {
            secondResult = !(firstResult * thirdBit);
        } else if (operationType == 4) //NOR
        {
            secondResult = !(firstResult || thirdBit);
        } else {
            printf("Wrong operation type!\n");
            return -1;
        }
        printf("Result: %d\n", secondResult);
    }

    return 0;
}