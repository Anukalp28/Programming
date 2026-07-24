#include<stdio.h>
void main(){
    int marks[5][3]={
        10, 10, 10, 
        20, 20, 20, 
        30, 30, 30, 
        40, 40, 40, 
        50, 50, 50, 
    };
    // int marks[5][3];
    int r = 5;
    int c = 3;
    // for(int i=0;i<r;i++){
    //     int p,c,m;
    //     printf("Enter marks of %d student",i);
    //     scanf("%d %d %d",&p,&c,&m);
    //     marks[i][0] = p;
    //     marks[i][1] = c;
    //     marks[i][2] = m;
    // }
    int pmax=0;
    int cmax=0;
    int mmax=0;
    // time&space complexcity O(n/3)
    for(int i=0;i<r;i++){
        if(marks[i][0]>pmax){
            pmax = marks[i][0];
        }
        if(marks[i][0]){
            cmax = marks[i][1];   
        }
        if(marks[i][0]){
            mmax = marks[i][2];   
        }
    }
    printf("max marks in phy %d\n",pmax);
    printf("max marks in chm %d\n",cmax);
    printf("max marks in math %d\n",mmax);




    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         printf("%d ",marks[i][j]);
    //     }
    //     printf("\n");
    // }
}




// #include<stdio.h>
// void main(){
//     int n=5;

//     for(int i=1;i<=n;i++){
//         int x = 1;
//         for (int j=1;j<=n;j++){
//             if(i>=j){
//                 printf("%d ",x);
//                 x++;
//             }
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// void main(){
//     int n=5;

//     for(int i=1;i<=n;i++){
//         int x = 1;
//         for (int j=1;j<=n;j++){
//             // if(i>=j){
//             //     printf("%d ",x);
//             //     x++;
//             // }
//             if(i==j){
//                 printf("%d ",x);
                
//             }
//             else{
//                 // printf("  ");
//                 printf("%d ",0);
//             }
//             x++;
//         }
//         printf("\n");
//     }
// }