//Given the x and y coordinates of the centre of the circle and the radius of the circle, wap that takes x and y coordinates of a point as input and outputs whether the point lies inside,outside or on the circle.
#include<stdio.h>
#include<conio.h>
#include<math.h>
  int main()
{
   int x,y,r,x1,y1,p;
   printf("\n Enter the coordinates of the centre of circle ");
   printf("\n Enter the x-coordinate ");
   scanf("\n %d",&x);
   printf("\n Enter the y-coordinate ");
   scanf("\n %d",&y);
   printf("\n Enter the radius of circle r: ");
   scanf("\n %d",&r);
   printf("\n Enter the coordinates of the point ");
   printf("\n Enter the x-coordinate ");
   scanf("\n %d",&x1);
   printf("\n Enter the y-coordinate ");
   scanf("\n %d",&y1);
   p=(sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y)));
   if(p>r)
   printf("\n Point lies out side of the circle ");
   else{
   if(p<r)
    printf("\n Point lies inside the circle ");
   else
   printf("\n Point lies on the circle");
}
getch();
  return 0;
}

