//Inclusions
#include <stdio.h> 
#include <string.h>
#include <time.h>
#include <ctype.h>

//Define the ints used in max sentence array
#define MAXSENTENCE 20
#define LENGTH 80

//Create main function
int main(void)
{


	//Define empty array for the new generated "string"
	char mySentence[MAXSENTENCE][LENGTH];

	//Arrays for the words used
	char *articles[] = {"a", "the", "any", "some", "one"};
	char *verbs[] = {"drove", "ran", "walked", "jumped", "skipped"};
	char *prepos[] = {"on", "over", "from", "under", "to"};
	char *nouns[] = {"boy", "girl", "dog", "town", "car"};

	//Declare a variable for an int to store the random number
	int randInt;

	//For random
	srand((unsigned)time(NULL));

	//New variable x for use in for loop also a pointer
	int (*x)[LENGTH];

	for (x = mySentence; x < mySentence + MAXSENTENCE; x++) {
		//article, noun, verb, preposition, article


		//Article to sentence
		randInt = rand() % (sizeof(articles) / sizeof(articles[0]));
		strcpy(*x, articles[randInt]);

		//Noun to sentence
		randInt  = rand() % (sizeof(nouns) / sizeof(nouns[0]));
		strcat(strcat(*x, " "), nouns[randInt]);

		//Verb to sentence
		randInt = rand() % (sizeof(verbs) / sizeof(verbs[0]));
		strcat(strcat(*x, " "), verbs[randInt]);

		//Prepos to sentence
		randInt = rand() % (sizeof(prepos) / sizeof(prepos[0]));
		strcat(strcat(*x, " "), prepos[randInt]);

		//Article to sentence
		randInt = rand() % (sizeof(articles) / sizeof(articles[0]));
		strcat(strcat(*x, " "), articles[randInt]);
		
		//Print sentence
		printf("%s.\n", *x);
			
	}

}
