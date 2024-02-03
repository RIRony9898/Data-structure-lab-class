#include <stdio.h>
#include <stdlib.h>

// Variables
int a[100], n = 0, i, c, v, p;

// Function declarations
int OneD_Insertion_Last(int b[100], int nn, int vv);
void OneD_Array_Display(int b[100], int nn);

// Function definitions

int OneD_Insertion_Last(int b[100], int nn, int vv) {
    if (nn < 100) {
        b[nn] = vv;
        return nn + 1;
    } else {
        printf("Array is full. Insertion failed.\n");
        return nn;
    }
}

void OneD_Array_Display(int b[100], int nn) {
    printf("\nArray elements:\n");
    for (int i = 0; i < nn; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
}

// Main function
int main() {
    while (1) {
        printf("=====> Menu <=====\n");

        printf("\n\nEnter your choice: ");
        scanf("%d", &c);

        switch (c) {
            case 0:
                exit(0);
                break;

            case 1:
                printf("\nInsertion last\n");
                printf("Enter new value for insertion: ");
                scanf("%d", &v);
                n = OneD_Insertion_Last(a, n, v);
                if (n <= 100) {
                    printf("Inserted successfully.\n");
                }
                break;

            case 4:
                printf("\nDisplay\n");
                OneD_Array_Display(a, n);
                break;

            default:
                printf("\nWrong choice\n");
                break;
        }
    }

    return 0;
}
