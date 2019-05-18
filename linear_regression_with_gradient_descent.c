#include <stdio.h>
void main()
{
    int x[100],y[100],m,i,index;
    float b0,b1;
    float learning_rate;
    float hypothesis,error;

    printf("\nLinear regression with gradient descent\n");
    printf("\nEnter how many training examples you want to enter :\n\n");
    scanf("%d",&m);
    printf("\nEnter the X Y values (together and sperated by space)\n");
    printf("\n  X Y\n");
    for(i=0;i<m;i++)
    {
        printf("%d ",i);
        scanf("%d %d",&x[i],&y[i]);
    }

    printf("\n\nEnter the weights b0(bias) and b1 values (together and sperated by space)\n");
    printf("\nb0 b1\n\n");
    scanf("%f %f",&b0,&b1);
    printf("\nEnter the Learning rate (alpha):\n\n");
    scanf("%f",&learning_rate);
    printf("\n   X Y (inputs : outpts)\n");
    for(i=0;i<m;i++)
    {
        printf("\n%d ",i);
        printf(" %d %d",x[i],y[i]);
    }
    printf("\n\nb0 = %f ; b1 = %f ; alpha = %.2f",b0,b1,learning_rate);
    printf("\n\nIteration         Hypothesis         error          b0       b1\n\n");
    for(i=0;i<1000;i++)
    {

        index=i%m;
        hypothesis=b0+b1*x[index];
        error=hypothesis-y[index];
        b0=b0-learning_rate*error;
        b1=b1-learning_rate*error*x[index];
        printf("  %d                %f        %f     %f    %f\n",i,hypothesis,error,b0,b1);

    }


}