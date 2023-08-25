#include <stdio.h>
int main () {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int array[size];
    printf("Enter %d array integer values: ", size);
    for (int i = 0; i< size; i++) {
        scanf("%d", &array[i]);
    }
    
    int x = array[0];
    for (int i = 0; i < size; i ++) {
        if (x < array[i]){
            x = array[i];
        }
    }
    
    printf("The highest value in the array is %d", x);
    return 0;
}