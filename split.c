char* niz = malloc(1000001 * sizeof(int));
	int* brojevi = malloc(1000001 * sizeof(int));
	fgets(niz, 1000001, stdin);

	char* newString;
	newString = strtok(niz, " ");
	int i = 0;
	while (newString != NULL)
	{
		brojevi[i] = atoi(newString);
		newString = strtok(NULL, " ");
		i++;
	}

	// testiranje
	for (int j = 0; j < i; j++) {
		printf("%d\n",brojevi[j]);
	}