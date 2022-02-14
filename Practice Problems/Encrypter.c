                              /* Dhyanesh Panchal
                                date:-   */

                            //
#include<stdio.h>
#include<string.h>

void encrypt(char inp[245343])
{
    char oup[245343];
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

        default:
            oup[strlen(inp)] = '\0';
            break;
        }
    }
    puts(oup);
}

int main()
{char message1[245343];

    printf("Enter the message which you want to encrypt:\n");
    gets(message1);
    printf("\n the Encrypted statment is:\n       ");
    encrypt(message1);

    
    return 0;
}
