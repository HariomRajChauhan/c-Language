#include<stdio.h>
#include<math.h>

int main(){
    float A,B,C,X,X1,X2,Root_Checking;

    float equation,equation1,equation2;

    
    printf("Enter A,B,C Corresponding Values :\n");
    scanf("%f %f %f",&A,&B,&C);



    Root_Checking = (pow(B,2))-(4*A*C);

    printf("Root_Checking Value: %.2f\n",Root_Checking);

    if (Root_Checking == 0)
    {
        X = (-B)/(2*A);
        printf("The Roots Are : X1 = %.2f, X2 = %.2f\n",X,X);

        equation = (A*pow(X,2)) + (B*X) + C;

        printf("The Values Of : Equation = %.2f\n",equation);
    }

    else if (Root_Checking > 0)
    {
        X1 = ((-B)+pow(Root_Checking,0.5))/(2*A);   // X1 = ((-B) + sqrt(Root_Checking));
        X2 = ((-B)-pow(Root_Checking,0.5))/(2*A);

        printf("The Roots Are : X1 = %.2f, X2 = %.2f\n",X1,X2);

        equation1 = (A*pow(X1,2)) + (B*X1) + C;  
        equation2 = (A*pow(X2,2)) + (B*X2) + C;

        printf("The Values Of : Equation1 = %.2f, Equation2 = %.2f\n",equation1,equation2);        
    }

    else
    {
        printf("The Roots Are Imaginarry\n");
        float Positive_Root_Checking,Minus_B_By_2A;
        Positive_Root_Checking = (-1*Root_Checking);
        Positive_Root_Checking = (pow(Positive_Root_Checking,0.5))/(2*A);
        Minus_B_By_2A = ((-B)/(2*A));
        printf("%f\n",Positive_Root_Checking);

        printf("The Imaginarry Roots Are : Xi1 = %.2f + %.3fi, Xi2 = %.2f - %.3fi\n",Minus_B_By_2A,Positive_Root_Checking,Minus_B_By_2A,Positive_Root_Checking);



    }

    






    return 0;
}