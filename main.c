#include <stdio.h>
// TODO create header file
// create a .h header file to contain our functions
// labels: optimization
// assignees: austinblackmon, theautomelon

//functions
int adder(int x, int y){
    return x+y;
}

int main(){
    int num1;
    int num2;
    int sum;

    printf("Enter a number:");
    scanf("%d", &num1);

    printf("Enter another number:");
    scanf("%d", &num2);

    sum = adder(num1,num2);

    printf("The sum of your numbers is %d", sum);

    return 0;
}//end main