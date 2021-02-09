// SPDX-License-Identifier: GPL-3.0
#include <stdio.h>

int length(char *seed)
{
		int length;

		for (int i = 0; seed[i] != '\0'; i++)
			length = i;
			length++;
			return length;
}

int strcmp(char *a, char *b)
{
		while (*a && *b) {
			if (*a != *b)
				return 0;
			a++;
			b++;
		}
		return (*b == '\0');
}

char *strstr(char *seed, char *alignment)
{
		while (*seed != '\0') {
			if ((*seed == *alignment) && strcmp(seed, alignment))
				return seed;
			seed++;
		}

		return NULL;
}

char *cut_string(char *alignment)
{
		int len = length(alignment);

		for (int i = 0; alignment[i] != '\0'; i++)
			alignment[i] = alignment[i + 1];

		for (int i = 0; alignment[i] != '\0'; i++) {
			if (i == len - 2)
				alignment[i] = '\0';
		}
		return alignment;
}

int main(int argc, char **argv)
{

		//return true if string 1 is contained in string 2

		char *seed = argv[1];
		char *alignment = argv[2];
		char *new_alignment;

		new_alignment = cut_string(alignment);

		if (strstr(new_alignment, seed))
			puts("True");
		else
			puts("False");

		return 0;
}
