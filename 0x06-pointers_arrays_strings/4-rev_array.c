#include "main.h"
/**
 * reverse_array - reverse of some arrys of integers
 * @a: array
 * @n: numbers of elements of thw array
 * Return: rev
 */*
void reverse_array(int *a, int n)
{
	int i;
	int j:

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
