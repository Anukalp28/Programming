// #include<iostream>
// using namespace std;
// int main(){
//     // int a,b;
//     // cout<<"Enter 1st no:";
//     // cin>>a;
//     // cout<<"Enter 2ns no:";
//     // cin>>b;
//     // cout<<a+b;
//     // for (int i=1;i<10;i++){
//     //     cout<<i;
//     // }
//     int n = 5;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n;j++){
//             // cout<<"(%d %d),",i,j;
//             printf("(%d %d)",i,j);
//         }
//         printf("\n");
//     }
// }
//program tpo print si
// #include<iostream>
// using namespace std;
// int main(){
//     // Si = prt/100
//     int p,r,t,si;
//     cout<<"Enter p :";
//     cin>>p;
//     cout<<"Enter r :";
//     cin>>r;
//     cout<<"Enter t :";
//     cin>>t;

//     si = (p*r*t)/100;
//     cout<<"SI is :"<<si<<endl;

// }
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<5%2<<endl;
//     cout<<34%(-10)<<endl;
//     cout<<(-34)%(10)<<endl;
// }

// char datatype
// #include<iostream>
// using namespace std;
// int main(){
//     // a-z and A-Z
//     // !@#$%^&*
//     //1234567890
//     char x = 'A';
//     int asc = (int)x;
//     cout<<x<<endl; 
//     cout<<asc<<endl; 
//     cout<<'A'+'B'<<endl;
//     cout<<'A'+1<<endl;

// }

// small insides of datatype
// #include<iostream>
// using namespace std;
// int main(){
//     // int/int -> int 
//     // int/float or float/int -> float 
//     // double/int or int/double -> doble
//     // cout<<5+2<<endl;
//     // cout<<10+2<<endl;
//     // cout<<5/2<<endl;
//     int in = 55456;
//     float fl = 5.2;
//     double du = 5.8888888787878844;
//     cout<<in/in<<endl;
//     cout<<in/fl<<endl;
//     cout<<fl/in<<endl;
    
//     cout<<du/in<<endl;
//     cout<<in/du<<endl;
// }
// BODMAS
// #include<iostream>
// using namespace std;
// int main(){
//     float x = 2/3*6;
//     cout<<x<<endl;
// }


// post pre increment opperator
#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int y = 10;
    cout<<x++<<endl;
    cout<<x<<endl;
    
    cout<<++y<<endl;
    cout<<y<<endl;
    cout<<"---------------"<<endl;

    x = 5;
    y = 10;
    cout<<x--<<endl;
    cout<<x<<endl;
    
    cout<<--y<<endl;
    cout<<y<<endl;
}