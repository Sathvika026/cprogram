#include <stdio.h>
int main()
 {
    int a,n,smallest,largest;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter number 1: ");
    scanf("%d",&a);
    smallest = largest = a;
    for(int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &a);
        if(a<smallest) {
            smallest = a;
        }
        if(a>largest) {
            largest = a;
        }
    }
    int range = largest - smallest;
    printf("Smallest number: %d\n", smallest);
    printf("Largest number: %d\n", largest);
    printf("Range: %d\n", range);
    return 0;
}
