#include <stdio.h>
#define LETTER '1'
#define ZERO 0
#define NUMBER 123

int main(void)
{
    int intVar;
    printf("integer size is %d\n", sizeof(intVar));     // byte단위로 출력 -> 4 bytes = 32 bits

    unsigned int uintVar;
    printf("unsigned integer size is %d\n", sizeof(uintVar));     // 4 bytes = 32 bits

    short int intVarS;
    printf("short integer size is %d\n", sizeof(intVarS));     // 2 bytes = 16 bits

    long int intVarL;
    printf("long integer size is %d\n", sizeof(intVarL));     // 8 bytes = 64 bits ,  gcc complier에서는 long int가 4 bytes가 아닌 8 bytes
    // 참고 : (https://novicecoder.tistory.com/entry/64%EB%B9%84%ED%8A%B8-%EB%A6%AC%EB%88%85%EC%8A%A4%EC%97%90%EC%84%9C%EC%9D%98-gcc-%EB%8D%B0%EC%9D%B4%ED%84%B0-%ED%83%80%EC%9D%B4%EB%B3%84-%EC%82%AC%EC%9D%B4%EC%A6%88)

    long long int intVarLL;
    printf("long long integer size is %d\n", sizeof(intVarLL));     // 8 bytes = 64 bits

    char charVar;
    printf("character size is %d\n", sizeof(charVar));  // 1 byte = 8 bits

    float floatVar;
    printf("float size is %d\n", sizeof(floatVar));  // 4 byte = 32 bits

    double doubleVar;
    printf("double size is %d\n", sizeof(doubleVar));  // 8 byte = 64 bits

    _Bool boolVar;   // 1 or 0 의미, true와 false를 쓰고 싶으면 <stdbool.h> include하고 type은 bool이라고 하면 됨
    printf("bool size is %d\n", sizeof(boolVar));  // 1 byte = 8 bits


    //operator

    int x = 1;
    int y, z;

    printf("%d, %d, %d\n", x, y, z);

    y = x++;
    
    printf("%d, %d, %d\n", x, y, z);

    z = ++y;

    printf("%d, %d, %d\n", x, y, z);

    int num1 = 33;
    float num2 = 4.2f;
    int num3 = num1 - num2;
    printf("%lu\n", num3);

    printf("%c", 'a');
    printf("x%x", 12288); //3 * 16**3 = 12288
    printf("$%d.%c%d n", NUMBER, LETTER, ZERO);

    char letter = 'f';
    letter = ((letter>='a' && letter<='z')?'!':letter);
    printf("%c\n", letter);
    
    return 0;

}
