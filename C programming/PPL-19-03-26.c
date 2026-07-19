// #include<stdio.h>

// int main(){
//     int n;
//     printf("")
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter no:");
//     scanf("%d",&n);

//     for (int i=1;i<=10;++i){
//         printf("%d",i);
//     }
// }

#include<stdio.h>

int main(){
    int s = 5;
    for (int i=1;i<=s;i++){
        for (int j=1;j<=(2*i-1);j++){
            // printf("* ");
            printf("(%d %d)",i,j);
        }
        

        printf("\n");
    }
}