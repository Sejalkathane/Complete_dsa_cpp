// 1.
//  #include<stdio.h>

// int main()
// {
//     int n=5;

//     for(int i=1;i<=5o5ttttttttt9//     {
//         printf("%d \n",i);
//     }
// }

// 2.

// #include <stdio.h>

// int main()
// {
//     for(int i=100;i<=200;i++)
//     {
//         if(i%2==0)
//         {
//             printf("%d  ",i);
//         }
//     }
// }

// 3.
//  #include <stdio.h>

// int main()
// {
//       for(int i=100;i<=200;i++)
//     {
//         if(i%5==0)
//         {
//             printf("%d  ",i);
//         }
//     }
// }

// 5.

// #include <stdio.h>

// int main()
// {
//     int sum=0;
//       for(int i=101;i<=201;i++)
//     {
//         if(i%2!=0)
//         {
//             sum=sum+i;
//         }
//     }

//     printf("%d",sum);
// }

// 6.

// #include <stdio.h>
// int main()
// {
//     int sum=0;
//       for(int i=100;i<=200;i++)
//     {
//         if(i%2!=0 && i%5==0 && i%3!=0)
//         {
//             sum=sum+i;
//         }
//     }

//     printf("%d",sum);
// }

// 7.

// #include <stdio.h>
// int main()
// {
//     int sum=0;
//       for(int i=100;i<=300;i++)
//     {
//         if(i%5==0 && i%3!=0)
//         {
//             sum=sum+i;
//         }
//     }

//     printf("%d",sum);
// }

// 8.

// #include <stdio.h>
// int main()
// {
//     int num=0;

//    printf("Please enter number: ");
//    scanf("%d",&num);

//    int fact=1;

//    for(int i=1;i<=num;i++)
//    {
//     fact=fact*i;
//    }

//    printf("factorial of %d is %d",num,fact);

// }

// 9.

// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("please enter number : ");
//     scanf("%d", &num);

//     int temp = 1;

//     for (int i = 2; i <= num / 2; i++)
//     {
//         if (num % i == 0)
//         {
//             temp = 0;
//             break;
//         }
//     }

//     if (num <= 1)
//         temp = 0;

//     if (temp == 1)
//     {
//         printf("%d is prime no", num);
//     }
//     else
//     {
//         printf("%d is not a prime no", num);
//     }
// }

// 11.

// int prime(int num)
// {
//       int temp = 1;
//     for (int i = 2; i <= num / 2; i++)
//     {
//         if (num % i == 0)
//         {
//             temp = 0;
//             break;
//         }
//     }

//     if (num <= 1)
//         temp = 0;

//     if (temp == 1)
//     {
//        return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// #include <stdio.h>
// int main()
// {

//    for(int i=1;i<=300;i++)
//    {
//      if(prime(i))
//      {
//         printf("%d  ",i);
//      }
//    }

// }

// 12

// #include <stdio.h>

// int main()
// {
//     for(int i=1990;i<=2090;i++)
//     {
//         if(i%400==0)
//         {
//             printf("%d ",i);
//         }

//         else if(i%4==0)
//         {.
//             printf("%d ",i);
//         }
//     }
// }

// 13.
// 1.
//  #include<stdio.h>

// int main()
// {
//     for (int i = 0; i <= 4; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//          printf("\n");
//     }
//     return 0;

// }

// 2.
//  #include<stdio.h>
//  int main()
//  {

//      for (int i = 5; i >=1; i--)
//     {
//         for (int j = 1; j <=i; j++)
//         {
//            printf("*");
//         }
//         printf("\n");
//     }
//     return 0;

// }

// 3.
//  #include<stdio.h>

// int main()
// {
//      for (int i = 0; i <= 5; i++)
//     {
//         for (int k = 1; k <= 5-i; k++)
//         {
//            printf(" ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             if(i%2!=0){
//             printf("* ");}

//         }
//         printf("\n");
//     }
//     return 0;
// }

// 4
//  #include<stdio.h>
//  int  main()
//  {
//        int k=1;
//      for (int i = 0; i <= 5; i++)
//      {
//          for (int j = 1; j <= i; j++,k++)
//          {
//              printf("%d",i);
//          }
//           printf("\n");
//      }
//      return 0;
//  }

// 5.

// #include<stdio.h>
// int  main()
// {
//       int k=1;
//     for (int i = 0; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++,k++)
//         {
//             printf("%d",j);
//         }
//          printf("\n");
//     }
//     return 0;
// }

// 6.
//  #include<stdio.h>
//  int  main()
//  {
//      char ch='A'-1;
//        int k=1;
//      for (int i = 0; i <= 5; i++)
//      {
//          for (int j = 1; j <= i; j++,k++)
//          {
//              printf("%c ",ch+i);
//          }
//           printf("\n");
//      }
//  }

// 7.

// #include<stdio.h>
// int  main()
// {
//     char ch='A'-1;
//       int k=1;
//     for (int i = 0; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++,k++)
//         {
//             printf("%c ",ch+j);
//         }
//          printf("\n");
//     }
// }

// 10...
// 1.
// same for remanin one
//  #include<stdio.h>

// int main()
// {

//     int sum=0;
//     for(int i=1;i<=11;i++)
//     {
//         if(i%2!=0)
//         {
//             sum=sum+i;
//         }
//     }

//     printf("%d ",sum);
// }














// Q5.

// #include <stdio.h>

// int main()
// {
//     int roll_no;
//     float science, maths, english;

//     printf("please enter student roll no: ");
//     scanf("%d", &roll_no);
//     printf("please enter marks in science : ");
//     scanf("%f", &science);

//     printf("please enter marks in maths : ");
//     scanf("%f", &maths);

//     printf("please enter marks in english : ");
//     scanf("%f", &english);

//     float percent;

//     percent = ((science + maths + english) * 100) / 300;

//     printf("Roll no %d having Percentage: %f \n", roll_no, percent);

//     if (percent >= 40)
//     {
//         printf("Roll no %d is passed! \n", roll_no);
//     }
//     else
//     {
//         printf("Roll no %d is failed! \n", roll_no);
//     }

//     if (percent >= 80 && percent <= 100)
//     {
//         printf("Roll no %d is in A Division \n", roll_no);
//     }

//     else if (percent >= 70 && percent < 80)
//     {
//         printf("Roll no %d is in B Division \n", roll_no);
//     }

//     else if (percent >= 60 && percent < 70)
//     {
//         printf("Roll no %d is in C Division \n", roll_no);
//     }
//     else if (percent >= 50 && percent < 60)
//     {
//         printf("Roll no %d is in D Division \n", roll_no);
//     }
//     else if (percent >= 40 && percent < 50)
//     {
//         printf("Roll no %d is in E Division \n", roll_no);
//     }
//     else
//     {
//         printf("Roll no %d is fail in F Division \n", roll_no);
//     }
// }