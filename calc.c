#include <stdio.h>
#include <stdbool.h>
#include <string.h>


bool isinteger(char *str);


int parseint(char *str);



int main(int argc, char *argv[]) 
{

    if (argc == 1 || argc == 3 || argc > 4) 
       {
        perror("Error occurred while processing!");
        return -1;
    }
        //Valid Scenario I - Single Argument
    else if (argc == 2 && isinteger(argv[1])) 
    {
        printf("%s\n", argv[1]);
        return 0;
    }
        //Valid Scenario II - Three Argument
    else if (argc == 4) {

        if (isinteger(argv[1]) && isinteger(argv[3]))
            {
            int res;
            char
            operator=
            argv[2][0];

            switch (operator)
            {
                    case '+': res = parseint(argv[1]) + parseint(argv[3]);
                    printf("%d\n", res);
                    return 0;
                    case '-': res = parseint(argv[1]) - parseint(argv[3]);
                    printf("%d\n", res);
                    return 0;
                    case 'x': res = parseint(argv[1]) * parseint(argv[3]);
                    printf("%d\n", res);
                    return 0;
                    case '/':
                        if(parseint(argv[3]) == 0)
                      {
                            
                           printf("error dividing by zero\n");
                           return -1;
                        }
                        res = parseint(argv[1]) / parseint(argv[3]);
                    printf("%d\n", res);
                    return 0;
                    default:
                    perror("Error! Operation not supported.");
                    return -1;
            }
        }
    }
    return -1;
}
int parseint(char *str)
   {
   if (*str == '\0')
        return 0;
    int num = 0;
    int sign = 1;
    int k = 0;
    if (str[0] == '-') {
        sign = -1;
        k++;
    }

    for (; str[k] != '\0'; k++)
   {
        if (isinteger(str) == false)
            return 0;
        num = num * 10 + str[k] - '0';
    }
    return sign * num;

}
bool isinteger(char *str) {

    //validation for input length should be greater than 10
    if (strlen(str) > 11 && str[0] == '-') {
        return false;
    } else if (strlen(str) > 10 && str[0] != '-') {
        //printf("Invalid input length {%lu}, input length cannot be greater than 10. \n", strlen(str));
        return false;
    }
        //validation for input is integer
    else {
        for (int i = 0; i < strlen(str); i++) {
            if (str[0] != '-') { //first position can be negative
                if (str[i] < '0' || str[i] > '9') {
                    printf("Error, input {%c} can only accept integers. \n", str[i]);
                    return false;
                }
            }
        }
    }

    return true;
}