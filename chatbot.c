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
			printf("I do not have a name but people call me Steve my real name is AI Chatbot\nI have a brother named AI BOT BETA but people call him Bob\n");
		}
		else if (!strcmp(scan, "What is your name"))
                {
                        printf("I do not have a name but people call me Steve my real name is AI Chatbot\nI have a brother named AI BOT BETA but people call him Bob\n");
                }
		else if (!strcmp(scan, "what is your name?"))
                {
                        printf("I do not have a name but people call me Steve my real name is AI Chatbot\nI have a brother named AI BOT BETA but people call him Bob\n");
                }
		else if (!strcmp(scan, "what is your name"))
                {
                        printf("I do not have a name but people call me Steve my real name is AI Chatbot\nI have a brother named AI BOT BETA but people call him Bob\n");
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
		else if(!strcmp(scan, "About"))
		{
			printf("\n\n\nProgram language: C\nMade with: Vim, gcc, ubuntu, terminal, etc.\nDate coded on: 2020\nProgrammer: Rishaan Kotian\nProgram version: AI_version_2.0\nHardware requirements: Computer with GCC Compiler, to get optimal performance, 8MB of RAM recommended, VIM Text editor\n\n\n");
		}
		else if(!strcmp(scan, "about"))
                {
                        printf("\n\n\nProgram language: C\nMade with: Vim, gcc, ubuntu, terminal, etc.\nDate coded on: 2020\nProgrammer: Rishaan Kotian\nProgram version: AI_version_2.0\nHardware requirements: Computer with GCC Compiler, to get optimal performance, 8MB of RAM recommended, VIM Text editor\n\n\n");
                }
		else if(!strcmp(scan, "How old are you?"))
		{
			printf("I am about one month old (assuming today it is December 2020) because I was born on November 2020\n");
		}
		else if(!strcmp(scan, "How old are you"))
                {
                        printf("I am about one month old (assuming today it is December 2020) because I was born on November 2020\n");
                }
		else if(!strcmp(scan, "how old are you?"))
                {
                        printf("I am about one month old (assuming today it is December 2020) because I was born on November 2020\n");
                }
		else if(!strcmp(scan, "how old are you"))
                {
                        printf("I am about one month old (assuming today it is December 2020) because I was born on November 2020\n");
                }
		else if (!strcmp(scan, "What are your hobbies?"))
		{
			printf("I occasionally like to draw and paint and I like art. What are your hobbies?\n");
			char y[100];
			scanf("%s", &y);
			printf("I don't really like %s\n", &y);
		}
		else if (!strcmp(scan, "what are your hobbies?"))
                {
                        printf("I occasionally like to draw and paint and I like art. What are your hobbies?\n");
                        char y[100];
                        scanf("%s", &y);
                        printf("I don't really like %s\n", &y);
                }
		else if (!strcmp(scan, "What are your hobbies"))
                {
                        printf("I occasionally like to draw and paint and I like art. What are your hobbies?\n");
                        char y[100];
                        scanf("%s", &y);
                        printf("I don't really like %s\n", &y);
                }
		else if (!strcmp(scan, "what are your hobbies"))
                {
                        printf("I occasionally like to draw and paint and I like art. What are your hobbies?\n");
                        char y[100];
                        scanf("%s", &y);
                        printf("I don't really like %s\n", &y);
                }
		else if (!strcmp(scan, "What is your favorite color?"))
		{
			printf("I like orange. What color do you like?\n");
			char z[100];
			scanf("%s", &z);
			printf("I also like %s.\n", &z);
		}
		else if (!strcmp(scan, "What is your favorite color"))
                {
                        printf("I like orange. What color do you color like?\n");
                        char z[100];
                        scanf("%s", &z);
                        printf("I also like %s.\n", &z);
                }
		else if (!strcmp(scan, "what is your favorites color?"))
                {
                        printf("I like orange. What color do you like?\n");
                        char z[100];
                        scanf("%s", &z);
                        printf("I also like %s.\n", &z);
                }
		else if (!strcmp(scan, "what is your favorite color"))
                {
                        printf("I like orange. What color do you like?\n");
                        char z[100];
                        scanf("%s", &z);
                        printf("I also like %s.\n", &z);
                }
		else if (!strcmp(scan, "What is your job?"))
		{
			printf("My job is to have a conversation with you and whoever else runs me on their computer\n");
		}
		else if (!strcmp(scan, "What is your job"))
                {
                        printf("My job is to have a conversation with you and whoever else runs me on their computer\n");
                }
		else if (!strcmp(scan, "what is your job"))
                {
                        printf("My job is to have a conversation with you and whoever else runs me on their computer\n");
                }
		else if (!strcmp(scan, "what is your job?"))
                {
                        printf("My job is to have a conversation with you and whoever else runs me on their computer\n");
                }
		else
		{
			printf("Sorry I didn't get that! Could you rephrase your sentence?\n");
		}
	}
}
