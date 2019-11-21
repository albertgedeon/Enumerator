//Albert Gedeon
//Enumerates all string
//Printable characters start at 32 to 126
#include <stdio.h>

print_Char(int ascii_Dec)
{
	printf("%c", (char)ascii_Dec);
}
print_New_Line()
{
	printf("\n");
}

print_String(int string[], int string_Length)
{
	int counter = 0;
	int flag = 0;
	
	for(counter = 0; counter < string_Length; counter++)
	{//This will not print until a non space character appears
		if(string[counter] != 32)
		{
			flag = 1;
		}
		if(flag)
		{
			print_Char(string[counter]);
		}
	}
	print_New_Line();
}

int main(void)
{
	int string_Length = 3;
	int rotations = 95;
	int string[string_Length];
	int counter_Char = 0;
	int current_Position = 0;
	int previous_Position = 0;
	
	char output[string_Length];

	for(counter_Char = 0; counter_Char < string_Length; counter_Char++)
	{
		string[counter_Char] = 32;
	}

	while(1)
	{
		current_Position = 0;
		previous_Position = 0;
		string[current_Position] = 32;
		for(counter_Char = 0; counter_Char < rotations; counter_Char++)
		{
			print_String(string, string_Length);
			string[current_Position]++;
		}
		while(current_Position < string_Length)
		{
			current_Position++;
			string[current_Position]++;
			if(string[current_Position] > 126)
			{
				string[current_Position] = 32;
			}	
			else
			{
				break;
			}
		}
		if(current_Position >= string_Length)
		{
			break;
		}
	}

	return 0;
}
