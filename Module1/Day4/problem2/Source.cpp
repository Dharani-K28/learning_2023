#include <stdio.h>

int main()
{

    int arr[100], min = arr[0], max = arr[0], sum = 0;

    int n;
    float average;

    printf("Enter the number of elements: ");

    scanf("%d", &n);

    printf("Enter the elements:\n");

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);

    }

    for (int i = 0; i < n; i++)
    {

        sum += arr[i];

        if (arr[i] < min) {
            min = arr[i];

        }

        if (arr[i] > max) {

            max = arr[i];

        }

    }

    average = (float)sum / n;

    printf("Minimum: %d\n", min);

    printf("Maximum: %d\n", max);

    printf("Average: %.2f\n", average);

    return 0;

}

