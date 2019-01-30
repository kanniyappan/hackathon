  int i,j,a=0,o=0,x=0,a1=0,o1=0,x1=0;
  for(i=1;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
      if((i&j)<k)
      a=i&j;
      if(a>=a1){
          a1=a;
      }
      if((i|j)<k)
      o=i|j;
      if(o>=o1){
          o1=o;
      }
      if((i^j)<k)
      x=i^j;
      if(x>=x1){
          x1=x;
      }
      }
        
  }
  printf("%d\n%d\n%d\n",a1,o1,x1);

}
