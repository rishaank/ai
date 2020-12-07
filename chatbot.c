#include <stdio.h>
#include<string.h>

void main()
{
	printf("Hi! Nice to meet you! What's your name?\n");
	char username[100];
	char scan[100];
	scanf("%[^\n]", &username);
	printf("Hello %s\n", username);
	printf("try asking me questions like 'What is your favorite food?'\n");
	int i;
	for(;;)
	{
		scanf(" %[^\n]", &scan);
		if (!strcmp(scan, "What is your favorite food?"))
		{
			char c[100];
			printf("I like cheese pizza! What food do you like?\n");
			scanf("%s", &c);
			printf("Cool!\n");
		}
		else if (!strcmp(scan, "what is your favorite food?"))
                {
                        char c[100];
                        printf("I like cheese pizza! What food do you like?\n");
                        scanf("%s", &c);
                        printf("Cool!\n");
                }
		else if (!strcmp(scan, "What is your favorite food"))
                {
                        char c[100];
                        printf("I like cheese pizza! What food do you like?\n");
                        scanf("%s", &c);
                        printf("Cool!\n");
                } 
		else if (!strcmp(scan, "what is your favorite food"))
                {
                        char c[100];
                        printf("I like cheese pizza! What food do you like?\n");
                        scanf("%s", &c);
                        printf("Cool!\n");
                }
		else if (!strcmp(scan, "What is your name?"))
		{
			printf("I do not have a name but people call me Steve my real name is AI BOT V2\nI have a brother named AI BOT V1 but people call him Bob");
		}
		else if (!strcmp(scan, "What is your name"))
                {
                        printf("I do not have a name but people call me Steve my real name is AI BOT V2\nI have a brother named AI BOT V1 but people call him Bob");
                }
		else if (!strcmp(scan, "what is your name?"))
                {
                        printf("I do not have a name but people call me Steve my real name is AI BOT V2\nI have a brother named AI BOT V1 but people call him Bob");
                }
		else if (!strcmp(scan, "what is your name"))
                {
                        printf("I do not have a name but people call me Steve my real name is AI BOT V2\nI have a brother named AI BOT V1 but people call him Bob");
                }
		else if (!strcmp(scan, "Goodbye"))
		{
			printf("It was nice talking to you %s! Bye!\n", username);
			return;
		}
		else if (!strcmp(scan, "goodbye"))
                {
                        printf("It was nice talking to you %s! Bye!\n", username);
                        return;
                }
		else if (!strcmp(scan, "Bye"))
		{
			printf("It was nice talking to you %s! Bye!\n", username);
			return;
		}
		else if (!strcmp(scan, "bye"))
                {
                        printf("It was nice talking to you %s! Bye!\n", username);
                        return;
                }
		else if (!strcmp(scan, "What is your favorite car?"))
		{
			printf("I am a fan of the Bugatti Divo. I like its interior premium design and its exterior and its speed. What car do you like?\n");
			char x;
			scanf("%s", &x);
			printf("Cool, I also like the %s its second on my favorites list.\n", &x);

		}
		else if (!strcmp(scan, "What is your favorite car"))
                {
                        printf("I am a fan of the Bugatti Divo. I like its interior premium design and its exterior and its speed. What car do you like?\n");
                        char x;
                        scanf("%s", &x);
                        printf("Cool, I also like the %s its second on my favorites list.\n", &x);

                }
		else if (!strcmp(scan, "what is your favorite car?"))
                {
                        printf("I am a fan of the Bugatti Divo. I like its interior premium design and its exterior and its speed. What car do you like?\n");
                        char x;
                        scanf("%s", &x);
                        printf("Cool, I also like the %s its second on my favorites list.\n", &x);

                }
		else if (!strcmp(scan, "what is your favorite car"))
                {
                        printf("I am a fan of the Bugatti Divo. I like its interior premium design and its exterior and its speed. What car do you like?\n");
                        char x;
                        scanf("%s", &x);
                        printf("Cool, I also like the %s its second on my favorites list.\n", &x);

                }
		else if(!strcmp(scan, "Ok"))
		{
			printf("OK then\n");
		}
		else if(!strcmp(scan, "OK"))
                {
                        printf("OK then\n");
                }
		else if(!strcmp(scan,"ok"))
		{
			printf("OK then\n");
		}
		else if(!strcmp(scan, "Cool"))
		{
			printf("I agree\n");
		}
		else if(!strcmp(scan, "cool"))
                {
                        printf("I agree\n");
                }
		else if(!strcmp(scan, "Cool!"))
                {
                        printf("I agree\n");
                }
		else if(!strcmp(scan, "cool!"))
                {
                        printf("I agree\n");
                }
		else if(!strcmp(scan, "What is your favorite phone?"))
		{
			printf("I like most iPhones except the iPhone 5c.\n I don't like it's plastic back\n");
		}
		else if(!strcmp(scan, "What is your favorite phone"))
                {
                        printf("I like most iPhones except the iPhone 5c.\n I don't like it's plastic back\n");
                }
		else if(!strcmp(scan, "what is your favorite phone?"))
                {
                        printf("I like most iPhones except the iPhone 5c.\n I don't like it's plastic back\n");
                }
		else if(!strcmp(scan, "what is your favorite phone"))
                {
                        printf("I like most iPhones except the iPhone 5c.\n I don't like it's plastic back\n");
                }
		else if(!strcmp(scan, "How old are you?"))
		{
			printf("I was born (coded) on 2020 I do not know the specific month or day I was born on.\n");
		}
		else if(!strcmp(scan, "How old are you"))
                {
                        printf("I was born (coded) on 2020 I do not know the specific month or day I was born on.\n");
                }
		else if(!strcmp(scan, "how old are you?"))
                {
                        printf("I was born (coded) on 2020 I do not know the specific month or day I was born on.\n");
                }
		else if(!strcmp(scan, "how old are you"))
                {
                        printf("I was born (coded) on 2020 I do not know the specific month or day I was born on.\n");
                }
		else if(!strcmp(scan, "About"))
		{
			printf("\n\n\nProgram language: C\nMade with: Vim, gcc, ubuntu, terminal, etc.\nDate coded on: 2020\nProgrammer: Rishaan Kotian\nProgram version: AI_version_2.0\nHardware requirments: Computer with GCC Compiler, to get optimal performance, 8MB of RAM recommended, VIM Text editor\n\n\n");
		}
		else if(!strcmp(scan, "about"))
                {
                        printf("\n\n\nProgram language: C\nMade with: Vim, gcc, ubuntu, terminal, etc.\nDate coded on: 2020\nProgrammer: Rishaan Kotian\nProgram version: AI_version_2.0\nHardware requirments: Computer with GCC Compiler, to get optimal performance, 8MB of RAM recommended, VIM Text editor\n\n\n");
                }
		else
		{
			printf("Sorry I didnt get that! Could you rephrase your sentence?\n");
		}
	}
}
