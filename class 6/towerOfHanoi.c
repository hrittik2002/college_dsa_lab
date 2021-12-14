#include <stdio.h>

void towerOfHonoi(int n , char from , char to , char temp){
    if(n == 1){
        printf("\n Move disk 1 from tower %c to tower %c", from , to);
        return;
    }
    towerOfHonoi(n-1 , from , temp , to);
    printf("\n Move disk %d from tower %c to tower %c", n , from , to);
    towerOfHonoi(n-1 , temp , to , from);
}

int main(){
    printf("Enter the number of disks : ");
    int n;
    scanf("%d",&n);
    printf("\nTHE SEQUENCE : \n");
    towerOfHonoi(n , 'A' , 'C' , 'B');
    return 0;
}