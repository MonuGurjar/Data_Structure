#include <stdio.h>

int main()
{
    char s[200];
    int word=0,character=0,line=0,space=0;
    printf("Enter the String : ");
    scanf("%[^\n]s",s);
    for (int i=0;s[i]!='\0';i++){
        // fgets()
        if (s[i]==' ' && s[i+1]!=' '){
            word++;
        }
        // if (s[i]==' '){
        //     space++;
        // }
        if (s[i]!=' '){
            character++;
        }
        if (s[i]=='\n'){
            line++;
        }
    }
    printf("Number of words in given string : %d\n",word+1);
    printf("Number of characters in given string : %d\n",character-space);;
    printf("Number of lines in given string : %d\n",line+1);

    return 0;
}
