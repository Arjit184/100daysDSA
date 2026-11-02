
import java.util.Scanner;
public class floor {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the number of elements");
        int n = input.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements"); 
        for (int i = 0; i < arr.length; i++) {
            arr[i] = input.nextInt();
        }
        int target=1;
        int ans= floor(arr,target);
        System.out.println(ans);
    }
     static int floor(int[] arr, int target){

        if(target<arr[0]){
            return -1;
        }
         int start=0;
         int end=arr.length-1;

         while(start<=end){
             int mid= (start+end)/2;

             if(target<arr[mid]){
                 end=mid-1;
             }
             else if(target>arr[mid]){
                 start=mid+1;
             }
             else{
                 return mid;
             }
         }
         return end;
     }
}
