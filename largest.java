
import java.util.Scanner;
public class largest{

    public static void main(String[] args) {
       Scanner input =new Scanner(System.in);
           
        System.out.println("Enter the size of the array");
        int n= input.nextInt();

        int[] arr= new int[n];
        System.out.println("Enter the elements of the array");
        for(int i=0;i<arr.length;i++){
            arr[i]=input.nextInt();
        }


        System.out.println("Largest element is :"+ LargestElement(arr));
    }

    static int LargestElement(int[] arr){

     int max;
      max= arr[0];
     
    for(int i=0;i<arr.length;i++){
    if(arr[i]>max){
        max=arr[i];
    }
    
    }

    return max;
    
}
}