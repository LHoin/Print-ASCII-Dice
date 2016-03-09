void print_die (int die[5], int size)
{
	int index = 0;
	int line = 1;

	// Prints 5 lines
	while (line <= 5)
	{
		// One line at a time
		switch (line)
		{
		case 1: // Line 1
			// Loops through each dice
			while(index<size)
			{
				switch(die[index])
				{
					case 1:
					case 2:
					case 3:
					case 4:
					case 5:
					case 6:
						printf("-----	");
						break;

				}
				index++;
			}
			printf("\n");
			line++;
			index = 0;
			break;
		case 2: // Line 2
			while(index<size)
			{
				switch(die[index])
				{
					case 1:
						printf("|   |	");
						break;
					case 2:
						printf("|o  |	");
						break;
					case 3:
						printf("|o  |	");
						break;
					case 4:
						printf("|o o|	");
						break;
					case 5:
						printf("|o o|	");
						break;
					case 6:
						printf("|o o|	");
						break;

				}
				index++;
			}
			printf("\n");
			line++;
			index = 0;
			break;
		case 3: // Line 3
			while(index<size)
			{
				switch(die[index])
				{
					case 1:
						printf("| o |	");
						break;
					case 2:
						printf("|   |	");
						break;
					case 3:
						printf("| o |	");
						break;
					case 4:
						printf("|   |	");
						break;
					case 5:
						printf("| o |	");
						break;
					case 6:
						printf("|o o|	");
						break;

				}
				index++;
			}
			printf("\n");
			line++;
			index = 0;
			break;
		case 4: // Line 4
			while(index<size)
			{
				switch(die[index])
				{
					case 1:
						printf("|   |	");
						break;
					case 2:
						printf("|  o|	");
						break;
					case 3:
						printf("|  o|	");
						break;
					case 4:
						printf("|o o|	");
						break;
					case 5:
						printf("|o o|	");
						break;
					case 6:
						printf("|o o|	");
						break;

				}
				index++;
			}
			printf("\n");
			line++;
			index = 0;
			break;
		case 5: // Line 5
			while(index<size)
			{
				switch(die[index])
				{
					case 1:
					case 2:
					case 3:
					case 4:
					case 5:
					case 6:
						printf("-----	");
						break;

				}
				index++;
			}
			printf("\n");
			line++;
			break;
		}
	}
}
