#include<stdio.h>

int main() {
	int arr1[5000], arr2[3000], res[7000];
	int i, j, k, packets, frames;

	printf("\nThe number of packets count as array listing :");
	scanf("%d", &packets);
	for (i = 0; i < packets; i++) {
		scanf("%d", &arr1[i]);
	}

	printf("\nThe number of frames count as array listing :");
	scanf("%d", &frames);
	for (i = 0; i < frames; i++) {
		scanf("%d", &arr2[i]);
	}

	i = 0;
	j = 0;
	k = 0;

	// Merging starts
	while (i < packets && j < frames) {
		if (arr1[i] <= arr2[j]) {
			res[k] = arr1[i];
			i++;
			k++;
		} else {
			res[k] = arr2[j];
			k++;
			j++;
		}
	}

	/* Some elements in array 'arr1' are still remaining
	 where as the array 'arr2' is exhausted */

	while (i < packets) {
		res[k] = arr1[i];
		i++;
		k++;
	}

	/* Some elements in array 'arr2' are still remaining
	 where as the array 'arr1' is exhausted */

	while (j < frames) {
		res[k] = arr2[j];
		k++;
		j++;
	}

	//Displaying elements of array 'res'
	printf("\n packets and frames encapsulated as :");
	for (i = 0; i < packets + frames; i++)
		printf("%d ", res[i]);

	return 0;

}
