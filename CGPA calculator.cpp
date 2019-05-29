#include <stdio.h>
#include <math.h>
int main()
{
    int grade[13],marks[13],i;
    float credits[13]={4.0,3.0,3.0,3.0,1.0,2.0,3.0,1.0,1.0,2.0,1.0,2.0,1.0};
    float gpa[13],sum1=0;
    float SGPA,x,y,z,theory=0,practical=0,sum=0;
    printf ("\t\t\t\t\t Made by MANAK\n\t\t\t\t\tUploaded on github\n");
    printf ("Lets calculate your CGPA... \nEnter your marks here:\n");
    printf ("APPLIED MATHEMATICS:\n");
    scanf ("%d",&marks[0]);
    printf ("APPLIED PHYSICS\n");
    scanf ("%d",&marks[1]);
    printf ("ENGINEERING MECHANICS\n");
    scanf ("%d",&marks[2]);
    printf ("ELECTRICAL\n");
    scanf ("%d",&marks[3]);
    printf ("HVPE\n");
    scanf ("%d",&marks[4]);
    printf ("FOC\n");
    scanf ("%d",&marks[5]);
    printf ("APPLIED CHEMISTRY\n");
    scanf ("%d",&marks[6]);
    printf ("APPLIED PHYSICS LAB\n");
    scanf ("%d",&marks[7]);
    printf ("ELECTRONICS LAB\n");
    scanf ("%d",&marks[8]);
    printf ("WORKSHOP\n");
    scanf ("%d",&marks[9]);
    printf ("FOC LAB\n");
    scanf ("%d",&marks[10]);
    printf ("ENGINEERING DRAWING\n");
    scanf ("%d",&marks[11]);
    printf ("APPLIED CHEMISTRY LAB\n");
    scanf ("%d",&marks[12]);
    for (i=0;i<=12;i++)
    {sum=sum+marks[i];}
    x=sum/13;
    printf ("Your overall aggregate is: %f\n",x);
    for (i=0;i<=6;i++)
    {theory=theory+marks[i];}
    for (i=7;i<=12;i++)
    {practical=practical+marks[i];}
    y=theory/7;
    z=practical/6;
    printf ("The aggregate for theory is %f\n",y);
    printf ("The aggregate for practicals is %f\n",z);
    for (i=0;i<13;i++)
    {
        if (marks [i]>=90)
            {grade[i]=10;}
        else if (marks[i]>=75 && marks[i]<90)
            {grade[i]=9;}
        else if (marks[i]>=60 && marks[i]<75)
            {grade[i]=8;}
        else if (marks[i]>=50 && marks[i]<60)
            {grade[i]=7;}
        else if (marks[i]>=40 && marks[i]<50)
            {grade[i]=6;}
        else if (marks[i]>=30 && marks[i]<40)
            {grade[i]=5;}
        else if (marks[i]>=20 && marks[i]<30)
            {grade[i]=4;}
        else if (marks[i]>=10 && marks[i]<20)
            {grade[i]=3;}
        else if (marks[i]<10)
            {grade[i]=1;}
    }
    for (i=0;i<13;i++)
    {
        gpa[i]=grade[i]*credits[i];
    }
    for (i=0;i<13;i++)
        {sum1=sum1+gpa[i];}
    SGPA=sum1/27;
    printf ("Your SGPA is: %f",SGPA);
    printf ("\nIn this semester CGPA is equal to SGPA\nTHANK YOU!! :)");
    return 0;
}
