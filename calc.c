#include <stdio.h>

int main() {
float fst;
float scd;
char ndm;
printf("Small calculator\n");
printf("Type your first number\n");
scanf("%f", &fst);
printf("You First number is ");
printf("%f\n",fst);
printf("Type your second number\n");
scanf("%f", &scd);
printf("You Second number is %f\n", scd);
printf("Choose an operator: +-*/: ");
scanf("%s", &ndm);

switch(ndm){
case '+':
printf("%f\n", fst+scd);
break;
case '-':
printf("%f\n", fst-scd);
break;
case '*':
printf("%f\n", fst*scd);
break;
case '/':
printf("%f\n", fst/scd);
break;
}

return 0;
}
