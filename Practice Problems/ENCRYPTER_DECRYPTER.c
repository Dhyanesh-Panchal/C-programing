/* Dhyanesh Panchal
                                date:-19/09/2021   */

// Encrypter-Decrypter
#include <stdio.h>
#include <string.h>

void encrypt(char inp[245343])
{
    char oup[245343];
    for (int j = 1; j <= strlen(inp); j++)
    {
        for (int i = 0; i <= strlen(inp); i++)
        {
            switch (inp[i])
            {
            case 'a':
                oup[i] = 'Q';
                break;
            case 'b':
                oup[i] = 'w';
                break;
            case 'c':
                oup[i] = '$';
                break;
            case 'd':
                oup[i] = 'h';
                break;
            case 'e':
                oup[i] = 't';
                break;
            case 'f':
                oup[i] = '-';
                break;
            case 'g':
                oup[i] = '"';
                break;
            case 'h':
                oup[i] = '3';
                break;
            case 'i':
                oup[i] = 'p';
                break;
            case 'j':
                oup[i] = 'O';
                break;
            case 'k':
                oup[i] = 'S';
                break;
            case 'l':
                oup[i] = ':';
                break;
            case 'm':
                oup[i] = '=';
                break;
            case 'n':
                oup[i] = 'X';
                break;
            case 'o':
                oup[i] = '>';
                break;
            case 'p':
                oup[i] = 'A';
                break;
            case 'q':
                oup[i] = 'E';
                break;
            case 'r':
                oup[i] = '&';
                break;
            case 's':
                oup[i] = '+';
                break;
            case 't':
                oup[i] = '!';
                break;
            case 'u':
                oup[i] = 'j';
                break;
            case 'v':
                oup[i] = 'G';
                break;
            case 'w':
                oup[i] = '4';
                break;
            case 'x':
                oup[i] = '@';
                break;
            case 'y':
                oup[i] = '/';
                break;
            case 'z':
                oup[i] = '9';
                break;
            case 'A':
                oup[i] = '%';
                break;
            case 'B':
                oup[i] = '^';
                break;
            case 'C':
                oup[i] = 'y';
                break;
            case 'D':
                oup[i] = 'Z';
                break;
            case 'E':
                oup[i] = '_';
                break;
            case 'F':
                oup[i] = '8';
                break;
            case 'G':
                oup[i] = 'r';
                break;
            case 'H':
                oup[i] = 'I';
                break;
            case 'I':
                oup[i] = '?';
                break;
            case 'J':
                oup[i] = '*';
                break;
            case 'K':
                oup[i] = '<';
                break;
            case 'L':
                oup[i] = 'C';
                break;
            case 'M':
                oup[i] = 'q';
                break;
            case 'N':
                oup[i] = 'u';
                break;
            case 'O':
                oup[i] = '5';
                break;
            case 'P':
                oup[i] = '0';
                break;
            case 'Q':
                oup[i] = '#';
                break;
            case 'R':
                oup[i] = 'R';
                break;
            case 'S':
                oup[i] = 'm';
                break;
            case 'T':
                oup[i] = '7';
                break;
            case 'U':
                oup[i] = '|';
                break;
            case 'V':
                oup[i] = '2';
                break;
            case 'W':
                oup[i] = 'n';
                break;
            case 'X':
                oup[i] = '6';
                break;
            case 'Y':
                oup[i] = '(';
                break;
            case 'Z':
                oup[i] = ';';
                break;
            case '1':
                oup[i] = 'b';
                break;
            case '2':
                oup[i] = 'Y';
                break;
            case '3':
                oup[i] = 'z';
                break;
            case '4':
                oup[i] = 'x';
                break;
            case '5':
                oup[i] = 'W';
                break;
            case '6':
                oup[i] = 'v';
                break;
            case '7':
                oup[i] = 'T';
                break;
            case '8':
                oup[i] = 's';
                break;
            case '9':
                oup[i] = 'P';
                break;
            case '0':
                oup[i] = 'N';
                break;
            case '!':
                oup[i] = 'o';
                break;
            case '@':
                oup[i] = '1';
                break;
            case '#':
                oup[i] = ')';
                break;
            case '$':
                oup[i] = 'L';
                break;
            case '%':
                oup[i] = 'k';
                break;
            case '^':
                oup[i] = 'J';
                break;
            case '&':
                oup[i] = 'i';
                break;
            case '*':
                oup[i] = 'H';
                break;
            case '(':
                oup[i] = 'g';
                break;
            case ')':
                oup[i] = 'F';
                break;
            case '-':
                oup[i] = 'e';
                break;
            case '_':
                oup[i] = 'd';
                break;
            case '=':
                oup[i] = 'K';
                break;
            case '+':
                oup[i] = 'l';
                break;
            case '[':
                oup[i] = 'M';
                break;
            case ']':
                oup[i] = 'U';
                break;
            case '{':
                oup[i] = ',';
                break;
            case '}':
                oup[i] = 'D';
                break;
            case ';':
                oup[i] = 'a';
                break;
            case ':':
                oup[i] = 'B';
                break;
            case '|':
                oup[i] = 'c';
                break;
            case '`':
                oup[i] = 'f';
                break;
            case '/':
                oup[i] = '~';
                break;
            case '?':
                oup[i] = '`';
                break;
            case '.':
                oup[i] = '}';
                break;
            case '>':
                oup[i] = '{';
                break;
            case ',':
                oup[i] = '[';
                break;
            case '<':
                oup[i] = ']';
                break;
            case ' ':
                oup[i] = '.';
                break;
            case '~':
                oup[i] = ' ';
                break;
            case '"':
                oup[i] = 'V';
                break;

            default:
                oup[strlen(inp)] = '\0';
                break;
            }
            inp[i] = oup[i];
        }
    }
    puts(oup);
}
void decrypt(char inp[245343])
{
    char oup[245343];
    for (int j = 1; j <= strlen(inp); j++)
    {
        for (int i = 0; i <= strlen(inp); i++)
        {
            switch (inp[i])
            {
            case 'Q':
                oup[i] = 'a';
                break;
            case 'w':
                oup[i] = 'b';
                break;
            case '$':
                oup[i] = 'c';
                break;
            case 'h':
                oup[i] = 'd';
                break;
            case 't':
                oup[i] = 'e';
                break;
            case '-':
                oup[i] = 'f';
                break;
            case '"':
                oup[i] = 'g';
                break;
            case '3':
                oup[i] = 'h';
                break;
            case 'p':
                oup[i] = 'i';
                break;
            case 'O':
                oup[i] = 'j';
                break;
            case 'S':
                oup[i] = 'k';
                break;
            case ':':
                oup[i] = 'l';
                break;
            case '=':
                oup[i] = 'm';
                break;
            case 'X':
                oup[i] = 'n';
                break;
            case '>':
                oup[i] = 'o';
                break;
            case 'A':
                oup[i] = 'p';
                break;
            case 'E':
                oup[i] = 'q';
                break;
            case '&':
                oup[i] = 'r';
                break;
            case '+':
                oup[i] = 's';
                break;
            case '!':
                oup[i] = 't';
                break;
            case 'j':
                oup[i] = 'u';
                break;
            case 'G':
                oup[i] = 'v';
                break;
            case '4':
                oup[i] = 'w';
                break;
            case '@':
                oup[i] = 'x';
                break;
            case '/':
                oup[i] = 'y';
                break;
            case '9':
                oup[i] = 'z';
                break;
            case '%':
                oup[i] = 'A';
                break;
            case '^':
                oup[i] = 'B';
                break;
            case 'y':
                oup[i] = 'C';
                break;
            case 'Z':
                oup[i] = 'D';
                break;
            case '_':
                oup[i] = 'E';
                break;
            case '8':
                oup[i] = 'F';
                break;
            case 'r':
                oup[i] = 'G';
                break;
            case 'I':
                oup[i] = 'H';
                break;
            case '?':
                oup[i] = 'I';
                break;
            case '*':
                oup[i] = 'J';
                break;
            case '<':
                oup[i] = 'K';
                break;
            case 'C':
                oup[i] = 'L';
                break;
            case 'q':
                oup[i] = 'M';
                break;
            case 'u':
                oup[i] = 'N';
                break;
            case '5':
                oup[i] = 'O';
                break;
            case '0':
                oup[i] = 'P';
                break;
            case '#':
                oup[i] = 'Q';
                break;
            case 'R':
                oup[i] = 'R';
                break;
            case 'm':
                oup[i] = 'S';
                break;
            case '7':
                oup[i] = 'T';
                break;
            case '|':
                oup[i] = 'U';
                break;
            case '2':
                oup[i] = 'V';
                break;
            case 'n':
                oup[i] = 'W';
                break;
            case '6':
                oup[i] = 'X';
                break;
            case '(':
                oup[i] = 'Y';
                break;
            case ';':
                oup[i] = 'Z';
                break;
            case 'b':
                oup[i] = '1';
                break;
            case 'Y':
                oup[i] = '2';
                break;
            case 'z':
                oup[i] = '3';
                break;
            case 'x':
                oup[i] = '4';
                break;
            case 'W':
                oup[i] = '5';
                break;
            case 'v':
                oup[i] = '6';
                break;
            case 'T':
                oup[i] = '7';
                break;
            case 's':
                oup[i] = '8';
                break;
            case 'P':
                oup[i] = '9';
                break;
            case 'N':
                oup[i] = '0';
                break;
            case 'o':
                oup[i] = '!';
                break;
            case '1':
                oup[i] = '@';
                break;
            case ')':
                oup[i] = '#';
                break;
            case 'L':
                oup[i] = '$';
                break;
            case 'k':
                oup[i] = '%';
                break;
            case 'J':
                oup[i] = '^';
                break;
            case 'i':
                oup[i] = '&';
                break;
            case 'H':
                oup[i] = '*';
                break;
            case 'g':
                oup[i] = '(';
                break;
            case 'F':
                oup[i] = ')';
                break;
            case 'e':
                oup[i] = '-';
                break;
            case 'd':
                oup[i] = '_';
                break;
            case 'K':
                oup[i] = '=';
                break;
            case 'l':
                oup[i] = '+';
                break;
            case 'M':
                oup[i] = '[';
                break;
            case 'U':
                oup[i] = ']';
                break;
            case ',':
                oup[i] = '{';
                break;
            case 'D':
                oup[i] = '}';
                break;
            case 'a':
                oup[i] = ';';
                break;
            case 'B':
                oup[i] = ':';
                break;
            case 'c':
                oup[i] = '|';
                break;
            case 'f':
                oup[i] = '`';
                break;
            case '~':
                oup[i] = '/';
                break;
            case '`':
                oup[i] = '?';
                break;
            case '}':
                oup[i] = '.';
                break;
            case '{':
                oup[i] = '>';
                break;
            case '[':
                oup[i] = ',';
                break;
            case ']':
                oup[i] = '<';
                break;
            case '.':
                oup[i] = ' ';
                break;
            case ' ':
                oup[i] = '~';
                break;
            case 'V':
                oup[i] = '"';
                break;

            default:
                oup[strlen(inp)] = '\0';
                break;
            }
            inp[i] = oup[i];
        }
    }
    puts(oup);
}

int main()
{
    char message1[245343], message2[245343], arr[121];

    printf("Enter the message which you want to encrypt:\n");
    gets(message1);
    printf("\n the Encrypted statment is:\n       ");
    encrypt(message1);

    printf("\n This is decrypter\nEnter the Encrypted statment which you want to decrypt:\n");
    gets(message2);
    printf("\n the Message is:\n       ");
    decrypt(message2);

    printf("Thank you for using my service...!!!!!");

    return 0;
}
