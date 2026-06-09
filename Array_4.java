class Array_4
{
    public static void main(String A[]) 
    {
        int Arr[]={10,20,30,40,50};
        int Brr[]=new int[3];

        Brr[1]=60;
        Brr[2]=70;
        Brr[0]=80;

        for(int i=0;i<Arr.length;i++)
        {
            System.out.print(Arr[i]+" ");
        }
        System.out.println();

        for(int i=0;i<Brr.length;i++)
        {
            System.out.print(Brr[i]+" ");
        }
        System.out.println(); 
    }

}