#include<stdio.h>
/*int main()
{
    int i=2;

    switch(i)
    {
        case 1:
             printf("i am in case 1\n");
        case 2:
             printf("i am in case 2\n");
        case 3:
             printf(" i am in case 3\n");
        default:
             printf("i am in default\n");

                }
                return 0;
}


//if on;y want print case2 then use break

int main()
{
    int i=2;

    switch(i)
    {
        case 1:
             printf("i am in case 1\n");
             break;
        case 2:
            printf("i am in case 2\n");
            break;
        case 3:
            printf("i am in case 3\n");
            break;
        default:
            printf("i am in default \n");
        
    }
    return 0;
}

//scrambled case order
int main()
{
    int i=22;

    switch(i)
    {
        case 121:
              printf("i am in case 121\n");
              break;
        case 7:
              printf("i an in case 7\n");
              break;
        case 22:
              printf("i in case 22\n");
              break;
        default:
              printf("i an in default\n");

    }
    return 0;
}
//also use char in switch and case value

int main()
{
    char c='x';

    switch(c)
    {
        case 'v':
              printf("i am in case v \n");
              break;
        case 'a':
              printf("i am in case a\n");
              break;
        case 'x':
              printf("i am in case x\n");
              break;
        default:
              printf("i am in default\n");

    }
    return 0;
}
// common set of multiple cases

int main()
{
   char ch;

   printf("enter any one of the alphabets a,b & c");
   scanf("%c",&ch);

   switch(ch)
   {
      case 'a':
      case 'A':
            printf("a in ashar\n");
            break;
      case 'b':
      case 'B':
            printf("b as in brain\n");
            break;
      case 'c' :
      case 'C' :
            printf("c as in cookie\n");
            break;
      default:
           printf("wish you knew what are alphabets\n");

    return 0;
      
   }
}
//if statment dosen't belong to any case, the compiler won't report an error.

int main()
{
    int i,j;

    printf("enter the vslue of i");
    scanf("%d",&i);

    switch(i)
    {
        printf("Hello\n");
        case 1:
            j=10;
            break;
        case 2:
            j=20;
            break;
    }
    printf("%d",j);
    return 0;
}

int main()
{
    int i,j,k,l;

    printf("enter the vslue of i,j,k");
    scanf("%d %d %d",&i,&j,&k);

    switch(i+j*k)
    {
        printf("Hello\n");
        case 3+7:
            l=10;
            break;
        case 2:
            l=20;
            break;
    }
    printf("%d",l);
    return 0;
}

//continue keyword give error in switch function
//float never tested in switch

int main()
{
    char suit=3;
    switch(suit)
    {
        case 1:
             printf("diamond\n");
        case 2:
             printf("Spade\n");
        default:
             printf("Heart\n");
    }
    printf("i thought one wear a suit\n");
    return 0;
}

int main()
{
    int c=3;
    switch(c)
    {
        case '3':
              printf("you never win the silver prize\n");
              break;
        case 3:
              printf("you always lose the gold prize\n");
              break;
        default:
              printf("of course provided you win a prize\n");

    }
    return 0;
}

int main()
{
    int i=3;
    switch(i)
    {
        case 0:
            printf("coutmers are dicey\n");
        case 1+0:
            printf("Markets are pricey\n");
        case 4/2:
            printf("investors are moody\n");
        case 8%5:
            printf("At least employees are good\n");
    }
    return 0;
}

int main()
{
    int k;
    float j=2.0;
    switch(k=j+1)
    {
        case 3:
            printf("Trapped\n");
            break;
        default:
            printf("Caught!\n");
    }
    return 0; 
}

int main()
{
    int ch = 'a'+'b';
    switch(ch)
    {
        case 'a':
        case 'b':
            printf("you entered b\n");
        case 'A':
            printf("a as in ashar\n");
        case 'b'+'a':
            printf("you entered a and b\n");
   }
   return 0;

}

int main()
{
    int a=3,b=4,c;
    c=b-a;
    switch(c)
    {
        case 1||2:
            printf("gpd give me an opportunity to change things\n");
            break;
        case a||b:
            printf("god give me an opportunity to run my show\n");
            break;
    }
    return 0;
}
//menu driven program
int main()
{
    int i,j,k,fact;

    while(1)
    {
        printf("**in the menu driven as follows\n");
        printf("1. factorial of a number\n");
        printf("2. priime number or not\n");
        printf("3. even and odd\n");
        printf("4. exit menu\n");
        printf(" enter the number want to select in menu\n");
        scanf("%d",&i);
        

        switch(i)
        {
            case 1:
                fact =1;
                printf("enter the number want to know factorial\n");
                scanf("%d",&j);
                for(k=j;k>=1;k--) fact *= k;
                printf("factorial: %11d\n", fact);
                break;
                
            case 2:
                fact=0;
                printf("enter the number want to know prime or not\n");
                scanf("%d",&j);
                if(j<=1) printf("%d is not prime .\n", j);
                else{
                    for(k=2 ;k<j/2+1;k++){
                    if(j%k==0) fact=1;
                    }

                    if( fact==0) printf("%d number is prime number\n",j);
                    else printf("%d number is not a prime number\n",j);
            }
                break;
            case 3:
                printf("enter the number want to know odd or even\n");
                scanf("%d",&j);
                if(j%2==0) printf("%d is even number\n",j);
                else printf("%d is odd , \n",j);
                break;
            case 4:
                printf("exiting program . \n");
                exit(0);
            default:
                printf("invalid choice , please try again. \n");
                }
                    }
                        
    
    return 0;
}

int main()
{
    int sub,class;

    printf("enter the class of student\n");
    scanf("%d",&class);

    switch(class)
    {
        case 1:
            printf("enter the number of subject faild in\n");
            scanf("%d",&sub);
            if(sub<=3) printf("5 marks include as grase marks per subject\n");
            else printf("not getting any grace marks");
            break;
        case 2:
            printf("enter the number of subject faild in\n");
            scanf("%d",&sub);
            if(sub<=2) printf("getting 2 grace marks per subject\n");
            else printf("not give any grace marks\n");
            break;
        case 3:
            printf("enter the number of subject faild in\n");
            scanf("%d",&sub);
            if(sub=1) printf("getting 5 marks as grace marks per subject\n");
            else printf("not give any grace marks\n");
            break;
        default:
            printf("invalid class input\n");
    }
}
    */
   