#include<stdio.h>
#include<encrypter_decrypter.h>


int main()
{
    char arr[3452],arr1[3452];
    printf("Enter the message: \n");
    gets(arr);
    printf("the encrypted message is \n");
    encrypt(arr);
    printf("enter the code to decrypte");
    gets(arr1);
    decrypt(arr1);

    return 0;
}
