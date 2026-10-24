import java.util.*;

public class MoveZerosToTheEnd {
  public static void main(String... args) {
    
    int[] arr = {1,0,2,3,0,4,5,6,0,7};
    int index = 0;
    for(int i : arr) {
      if(i!=0) arr[index++] = i;
    }
    while(index < arr.length) arr[index++] = 0;
    System.out.println(Arrays.toString(arr));
  }
}
