class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int i,j;
        //code here
        for(i=1;i<n;i++)
        {
            int cur = a[i];
            j = i-1;
            while(a[j]>cur){
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=cur;
        }
    }
    
};
