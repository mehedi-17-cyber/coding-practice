public class FindElement {
  
  static int find(int[] arr, int val) {
    for(int i = 0; i < arr.length; i++) {
      if(arr[i] == val) return i;
    }
    return -1;
  }
  
  public static void main(String... args) {
    
    int[] arr = {5,7,3,8,9,2};
    int val = 2;
    int index = find(arr,val);
    
    if(index!=-1) {
      System.out.println("The value "+val+" found at "+index+"th index");
    }
    else {
      System.out.println("The value "+val+" not found!");
    }
  }
}