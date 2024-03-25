//Question 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b = 1;
//     a = 10;
//     if (++a)
//     {
//         cout << b;  
//     }
//     else
//         cout << b++;
// }
// if loop will execute first o/p=1

//Q2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a=1, b = 2;
//     if(a-- > 0 && ++b >2){
//         cout << "stage1 - inside if"<<endl;
        
//     }else{
//         cout << "stage2 -inside else";
//     }
//     cout << a<< " "<< b << endl;
//     }
    //o/p stage1 - inside if 0 3

//Q3

// #include <iostream>
// using namespace std;

// int main() {
//   int num=3;
//   cout << (25*(++num)) << endl;  //o/p 100
// }

//Q4
// #include <iostream>
// using namespace std;

// int main() {
//  int a=1;
//  int b=a++;  //b=1 then a incremented by 1 a=2
//  int c=++a;  // c=3 ,a=3
//   cout << b << endl;
//   cout << c << endl;
//  cout << a << endl;
// }

//Q5
#include <iostream>
using namespace std;
int main()
{
    int a=1, b = 2;
    if(a-- > 0 || ++b >2){
        cout << "stage1 - inside if"<<endl;
        
    }else{
        cout << "stage2 -inside else";
    }
    cout << a<< " "<< b << endl;
    }
//(++b > 2) is not evaluated since the first part is true. Therefore, b remains unchanged. i.e b=2 
//stage1 - inside if 0 2







