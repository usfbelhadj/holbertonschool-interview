#include "sort.h"
/**
* tmax - get max value
* @t:array
* @n: size
* Return: max number of the array
*/
int tmax(int *t, int n)
{
int i, max;

for (max = t[0], i = 1; i < n; i++)
if (t[i] > max)
max = t[i];
return (max);
}
/**
* sort_t - sorting array
* @t:array
* @n:size
* @num: num
* Return - None
*/
void sort_t(int *t, int n, int num)
{
int *output, i, count[10] = { 0 };

output = malloc(sizeof(int) * n);
if (output == NULL)
return;
for (i = 0; i < n; i++)
count[(t[i] / num) % 10]++;

for (i = 1; i < 10; i++)
count[i] += count[i - 1];

for (i = n - 1; i >= 0; i--)
{
output[count[(t[i] / num) % 10] - 1] = t[i];
count[(t[i] / num) % 10]--;
}

for (i = 0; i < n; i++)
t[i] = output[i];
free(output);
}
/**
* radix_sort - sort an array
* @t:array to be sorted
* @size:size of array
* Return - None
*/
void radix_sort(int *t, size_t size)
{
int num, m;

if (size < 2)
return;
m = tmax(t, size);
for (num = 1; m / num > 0; num *= 10)
{
sort_t(t, size, num);
print_array(t, size);
}
}
