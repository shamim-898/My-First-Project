 #include<stdio.h>
 int main()
 {
  int a;
  float f;
  char c;
  double d;
  printf("Enter the intiser vlue,\n");
  scanf("%d",&a);
  printf("Enter the float vlue,\n");
  scanf(" %f",&f);
  printf("Enter the charectur vlue,\n");
  scanf(" %c", &c);
  printf("Enter the double vlue,\n");
  scanf(" %lf",&d);
  printf("intiser vlue:%d\n",a);
  printf("float vlue, %.2f\n",f);
  printf(" charectur vlue,%c\n",c);
  printf("double vlue,%.3lf\n",d);
  return 0;
 }

