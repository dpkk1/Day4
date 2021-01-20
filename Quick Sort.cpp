//Quick Sort 

int partition (int a[], int l, int h)
{
   int pivot = a[l];
   int i = l;
   for(int j=l+1;j<=h;j++){
       if(pivot >= a[j]){
           i++;
           swap(a[i],a[j]);
       }
   }
   swap(a[i],a[l]);
   return i;
}

