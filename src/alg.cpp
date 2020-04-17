int countPairs1(int *arr,int len,int value)
{
    int c = 0;
    for (int i = 0; i < len-1; i++)
    {
         for (int j = i + 1; j < len; j++)
         { 
            if (arr[i] + arr[j] == value)
                c++;
         } 
    }
               return c;
}
int countPairs2(int *arr,int len,int value)
{
    int c = 0;
    for (int i = 0; i < len-1; i++)
    {
         for(int j = len-1; j > i; j--)
         { 
            if (arr[i] + arr[j] == value)
                c++;
         } 
    }
               return c;
}
int countPairs3(int *arr,int len,int value)
{
    int c = 0;
    for (int i = 0; i < len - 1; i++)
    {
       int left = i;
       int right = len;
       
       while (left<right-1)
       {
           int k = (left + right)/2;
           if (arr[i] + arr[k] == value)
           {
              c++; 
              int j = k+1;
              while (arr[i] + arr[j] == value && j<right)
              {
                  c++;
                  j++;
              }
               int j = k-1;
              while (arr[i] + arr[j] == value && j<left)
              {
                 c++;
                 j--;
              }
              break;
       }
       if (arr[i] + arr[k] > value)
             right = k;
       else 
             left = k;
       
      }
   }
    return c;  
}
