




#include <stdio.h>
#include <malloc.h>


 
 

int filter_arr(int *arr_const, int qua_elements, int number)
{
	int *arr = 0;
	int elements = 0;
	int qua_repeat = 0;
	unsigned long int add_byte_in_arr = 0;
	int index_elements_in_arr = 0;
	int dont_repeat = 0;
	int error = 0;

	for (int i = 0; i <= qua_elements; i++) {
		elements = *(arr_const + i);
		qua_repeat = 0;
		error = 0;

		if (i > 0) {
			for (dont_repeat = 0; dont_repeat < i; dont_repeat++) {
				if (*(arr_const + dont_repeat) == elements) {
					error = 1;
					break;
				}
			}
		}

		if (elements % 2 == 0) {
			error = 1;
		}

		if (error == 0) {
			for (int n = i; n <= qua_elements; n++) {
				if (elements == *(arr_const + n)) {
					qua_repeat++;
				}
			}
		}

		if (qua_repeat > 0 && qua_repeat % 2 == 0) {
			add_byte_in_arr += 2;

			arr = realloc(arr, sizeof(int) * add_byte_in_arr);
			*(arr + index_elements_in_arr) = *(arr_const + i);
			*(arr + index_elements_in_arr + 1) = qua_repeat;

			index_elements_in_arr += 2;
		}
	}

	if (arr == 0) {
		elements = 0;
	} else {
		elements = *(arr + number);
	}

	free(arr);
	arr = NULL;

	return elements;
}
