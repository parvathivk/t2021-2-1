    #include <stdio.h>  
    int main()  
    {  
         int a,b;
        char type_of_operation;     
        float res;  
        printf (" Choose an operator(+, -, *, /) to perform the operation in C Calculator \n ");  
        scanf ("%c", &type_of_operation);
        if (type_of_operation == '/' )  
        {  
            printf ("Division");  
        }  
        else if (type_of_operation == '*')  
        {  
            printf ("Multiplication");  
         }  
           
        else if (type_of_operation == '-')  
        {  
            printf ("Subtraction");  
         }  
            else if (type_of_operation == '+')  
        {  
            printf ("Addition");  
         }     
        printf (" \n a: ");  
        scanf(" %d", &a); 
        printf ("\n b: ");  
        scanf (" %d", &b);   
          
        switch(type_of_operation)  
        {  
            case '+':  
                res = a + b;  
                printf (" Addition of %d and %d is: %.2f", a, b, res);  
                break;  
              
            case '-':  
                res = a - b;   
                printf (" Subtraction of %d and %d is: %.2f", a, b, res);  
                break;  
                  
            case '*':  
                res = a * b; 
                printf (" Multiplication of %d and %d is: %.2f", a, b, res);  
                break;            
              
            case '/':  
                if (b == 0)   
                {  
                    printf (" \n Divisor cannot be zero. Please enter another value ");  
                    scanf ("%d", &b);        
                    }  
                res = a / b; // divide two numbers  
                printf (" Division of %d and %d is: %.2f", a, b, res);  
                break;  
            default:  /* use default to print default message if any condition is not satisfied */  
                printf (" Something is wrong!! Please check the options ");               
        }  
        return 0;  
    }  