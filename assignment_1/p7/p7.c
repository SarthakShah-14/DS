/*
 * p7.c
 *
 *  Created on: 29-Jul-2024
 *      Author: root
 */
#include <stdio.h>

void display1DArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void display2DArray(int arr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int sum1DArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int sum2DArray(int arr[][3], int rows, int cols)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}

int max1DArray(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int max2DArray(int arr[][3], int rows, int cols)
{
    int max = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}

void delete1DElement(int arr[], int* size, int index)
{
    if (index < 0 || index >= *size)
    {
        printf("Invalid index!\n");
        return;
    }
    for (int i = index; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

void insert1DElement(int arr[], int* size, int index, int value)
{
    if (index < 0 || index > *size)
    {
        printf("Invalid index!\n");
        return;
    }
    for (int i = *size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    (*size)++;
}

void sort1DArray(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int choice, operation;
    int arr1D[10] = {1, 2, 3, 4, 5};
    int size1D = 5;

    int arr2D[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;

    do
    {
        printf("Choose the type of array:\n");
        printf("1. 1-D Array\n");
        printf("2. 2-D Array\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("1-D Array Operations:\n");
                printf("1. Display Array\n");
                printf("2. Sum of Array\n");
                printf("3. Maximum of Array\n");
                printf("4. Modify an Element\n");
                printf("5. Delete an Element\n");
                printf("6. Insert an Element\n");
                printf("7. Sort Array\n");
                printf("8. Back to Main Menu\n");
                printf("Enter your choice: ");
                scanf("%d", &operation);

                switch (operation)
                {
                    case 1:
                        display1DArray(arr1D, size1D);
                        break;
                    case 2:
                        printf("Sum of 1-D array: %d\n", sum1DArray(arr1D, size1D));
                        break;
                    case 3:
                        printf("Maximum of 1-D array: %d\n", max1DArray(arr1D, size1D));
                        break;
                    case 4:
                    {
                        int index, newValue;
                        printf("Enter index to modify (0-%d): ", size1D - 1);
                        scanf("%d", &index);
                        if (index >= 0 && index < size1D)
                        {
                            printf("Enter new value: ");
                            scanf("%d", &newValue);
                            arr1D[index] = newValue;
                            printf("Modified 1-D Array:\n");
                            display1DArray(arr1D, size1D);
                        }
                        else
                        {
                            printf("Invalid index!\n");
                        }
                        break;
                    }
                    case 5:
                    {
                        int index;
                        printf("Enter index to delete (0-%d): ", size1D - 1);
                        scanf("%d", &index);
                        delete1DElement(arr1D, &size1D, index);
                        printf("Modified 1-D Array:\n");
                        display1DArray(arr1D, size1D);
                        break;
                    }
                    case 6:
                    {
                        int index, newValue;
                        printf("Enter index to insert (0-%d): ", size1D);
                        scanf("%d", &index);
                        printf("Enter new value: ");
                        scanf("%d", &newValue);
                        insert1DElement(arr1D, &size1D, index, newValue);
                        printf("Modified 1-D Array:\n");
                        display1DArray(arr1D, size1D);
                        break;
                    }
                    case 7:
                        sort1DArray(arr1D, size1D);
                        printf("Sorted 1-D Array:\n");
                        display1DArray(arr1D, size1D);
                        break;
                    case 8:
                        break;
                    default:
                        printf("Invalid operation!\n");
                        break;
                }
                break;

            case 2:
                printf("2-D Array Operations:\n");
                printf("1. Display Array\n");
                printf("2. Sum of Array\n");
                printf("3. Maximum of Array\n");
                printf("4. Modify an Element\n");
                printf("5. Back to Main Menu\n");
                printf("Enter your choice: ");
                scanf("%d", &operation);

                switch (operation)
                {
                    case 1:
                        display2DArray(arr2D, rows, cols);
                        break;
                    case 2:
                        printf("Sum of 2-D array: %d\n", sum2DArray(arr2D, rows, cols));
                        break;
                    case 3:
                        printf("Maximum of 2-D array: %d\n", max2DArray(arr2D, rows, cols));
                        break;
                    case 4: {
                        int rowIndex, colIndex, newValue;
                        printf("Enter row index to modify (0-%d): ", rows - 1);
                        scanf("%d", &rowIndex);
                        printf("Enter column index to modify (0-%d): ", cols - 1);
                        scanf("%d", &colIndex);
                        if (rowIndex >= 0 && rowIndex < rows && colIndex >= 0 && colIndex < cols)
                        {
                            printf("Enter new value: ");
                            scanf("%d", &newValue);
                            arr2D[rowIndex][colIndex] = newValue;
                            printf("Modified 2-D Array:\n");
                            display2DArray(arr2D, rows, cols);
                        }
                        else
                        {
                            printf("Invalid index!\n");
                        }
                        break;
                    }
                    case 5:
                        break;
                    default:
                        printf("Invalid operation!\n");
                        break;
                }
                break;

            case 3:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
                break;
        }

    } while (1);

    return 0;
}

