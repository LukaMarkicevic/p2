 
//bubble sort
	int temp;
	for (int z = n - 2; z >= 0; z--) {
		for (int j = 0; j <= z; j++) {
			if (a[j] > a[j + 1]) { // ako oces opadacujuci red stavi <
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}