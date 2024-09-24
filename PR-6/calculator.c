#include <stdio.h>

float add(float p, float s) {
    return a + b;
}

              float sub(float p, float s) {
    return a - b;
}

             float mul(float p, float s) {
    return a * b;
}

                float div(float p, float s) {
    return a / b;
}

int mod(int p, int s) {
    return p % s;
}






int main() {
    int i;
    float p, s, result;

    do {
        printf("Press 1 for + : \n");
        printf("Press 2 for - : \n");
        printf("Press 3 for * : \n");
        printf("Press 4 for / : \n");
        printf("Press 5 for %% : \n");
        printf("Press 0 for exit : \n");
        printf("----------------------\n");
        scanf("%d", &i);

        if (i != 0) {
            printf("Enter first number: ");
        scanf("%f", &p);

                            printf("Enter second number: ");
            scanf("%f", &s);

            switch (i) {
                case 1:
                    result = add(p, s);
             printf("%.0f + %.0f = %.0f\n", a, b, result);
                    break;
                                                case 2:
                    result = sub(p, s);
               printf("%.0f - %.0f = %.0f\n", a, b, result);
                          break;
                     case 3:
                    result = mul(p, s);
                    printf("%.0f * %.0f = %.0f\n", a, b, result);
                    break;
           case 4:
                    if (b != 0) {
              result = div(p, s;
                        printf("%.2f / %.2f = %.2f\n", p, s, result);
    } else {
                                             printf("Error: Division by zero is not allowed.\n");
                    
					
					
					
					}
                    break;
                case 5:
                                         result = mod(p,s);
					 printf("%d %% %d = %d\n", p, s, result);
                                 break;
                default:
                	
                	
                	
                	
                	
                	
                    printf("Error: Invalid operator.\n");
            }
        }
    } while (i != 0);

    return 0;
}

