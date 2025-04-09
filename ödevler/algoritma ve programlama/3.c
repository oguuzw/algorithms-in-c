#include <stdio.h>
#include <math.h>
int main()
{
    int Ax=300,Ay=200;
    int Bx=10,By=10;
    int Cx=20,Cy=240;
    int Dx=100,Dy=15;
    int Ex=150,Ey=250;

    float AveB,AveC,AveD,AveE;
    float BveC,BveD,BveE;
    float CveD,CveE;
    float DveE;
    AveB= sqrt((Ax-Bx)*(Ax-Bx)+(Ay-By)*(Ay-By));
    AveC= sqrt((Ax-Cx)*(Ax-Cx)+(Ay-Cy)*(Ay-Cy));
    AveD= sqrt((Ax-Dx)*(Ax-Dx)+(Ay-Dy)*(Ay-Dy));
    AveE= sqrt((Ax-Ex)*(Ax-Ex)+(Ay-Ey)*(Ay-Ey));
    BveC= sqrt((Bx-Cx)*(Bx-Cx)+(By-Cy)*(By-Cy));
    BveD= sqrt((Bx-Dx)*(Bx-Dx)+(By-Dy)*(By-Dy));
    BveE= sqrt((Bx-Ex)*(Bx-Ex)+(By-Ey)*(By-Ey));
    CveD= sqrt((Cx-Dx)*(Cx-Dx)+(Cy-Dy)*(Cy-Dy));
    CveE= sqrt((Cx-Ex)*(Cx-Ex)+(Cy-Ey)*(Cy-Ey));
    DveE= sqrt((Dx-Ex)*(Dx-Ex)+(Dy-Ey)*(Dy-Ey));
    
    /*
    printf("%f\n",AveB);
    printf("%f\n",AveC);
    printf("%f\n",AveD);
    printf("%f\n",AveE);
    printf("%f\n",BveC);
    printf("%f\n",BveD);
    printf("%f\n",BveE);
    printf("%f\n",CveD);
    printf("%f\n",CveE);
    printf("%f\n",DveE);
    */

   printf("Tum durumlar\n");
   printf("Durum1 : A-B-C-D-E-A\n");
   printf("Durum2 : A-B-C-E-D-A\n");
   printf("Durum3 : A-B-D-E-C-A\n");
   printf("Durum4 : A-B-E-D-C-A\n");
   printf("Durum5 : A-C-B-D-E-A\n");
   printf("Durum6 : A-C-B-E-D-A\n");
   printf("Durum7 : A-C-D-E-B-A\n");
   printf("Durum8 : A-C-E-D-B-A\n");
   printf("Durum9 : A-D-E-C-B-A\n");
   printf("Durum10: A-D-E-B-C-A\n");
   printf("Durum11: A-E-D-C-B-A\n");
   printf("Durum12: A-E-D-B-C-A\n\n");

   printf("En kisa yol = ");


    if(AveB<AveC & AveB<AveD & AveB<AveE)
    {
        printf("A-B");
        if(BveC<BveD & BveC<BveE)
        {
            printf("B-C");
            if(CveD<CveE)
            {
                printf("C-D-E-A");
            }
            else
            {
                printf("C-E-D-A");
            }
        }
        else if(BveD<BveC & BveD<BveE)
        {
            printf("B-D-E-C-A");

        }
        else{
            printf("B-E-D-C-A");
        }
    }
    else if(AveC<AveB & AveC<AveD & AveC<AveE)
    {
        printf("A-C");
        if(BveC<CveD & BveC<CveE)
        {
            printf("-B");
            if(BveD<BveE)
            {
                printf("-D-E-A");
            }
            else{
                printf("-E-D-A");
            }
        }
        else if(CveD<BveC & CveD<CveE)
        {
            printf("-D-E-B-A");
        }
        else{
            printf("-E-D-B-A");
        }
    }
    else if(AveD<AveB & AveD<AveC & AveD<AveE)
    {
        printf("A-D-E");
        if(CveE<BveE)
        {
            printf("-C-B-A");
        }
        else{
            printf("-B-C-A");
        }
    }
    else
    {
        
        printf("A-E-D");
        if(BveD<BveC)
        {
            printf("-B-C-A");
        }
        else{
            printf("-C-B-A");
        }
    }

    return 0;
}
