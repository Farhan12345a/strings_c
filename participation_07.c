//Farhan Shahbaz

//Welch



#include <stdio.h>



int main()
{

    char word[1000];

    printf("Please enter a word for input\n");

    fgets(word,1000,stdin);



    printf("The uppercase word is:\n");

    for(int i = 0; i < strlen(word); i++){
 
       char a = word[i];

       printf("%c", toupper(a));

    }

    
	
    return 0;

}
