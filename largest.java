

public class largest{

    public static void main(String[] args) {
        int[] arr={ 3, 5 , 78, 45,86};

        System.out.println(LargestElement(arr));
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