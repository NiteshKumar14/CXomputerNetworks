import java.util.Scanner;
class Matrix{
  int arr[][];
  int row;
  int col;
Matrix(int r,int c)
{
  row=r;
  col=c;
  arr=new int[r][c];
}
void addMatrix(Matrix m){
if((this.row==m.row)&&this.col==m.col)
  {
    int i,j;
    Matrix temp=new Matrix(this.row,this.col);
   
    for(i=0;i<row;i++)
    {
      for( j=0;j<col;j++)
      {
        temp.arr[i][j]=this.arr[i][j]+m.arr[i][j];
      }
    }
    temp.display();
  }


else
  {
    System.out.println(" Addition not possible ");
  }}
void subMatrix(Matrix m){
if((this.row==m.row)&&this.col==m.col)
  {
    int i,j;
    Matrix temp=new Matrix(this.row,this.col);
   
    for(i=0;i<row;i++)
    {
      for( j=0;j<col;j++)
      {
        temp.arr[i][j]=this.arr[i][j]-m.arr[i][j];
      }
    }
    temp.display();
  }


else
  {
    System.out.println(" Subtraction not possible ");
  }}




void insert(){
  Scanner sc=new Scanner(System.in);
  int temp;
  System.out.println("insert values in Matrix");
for(int i=0;i<this.row;i++)
{
  for(int j=0;j<this.col;j++)
  {
      System.out.print("["+i+"]"+"["+j+"]");
      temp=sc.nextInt();
      this.arr[i][j]=temp;
  }
  System.out.println("");
}




}
 void display()
 {
     for(int i=0;i<this.row;i++)
{
  for(int j=0;j<this.col;j++)
  {

      System.out.print(this.arr[i][j]);
            System.out.print("\t");
  }
        System.out.println();
}
System.out.println();

 }
 void multiply(Matrix  m)
 {int i,j,k;
 Matrix temp = null;
 if(col==m.row){
 temp=new Matrix(this.row,m.col);
     for(i = 0; i <this.row; ++i)
     {for(j = 0; j < m.col; ++j)
           for(k = 0; k <this.col; ++k)
           {
               temp.arr[i][j] += arr[i][k] * m.arr[k][j];
           }
 }
 temp.display();
 }
 else
 {
     System.out.println("multiplication not possible ");
     return;
 }





 }
void transpose()
{
    int i=0;
    Matrix temp;
    temp=new Matrix(col,row);
    for(i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            temp.arr[j][i]=arr[i][j];
        }
    }
    temp.display();
    
    
    
    
    
    
    
    
}

 
 
 
}


class DemoMatrix
{
   public static void main(String[] args)
   {

        int n=0;
        Scanner s=new Scanner(System.in);

                    System.out.println("enter the row and col respectively");
                    int r,c;
                    r=s.nextInt();
                    c=s.nextInt();
                   Matrix m=new Matrix(r,c);
                    m.insert();
                    m.display();
                    System.out.println("enter the row and col respectively");
                    r=s.nextInt();
                    c=s.nextInt();
                    Matrix m1=new Matrix(r,c);
                    m1.insert();
                    m1.display();
        System.out.println("enter the specific  number to execute the following command ");
        do
        {
            System.out.println(" 1.addMatrix \n 2.Subtract matrix \n 3.Multiply matrix \n 4.Transpose \n 5.Exit");
            n=s.nextInt();
            switch(n)
            {

                case 1:
                {
                    m1.addMatrix(m);
                    break;
                }
                case 2:
                {
                   m1.subMatrix(m);
                   break;
                }
                case 3:
                {
                    m1.multiply(m);
                    break;
                }
                case 4:
                { System.out.println("which matrix wanna transpose matrix 1 or 2");
                int choice;
                choice=s.nextInt();
                if(choice==1)
                {   m.display();
                    m.transpose();
                    
                }
                    
                else {
                    m1.display();
                    m1.transpose();
                   
                }
                 break;
                }
                case 5:
                {
                    n=0;
                    break;
                }
                default:
                {
                    System.out.println("enter a valid option");
                  
                    break;
                }
            }




        }
        while(n!=0);

   }

}

