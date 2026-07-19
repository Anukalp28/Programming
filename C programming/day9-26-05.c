// 00:00 Introduction
// 01:30 Revisiting Arrays
// 03:39 What are Strings?


// 06:28 Address of Character Array elements
// #include<stdio.h>
// int main(){
//     char arr[5]={'a','b','c','d','e'};
//     // printf("%c",arr[1]);

//     printf("%p\n",&arr[0]);
//     printf("%p\n",&arr[1]);
//     printf("%p\n",&arr[2]);
//     printf("%p\n",&arr[3]);
//     printf("%p\n",&arr[4]);
// }
// 12:51 ASCII values revision
// 16:41 Creating character arrays
// 18:38 NULL character ‘\0’
// #include<stdio.h>
// int main(){
//     char arr[]={'h','e','l','l','o','\0'};
//     // char ch = '\0';
//     // printf("%d",ch);
//     // // int x = 0;
//     // char a = (char)x;  // a->  '\0'
//     // printf("%c",a);

//     int i =0;
//     while (arr[i]!='\0')
//     {
//         printf("%c",arr[i]);
//         i++;
//     }
    
// }

// 26:53 String initialization without individual characters
// #include<stdio.h>

// int main(){
//     char arr[] = "Hello ajvdjhavd akbdamh kajwdbnkj";  //total size = size + 1 
//     int i = 0;
//     while (arr[i]!='\0')
//     {
//     //    printf("%c",arr[i]);
//     //    printf("%c",i[arr]);
//        printf("%c",*(arr+i));
//        i++;

//     }
    
// }
// 33:39 actual size of string 
// 37:34 Accessing and Modifying individual characters
// 41:43 Different ways of printing particular element
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char arr[] = "Hello ajvdjhavd akbdamh kajwdbnkj";  //total size = size + 1 
//     // int i = 0;
//     // while (arr[i]!='\0')
//     // {
//     // //    printf("%c",arr[i]);
//     // //    printf("%c",i[arr]);
//     //    printf("%c",*(arr+i));
//     //    i++;
//     // }
//     printf("%s",arr);
// }
// 46:54 puts() and gets() and %[^\n]s
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[40];
//     // scanf("%s",str);   // only first word will be consider ie space remove ferther reading
//     scanf("%[^\n]s",str); 
//     // gets(str);
//     puts(str);  // add \n automatically
//     printf("str ->%s",str);

// }

// 56:57 Ques : Reverse a String
// 58:02 Declaring string without size?
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[40];
//     puts("Enter a string");
//     // gets(str);
//     scanf("%[^\n]s",str);
//     //size
//     int size = 0;
//     // int k=0;
//     while (str[size]!='\0'){
//         size++;
//         // k++;
//         }
//     // printf("%d",size);
    
//     for (int i=0,j=size-1;i<=j;i++,j--){
//         char temp = str[i];
//         str[i]=str[j];

//         str[j] = temp; 
//     }

//     puts("revers str is :");
//     puts(str);
// }


// 1:08:15 **Character Pointers as Strings?? 
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[] = "wakjdbab jawnd";
//     // char* ptr = &str[0];
//     char *ptr = str;
//     int i=0;
//     while (*ptr!='\0'){
//         printf("%c",*ptr);
//         ptr++;
//         i++;
//     }
    

//     // printf("%p\n",&str[0]);
//     // printf("%p",str);
// }
// 1:37:34 Shallow and Deep Copy
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char s1[] = "Physics";
//     // char *s2 = s1; //not another str ie shallow copy
    
//     char s2[] = s1;

//     s1[0] = 'M'; 

//     printf("%s\n",s1);
//     printf("%s",s2);
// }
// // H W 

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char s1[] = "Physics";
//     //calculate size

//     int size = 0;
//     while (s1[size]!='\0'){
//         size++;
//     }
//     // printf("%d",size);

//     char s2[size];
//     for (int i=0;i<size;i++){
//         s2[i] = s1[i];
//     }
//     printf("%p\n",s1);
//     printf("%p\n",s2);
// }

// 1:47:03 Builtin functions of string
// 1:48:08 strlen() function
// 1:50:53 strcpy() function
// 1:53:05 strcat() function
// #include<stdio.h>
// #include<string.h>
// #include<stdbool.h>
// int main(){
//     // char s1[] = "Physics";
//     // char *s2 = "Chemistry";
//     // int x = strlen(s2);
//     // printf("%d",x);

//     // char s1[20] = "wadwa raj";
//     // char s2[20];
//     // strcpy(s1,s2);
//     // printf("%p\n",s1);
//     // // printf("%s",s1);
//     // printf("%p\n",s2);
//     // printf("%s\n",s2);

//     char s1[] = "Anukalp";
//     char s2[] = "Raj";

//     // char *s1 = "Anukalp";
//     // char *s2 = " Raj";
//     // strcat(s1,s2);
//     // printf("%s",s1);
//     bool x = strcmp(s1,s2);
//     printf("%d",x);

// }
// H
// 1:57:17 Ques : Insert a new character at a position in string

#include<stdio.h>

int insert(int i,char l,char str){

    for (int i=0;){
        
    }

}

int main(){
    char str[20] = "College";
    // 2 index add l
    chr str[] = insert(2,l,str);
    printf("%s",str);

}


