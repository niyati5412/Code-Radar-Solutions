#include<stdio.h>
int main(){
    int a,b;
    char op;
    scanf("%d %d %c",&a,&b,&op);
    switch(op){
        case '+':
        printf("%d\n",a+b);
        break;
        case '-':
        printf("%d\n",a-b);
        break;
        case '*':
        printf("%d\n",a*b);
        break;
        case '/':
        if(b==0)
        printf("Error\n");
        else 
        printf("%d\n",a/b);
        break;
        default:
        printf("Error\n");
    }
    return 0;
}

